//system libs
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include <cstdlib>


using namespace std;

//create file function with parameters
void createFile(const std::string& filename) {
//takes string filename as parameter and creates file with the recieved name
    ofstream file(filename);
    //eroor handling of case where file cant get created
    if (!file) {
        cerr << "Error: Failed to create file " << filename <<endl;
        exit(1);//exits program showing return of 1 indication error occured
    }
    //function succesfull output on the screen
    cerr << "File " << filename << " created successfully." << endl;
}
 
 //open and read inside of file function
void readFile(const std::string& filename) {
//also takes the filename styring as parametr and opens it displaying its inside text etc...
    ifstream file(filename);
    //error case handling 
    if (!file) {
        cerr << "Error: Failed to open file " << filename << " for reading." << endl;
        exit(1);//exits  1 indicating error occursion
    }
    //console sceen output of file contents
    cerr << "Contents of file " << filename << ":" << endl;
    string line;
    while (getline(file, line)) {
        cerr << line << endl;
    }
}


//update current files inside text
void updateFile(const std::string& filename, const std::string& content) {
//function for updating file insides by getting as parameters the filename to find the file and the text as string you want to add to the file
    ofstream file(filename);
    //eror case handling
    if (!file) {
        cerr << "Error: Failed to open file " << filename << " for writing." << endl;
        exit(1);
    }
    //write file content to the file and print outoput accordingly
    file << content;
    cerr << "File " << filename << " updated successfully." <<endl;
}


//delete files taking filename as parameter
void deleteFile(const std::string& filename) {
//function for deleting an already existing file taking the filename as parameter
    if (remove(filename.c_str()) != 0) {
        cerr << "Error: Failed to delete file " << filename << endl;
        exit(1);
    }
    //console output
    cerr << "File " << filename << " deleted successfully." <<endl;
}




//main function
int main(int argc, char *argv[]) {


    // condition that checks if the number of terminal arguments is less than 2
if (argc < 2) {
    // Print usage information and available commands to the console for helping the user
    cerr << "Usage: " << argv[0] << " <command> [arguments]" << endl;
    cerr << "Available commands: create, read, update, delete" << endl;
    // Exit with error code 1 indication eroor occursion
    return 1;
}

// Extracts the command from the command-line arguments
string command = argv[1];

// condition that checks which command was provided and execute corresponding actions
if (command == "create") {
    // If the command is "create"
    if (argc != 3) {
        // Print usage information for the "create" command
        cerr << "Usage: " << argv[0] << " create <filename>" << endl;
        // Exit with error code 1
        return 1;
    }
    // Call createFile function with the provided filename
    createFile(argv[2]);
    
} 
else if (command == "read") {
    // If the command is "read"
    if (argc != 3) {
        // Print usage information for the "read" command
        cerr << "Usage: " << argv[0] << " read <filename>" <<endl;
        // Exit with error code 1 to show error occursion and handle it accordingly
        return 1;
    }
    // Calls the  readFile function with the provided filename
    readFile(argv[2]);
    
} 
else if (command == "update") {
    // If the command is "update"
    if (argc != 4) {
        // Print usage information for the "update" command
        cerr << "Usage: " << argv[0] << " update <filename> <content>" << endl;
        // >>>>>>>>>>>
        return 1;
    }
    // Calls the  updateFile function with the provided filename and content
    updateFile(argv[2], argv[3]);
    
} else if (command == "delete") {
    // If the command is "delete"
    if (argc != 3) {
        // Print usage information for the "delete" command
        cerr << "Usage: " << argv[0] << " delete <filename>" << endl;
        // >>>>>>>>
        return 1;
    }
    // Call deleteFile function with the provided filename
    deleteFile(argv[2]);
} 


else {
    // If the command is invalid print this to help user execute the programm corectly
    cerr << "Invalid command. Available commands: create, read, update, delete" << endl;
   
    return 1;//<<<<<<<<
}

//end of progrsmm execution
return 0;

}
