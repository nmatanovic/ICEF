object FormKoefEdit: TFormKoefEdit
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Pregled/Izmena Koeficijenata'
  ClientHeight = 171
  ClientWidth = 394
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 16
  object Label1: TLabel
    Left = 0
    Top = 0
    Width = 394
    Height = 48
    Align = alTop
    Caption = 
      'Ovi koeficijenti predstavljaju odnose za bruto i neto zarade, ho' +
      'norare i ugovore o delu. Voditi ra'#269'una da budu a'#382'urni, i svakog ' +
      'meseca ih usaglasiti sa "ra'#269'unovodstvom".'
    Color = clRed
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
    Transparent = False
    WordWrap = True
    ExplicitWidth = 392
  end
  object cxButton1: TcxButton
    Left = 311
    Top = 135
    Width = 75
    Height = 25
    Caption = 'Otka'#382'i'
    TabOrder = 0
    OnClick = cxButton1Click
  end
  object cxDBSpinEdit1: TcxDBSpinEdit
    Left = 80
    Top = 81
    DataBinding.DataField = 'KOEFICIJENT'
    DataBinding.DataSource = DataSourceAH
    Properties.AssignedValues.MinValue = True
    Properties.Increment = 0.050000000000000000
    Properties.MaxValue = 1.000000000000000000
    Properties.SpinButtons.Position = sbpHorzLeftRight
    TabOrder = 1
    Width = 121
  end
  object cxDBSpinEdit2: TcxDBSpinEdit
    Left = 80
    Top = 108
    DataBinding.DataField = 'KOEFICIJENT'
    DataBinding.DataSource = DataSourceUG
    Properties.AssignedValues.MinValue = True
    Properties.Increment = 0.050000000000000000
    Properties.MaxValue = 1.000000000000000000
    Properties.SpinButtons.Position = sbpHorzLeftRight
    TabOrder = 2
    Width = 121
  end
  object cxDBSpinEdit3: TcxDBSpinEdit
    Left = 80
    Top = 135
    DataBinding.DataField = 'KOEFICIJENT'
    DataBinding.DataSource = DataSourceZR
    Properties.AssignedValues.MinValue = True
    Properties.Increment = 0.050000000000000000
    Properties.MaxValue = 1.000000000000000000
    Properties.SpinButtons.Position = sbpHorzLeftRight
    TabOrder = 3
    Width = 121
  end
  object cxLabel1: TcxLabel
    Left = 24
    Top = 82
    Caption = 'AH'
  end
  object cxLabel2: TcxLabel
    Left = 24
    Top = 109
    Caption = 'UG'
  end
  object cxLabel3: TcxLabel
    Left = 24
    Top = 136
    Caption = 'ZR'
  end
  object cxButton2: TcxButton
    Left = 311
    Top = 104
    Width = 75
    Height = 25
    Caption = 'Zapamti'
    TabOrder = 7
    OnClick = cxButton1Click
  end
  object DataSourceAH: TDataSource
    DataSet = DataModule1.ADOTableStavkaTip
    Left = 96
    Top = 152
  end
  object DataSourceUG: TDataSource
    DataSet = DataModule1.ADOTableStavkaTip
    Left = 32
    Top = 152
  end
  object DataSourceZR: TDataSource
    DataSet = DataModule1.ADOTableStavkaTip
    Left = 168
    Top = 152
  end
end
