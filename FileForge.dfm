object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 546
  ClientWidth = 838
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label3: TLabel
    Left = 8
    Top = 20
    Width = 93
    Height = 15
    Caption = 'Available Options'
  end
  object Label4: TLabel
    Left = 200
    Top = 111
    Width = 111
    Height = 15
    Caption = 'Command Summary'
  end
  object Label1: TLabel
    Left = 200
    Top = 47
    Width = 78
    Height = 15
    Caption = 'Enter Filename'
  end
  object Panel2: TPanel
    Left = 8
    Top = 488
    Width = 801
    Height = 1
    TabOrder = 0
  end
  object Button11: TButton
    Left = 632
    Top = 503
    Width = 75
    Height = 25
    Caption = 'OK'
    TabOrder = 1
    OnClick = Button11Click
  end
  object Button12: TButton
    Left = 734
    Top = 503
    Width = 75
    Height = 25
    Caption = 'EXIT'
    TabOrder = 2
    OnClick = Button12Click
  end
  object Button1: TButton
    Left = 8
    Top = 98
    Width = 121
    Height = 43
    Caption = 'Delete'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 8
    Top = 49
    Width = 121
    Height = 43
    Caption = 'Create'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 8
    Top = 196
    Width = 121
    Height = 43
    Caption = 'Edit'
    TabOrder = 5
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 8
    Top = 147
    Width = 121
    Height = 43
    Caption = 'Rename'
    TabOrder = 6
    OnClick = Button4Click
  end
  object Memo1: TMemo
    Left = 200
    Top = 132
    Width = 545
    Height = 89
    Lines.Strings = (
      'Memo1')
    TabOrder = 7
  end
  object CheckBox1: TCheckBox
    Left = 479
    Top = 52
    Width = 161
    Height = 56
    Caption = 'Validate Filename'
    TabOrder = 8
  end
  object Memo2: TMemo
    Left = 200
    Top = 68
    Width = 273
    Height = 24
    Lines.Strings = (
      'Memo2')
    TabOrder = 9
    OnChange = Memo2Change
  end
  object TreeView1: TTreeView
    Left = 8
    Top = 336
    Width = 737
    Height = 97
    Indent = 19
    TabOrder = 10
    Items.NodeData = {
      0304000000300000000000000000000000FFFFFFFFFFFFFFFF00000000000000
      000200000001094400690072006500630074006F007200790036000000000000
      0000000000FFFFFFFFFFFFFFFF000000000000000000000000010C7300750062
      006400690072006500630074006F00720079001E0000000000000000000000FF
      FFFFFFFFFFFFFF00000000000000000400000001002400000000000000000000
      00FFFFFFFFFFFFFFFF00000000000000000000000001037300750062001E0000
      000000000000000000FFFFFFFFFFFFFFFF000000000000000000000000010024
      0000000000000000000000FFFFFFFFFFFFFFFF00000000000000000000000001
      036400690072001E0000000000000000000000FFFFFFFFFFFFFFFF0000000000
      0000000000000001001E0000000000000000000000FFFFFFFFFFFFFFFF000000
      0000000000000000000100240000000000000000000000FFFFFFFFFFFFFFFF00
      000000000000000000000001037200720072001E0000000000000000000000FF
      FFFFFFFFFFFFFF0000000000000000000000000100}
  end
end
