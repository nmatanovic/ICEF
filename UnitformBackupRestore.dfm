object FormBackupRestore: TFormBackupRestore
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMaximize]
  Caption = 'Pregled/Restorovanje BackUp-ovanih Baza'
  ClientHeight = 635
  ClientWidth = 555
  Color = clWhite
  Constraints.MinHeight = 300
  Constraints.MinWidth = 360
  Ctl3D = False
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnResize = FormResize
  PixelsPerInch = 96
  TextHeight = 16
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 555
    Height = 33
    Align = alTop
    BevelOuter = bvNone
    Caption = 'Panel1'
    Ctl3D = True
    ParentColor = True
    ParentCtl3D = False
    ShowCaption = False
    TabOrder = 0
    object cxLabel2: TcxLabel
      Left = 439
      Top = 0
      Align = alRight
      Caption = 'Auto BackUp Fajlovi'
    end
    object cxLabel1: TcxLabel
      Left = 0
      Top = 0
      Align = alLeft
      Caption = 'Ru'#269'no kreirani BackUp Fajlovi'
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 558
    Width = 555
    Height = 77
    Align = alBottom
    BevelOuter = bvNone
    Caption = 'Panel2'
    Ctl3D = True
    ParentColor = True
    ParentCtl3D = False
    ShowCaption = False
    TabOrder = 1
    DesignSize = (
      555
      77)
    object cxButton1: TcxButton
      Left = 8
      Top = 6
      Width = 75
      Height = 25
      Hint = 'Aktivira selektovanu bazu iz BackUp za Pregled'
      Caption = 'Aktiviraj'
      ParentShowHint = False
      ShowHint = True
      TabOrder = 0
      OnClick = cxButton1Click
    end
    object cxButton2: TcxButton
      Left = 8
      Top = 37
      Width = 75
      Height = 25
      Hint = 'Restoruje bazu iz BackUp'
      Caption = 'Restoruj'
      ParentShowHint = False
      ShowHint = True
      TabOrder = 1
      OnClick = cxButton2Click
    end
    object cxButton3: TcxButton
      Left = 255
      Top = 6
      Width = 75
      Height = 25
      Hint = 'Aktivira selektovanu bazu iz Auto BackUp za Pregled'
      Caption = 'Aktiviraj'
      TabOrder = 2
      OnClick = cxButton3Click
    end
    object cxButton4: TcxButton
      Left = 255
      Top = 37
      Width = 75
      Height = 25
      Hint = 'Restoruje bazu iz Auto BackUp'
      Caption = 'Restoruj'
      TabOrder = 3
      OnClick = cxButton4Click
    end
    object cxButton5: TcxButton
      Left = 472
      Top = 6
      Width = 75
      Height = 25
      Anchors = [akTop, akRight]
      Caption = 'Zatvori'
      TabOrder = 4
      OnClick = cxButton5Click
    end
  end
  object Panel3: TPanel
    Left = 0
    Top = 33
    Width = 555
    Height = 525
    Align = alClient
    BevelOuter = bvNone
    Caption = 'Panel3'
    Ctl3D = True
    ParentColor = True
    ParentCtl3D = False
    ShowCaption = False
    TabOrder = 2
    object LB1: TFileListBox
      Left = 0
      Top = 0
      Width = 249
      Height = 525
      Align = alLeft
      Ctl3D = False
      ExtendedSelect = False
      Mask = '*rucno*'
      ParentCtl3D = False
      TabOrder = 0
    end
    object LB2: TFileListBox
      Left = 249
      Top = 0
      Width = 306
      Height = 525
      Align = alClient
      Ctl3D = False
      ExtendedSelect = False
      ParentCtl3D = False
      TabOrder = 1
    end
  end
end
