object FormLogin: TFormLogin
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Logovanje'
  ClientHeight = 153
  ClientWidth = 422
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 16
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 422
    Height = 41
    Align = alTop
    BevelOuter = bvNone
    Caption = 'Panel1'
    ParentColor = True
    ShowCaption = False
    TabOrder = 0
    ExplicitWidth = 355
    object Label1: TLabel
      Left = 0
      Top = 0
      Width = 422
      Height = 35
      Align = alTop
      AutoSize = False
      Caption = 'INOVACIONI CENTAR ELEKTROTEHNI'#268'KOG FAKULTETA U BEOGRADU'
      Color = clBlue
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentColor = False
      ParentFont = False
      Transparent = False
      WordWrap = True
      ExplicitWidth = 431
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 41
    Width = 422
    Height = 71
    Align = alClient
    BevelOuter = bvNone
    Caption = 'Panel1'
    ParentColor = True
    ShowCaption = False
    TabOrder = 1
    ExplicitWidth = 355
    ExplicitHeight = 74
    object cxLabel1: TcxLabel
      Left = 56
      Top = 7
      Caption = 'Korisnik'
    end
    object cxLabel2: TcxLabel
      Left = 56
      Top = 37
      Caption = 'Lozinka'
    end
    object cxTextEdit1: TcxTextEdit
      Left = 120
      Top = 6
      Properties.MaxLength = 10
      TabOrder = 2
      Width = 245
    end
    object cxTextEdit2: TcxTextEdit
      Left = 120
      Top = 36
      Properties.EchoMode = eemPassword
      Properties.MaxLength = 10
      TabOrder = 3
      Width = 245
    end
  end
  object Panel3: TPanel
    Left = 0
    Top = 112
    Width = 422
    Height = 41
    Align = alBottom
    BevelOuter = bvNone
    Caption = 'Panel1'
    ParentColor = True
    ShowCaption = False
    TabOrder = 2
    ExplicitTop = 115
    ExplicitWidth = 355
    object cxButton1: TcxButton
      Left = 130
      Top = 6
      Width = 75
      Height = 25
      Caption = 'OK'
      ModalResult = 1
      TabOrder = 0
    end
    object cxButton2: TcxButton
      Left = 228
      Top = 6
      Width = 75
      Height = 25
      Caption = 'Otka'#382'i'
      ModalResult = 2
      TabOrder = 1
    end
  end
end
