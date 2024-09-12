#include <vcl.h>
#pragma hdrstop

#include "FileForge.h"
#include <System.IOUtils.hpp>  // Required for TDirectory and TFile operations
#include <ShellAPI.h>          // Required for ShellExecute

//---------------------------------------------------------------------------

#pragma package(smart_init)
#pragma resource "*.dfm"
#include <System.Generics.Collections.hpp>  // For TArray
TForm3 *Form3;

//---------------------------------------------------------------------------

__fastcall TForm3::TForm3(TComponent* Owner)
    : TForm(Owner)
{
    // Optionally initialize anything here
}

//---------------------------------------------------------------------------

void __fastcall TForm3::Button12Click(TObject *Sender)
{
    Application->Terminate();
}

//---------------------------------------------------------------------------

void __fastcall TForm3::Button11Click(TObject *Sender)
{
    Application->MessageBox(L"OK message", L"Notification", MB_OK);
}

//---------------------------------------------------------------------------

void __fastcall TForm3::Memo2Change(TObject *Sender)
{
    // Store the content of Memo2 as the filename
    filename = Memo2->Text.Trim(); // Remove any leading/trailing spaces
}

//---------------------------------------------------------------------------

void __fastcall TForm3::Button2Click(TObject *Sender)
{
    if (!filename.IsEmpty())
    {
        try
        {
            // Create an empty file or save some content to the file with the name stored in filename
            TStringList *fileContent = new TStringList();
            fileContent->Text = L"File created with name from Memo2!";
            fileContent->SaveToFile(filename);
            delete fileContent;

            Application->MessageBox(L"File created successfully!", L"Success", MB_OK);
        }
        catch (Exception &e)
        {
            Application->MessageBox(e.Message.c_str(), L"Error", MB_OK);
        }
    }
    else
    {
        Application->MessageBox(L"No filename specified in Memo2.", L"Error", MB_OK);
    }
}

//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
    String filename = Memo2->Text.Trim(); // Retrieve filename from Memo2

    if (!filename.IsEmpty())
    {
        // Attempt to delete the file
        if (DeleteFile(filename))
        {
            Application->MessageBox(L"File deleted successfully!", L"Success", MB_OK);
        }
        else
        {
            Application->MessageBox(L"File could not be deleted. It may not exist.", L"Error", MB_OK);
        }
    }
    else
    {
        Application->MessageBox(L"No filename specified in Memo2.", L"Warning", MB_OK);
    }
}

//---------------------------------------------------------------------------

void __fastcall TForm3::Button4Click(TObject *Sender)
{
    String oldFilename = Memo2->Text.Trim(); // Retrieve the old filename from Memo2

    if (!oldFilename.IsEmpty())
    {
        // Prompt the user for the new filename
        String newFilename = InputBox(L"Rename File", L"Enter the new filename with extension:", L"");

        if (!newFilename.IsEmpty())
        {
            // Attempt to rename the file
            if (RenameFile(oldFilename, newFilename))
            {
                Application->MessageBox(L"File renamed successfully!", L"Success", MB_OK);
            }
            else
            {
                Application->MessageBox(L"File could not be renamed. It may not exist or is in use.", L"Error", MB_OK);
            }
        }
        else
        {
            Application->MessageBox(L"No new filename entered.", L"Warning", MB_OK);
        }
    }
    else
    {
        Application->MessageBox(L"No filename specified in Memo2.", L"Warning", MB_OK);
    }
}

//---------------------------------------------------------------------------

void __fastcall TForm3::Button3Click(TObject *Sender)
{
    String filename = Memo2->Text.Trim(); // Retrieve the filename from Memo2

    if (!filename.IsEmpty())
    {
        if (FileExists(filename))
        {
            // Open the file in the default text editor (like Notepad)
            ShellExecute(0, L"open", filename.w_str(), NULL, NULL, SW_SHOWNORMAL);
        }
        else
        {
            Application->MessageBox(L"File does not exist.", L"Error", MB_OK);
        }
    }
    else
    {
        Application->MessageBox(L"No filename specified in Memo2.", L"Warning", MB_OK);
    }
}

//---------------------------------------------------------------------------


