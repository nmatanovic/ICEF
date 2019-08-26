object FormPrint: TFormPrint
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMaximize]
  Caption = #352'tampa'
  ClientHeight = 659
  ClientWidth = 676
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object frxPreview1: TfrxPreview
    Left = 0
    Top = 0
    Width = 676
    Height = 618
    Align = alClient
    BevelInner = bvNone
    BevelOuter = bvNone
    BorderStyle = bsNone
    OutlineVisible = False
    OutlineWidth = 120
    ThumbnailVisible = False
    UseReportHints = True
  end
  object Panel1: TPanel
    Left = 0
    Top = 618
    Width = 676
    Height = 41
    Align = alBottom
    BevelOuter = bvNone
    BorderStyle = bsSingle
    Caption = 'Panel1'
    Ctl3D = False
    ParentColor = True
    ParentCtl3D = False
    ShowCaption = False
    TabOrder = 1
    DesignSize = (
      674
      39)
    object cxButton1: TcxButton
      Left = 575
      Top = 5
      Width = 75
      Height = 25
      Anchors = [akTop, akRight]
      Caption = 'Otka'#382'i'
      TabOrder = 0
      OnClick = cxButton1Click
    end
    object cxButton2: TcxButton
      Left = 487
      Top = 5
      Width = 75
      Height = 25
      Anchors = [akTop, akRight]
      Caption = #352'tampaj'
      TabOrder = 1
      OnClick = cxButton2Click
    end
  end
  object frxUserDataSet1: TfrxUserDataSet
    UserName = 'frxUserDataSet1'
    OnCheckEOF = frxUserDataSet1CheckEOF
    OnFirst = frxUserDataSet1First
    OnNext = frxUserDataSet1Next
    Fields.Strings = (
      'Uplata'
      'Datum'
      'Trosak'
      'StavkaTip'
      'Bruto_Naknada'
      'Neto_Naknada'
      'ZSIC_Fond'
      'ZSEF_Fond'
      'KOMENTAR')
    OnGetValue = frxUserDataSet1GetValue
    Left = 48
    Top = 120
  end
  object frxReport1: TfrxReport
    Version = '4.10.5'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    Preview = frxPreview1
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 40124.963602963000000000
    ReportOptions.LastChange = 40588.026639675920000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      ''
      'begin'
      ''
      'end.')
    OnBeforePrint = frxReport1BeforePrint
    Left = 48
    Top = 48
    Datasets = <
      item
        DataSet = frxUserDataSet1
        DataSetName = 'frxUserDataSet1'
      end>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
    end
    object Page1: TfrxReportPage
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -8
      Font.Name = 'Arial Narrow'
      Font.Style = []
      Orientation = poLandscape
      PaperWidth = 297.000000000000000000
      PaperHeight = 210.000000000000000000
      PaperSize = 9
      LeftMargin = 10.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      object MasterData1: TfrxMasterData
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clMaroon
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = []
        Height = 15.118110240000000000
        ParentFont = False
        Top = 211.653680000000000000
        Width = 1046.929810000000000000
        AllowSplit = True
        DataSet = frxUserDataSet1
        DataSetName = 'frxUserDataSet1'
        RowCount = 0
        object Memo1: TfrxMemoView
          Align = baLeft
          Width = 83.149606300000000000
          Height = 18.897650000000000000
          ShowHint = False
          DataField = 'Uplata'
          DataSet = frxUserDataSet1
          DataSetName = 'frxUserDataSet1'
          DisplayFormat.FormatStr = '%2.2n'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haRight
          Memo.UTF8W = (
            '[frxUserDataSet1."Uplata"]')
          ParentFont = False
        end
        object Memo2: TfrxMemoView
          Align = baLeft
          Left = 83.149606300000000000
          Width = 83.149606300000000000
          Height = 18.897650000000000000
          ShowHint = False
          DataField = 'Datum'
          DataSet = frxUserDataSet1
          DataSetName = 'frxUserDataSet1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          HAlign = haRight
          Memo.UTF8W = (
            '[frxUserDataSet1."Datum"]')
          ParentFont = False
        end
        object Memo8: TfrxMemoView
          Align = baLeft
          Left = 166.299212600000000000
          Width = 83.149606300000000000
          Height = 18.897650000000000000
          ShowHint = False
          DataField = 'Trosak'
          DataSet = frxUserDataSet1
          DataSetName = 'frxUserDataSet1'
          DisplayFormat.FormatStr = '%2.2n'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          HAlign = haRight
          Memo.UTF8W = (
            '[frxUserDataSet1."Trosak"]')
          ParentFont = False
        end
        object Memo12: TfrxMemoView
          Align = baLeft
          Left = 249.448818900000000000
          Width = 83.149606300000000000
          Height = 18.897650000000000000
          ShowHint = False
          DataField = 'StavkaTip'
          DataSet = frxUserDataSet1
          DataSetName = 'frxUserDataSet1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          HAlign = haRight
          Memo.UTF8W = (
            '[frxUserDataSet1."StavkaTip"]')
          ParentFont = False
        end
        object Memo14: TfrxMemoView
          Align = baLeft
          Left = 332.598425200000000000
          Width = 83.149606300000000000
          Height = 18.897650000000000000
          ShowHint = False
          DataField = 'Bruto_Naknada'
          DataSet = frxUserDataSet1
          DataSetName = 'frxUserDataSet1'
          DisplayFormat.FormatStr = '%2.2n'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          HAlign = haRight
          Memo.UTF8W = (
            '[frxUserDataSet1."Bruto_Naknada"]')
          ParentFont = False
        end
        object Memo15: TfrxMemoView
          Align = baLeft
          Left = 415.748031500000000000
          Width = 83.149606299212600000
          Height = 18.897650000000000000
          ShowHint = False
          DataField = 'Neto_Naknada'
          DataSet = frxUserDataSet1
          DataSetName = 'frxUserDataSet1'
          DisplayFormat.FormatStr = '%2.2n'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          HAlign = haRight
          Memo.UTF8W = (
            '[frxUserDataSet1."Neto_Naknada"]')
          ParentFont = False
        end
        object Memo16: TfrxMemoView
          Align = baLeft
          Left = 498.897637799212700000
          Width = 83.149606300000000000
          Height = 18.897650000000000000
          ShowHint = False
          DataField = 'ZSIC_Fond'
          DataSet = frxUserDataSet1
          DataSetName = 'frxUserDataSet1'
          DisplayFormat.FormatStr = '%2.2n'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          HAlign = haRight
          Memo.UTF8W = (
            '[frxUserDataSet1."ZSIC_Fond"]')
          ParentFont = False
        end
        object Memo20: TfrxMemoView
          Align = baLeft
          Left = 582.047244099212700000
          Width = 83.149606300000000000
          Height = 18.897650000000000000
          ShowHint = False
          DataField = 'ZSEF_Fond'
          DataSet = frxUserDataSet1
          DataSetName = 'frxUserDataSet1'
          DisplayFormat.FormatStr = '%2.2n'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          HAlign = haRight
          Memo.UTF8W = (
            '[frxUserDataSet1."ZSEF_Fond"]')
          ParentFont = False
        end
        object Memo24: TfrxMemoView
          Left = 672.755910390000000000
          Width = 366.614356300000000000
          Height = 18.897650000000000000
          ShowHint = False
          DataField = 'KOMENTAR'
          DataSet = frxUserDataSet1
          DataSetName = 'frxUserDataSet1'
          DisplayFormat.FormatStr = '%2.2n'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8W = (
            '[frxUserDataSet1."KOMENTAR"]')
          ParentFont = False
        end
      end
      object Band2: TfrxPageHeader
        Font.Charset = ANSI_CHARSET
        Font.Color = clBlack
        Font.Height = -8
        Font.Name = 'Arial Narrow'
        Font.Style = []
        Height = 18.897650000000000000
        ParentFont = False
        Top = 132.283550000000000000
        Width = 1046.929810000000000000
        object Memo4: TfrxMemoView
          Align = baLeft
          Left = 249.448818899212600000
          Width = 83.149606299212600000
          Height = 18.897637795275600000
          ShowHint = False
          Color = clWhite
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clMaroon
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Color = clGray
          Frame.Typ = [ftBottom]
          HAlign = haRight
          Memo.UTF8W = (
            'Tip')
          ParentFont = False
          VAlign = vaBottom
        end
        object Memo5: TfrxMemoView
          Align = baLeft
          Left = 415.748031497637800000
          Width = 83.149606299212600000
          Height = 18.897637795275600000
          ShowHint = False
          Color = clWhite
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clMaroon
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Color = clGray
          Frame.Typ = [ftBottom]
          HAlign = haRight
          Memo.UTF8W = (
            'Neto naknada')
          ParentFont = False
          VAlign = vaBottom
        end
        object Memo6: TfrxMemoView
          Align = baLeft
          Left = 83.149606299212610000
          Width = 83.149606300000000000
          Height = 18.897637800000000000
          ShowHint = False
          Color = clWhite
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clMaroon
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Color = clGray
          Frame.Typ = [ftBottom]
          HAlign = haRight
          Memo.UTF8W = (
            'Datum')
          ParentFont = False
          VAlign = vaBottom
        end
        object Memo7: TfrxMemoView
          Align = baLeft
          Left = 166.299212599212600000
          Width = 83.149606300000000000
          Height = 18.897637800000000000
          ShowHint = False
          Color = clWhite
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clMaroon
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Color = clGray
          Frame.Typ = [ftBottom]
          HAlign = haRight
          Memo.UTF8W = (
            'Tro'#353'ak')
          ParentFont = False
          VAlign = vaBottom
        end
        object Memo3: TfrxMemoView
          Align = baLeft
          Width = 83.149606299212600000
          Height = 18.897637795275600000
          ShowHint = False
          Color = clWhite
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clMaroon
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Color = clGray
          Frame.Typ = [ftBottom]
          HAlign = haRight
          Memo.UTF8W = (
            'Uplata')
          ParentFont = False
          VAlign = vaBottom
        end
        object Memo13: TfrxMemoView
          Align = baLeft
          Left = 582.047244096850400000
          Width = 83.149606300000000000
          Height = 18.897637800000000000
          ShowHint = False
          Color = clWhite
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clMaroon
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Color = clGray
          Frame.Typ = [ftBottom]
          HAlign = haRight
          Memo.UTF8W = (
            'Fond ZSEF')
          ParentFont = False
          VAlign = vaBottom
        end
        object Memo17: TfrxMemoView
          Align = baLeft
          Left = 332.598425198425200000
          Width = 83.149606299212600000
          Height = 18.897637795275600000
          ShowHint = False
          Color = clWhite
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clMaroon
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Color = clGray
          Frame.Typ = [ftBottom]
          HAlign = haRight
          Memo.UTF8W = (
            'Bruto naknada')
          ParentFont = False
          VAlign = vaBottom
        end
        object Memo19: TfrxMemoView
          Align = baLeft
          Left = 498.897637796850400000
          Width = 83.149606300000000000
          Height = 18.897637800000000000
          ShowHint = False
          Color = clWhite
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clMaroon
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Color = clGray
          Frame.Typ = [ftBottom]
          HAlign = haRight
          Memo.UTF8W = (
            'Fond ZSIC')
          ParentFont = False
          VAlign = vaBottom
        end
        object Memo21: TfrxMemoView
          Left = 665.196850400000000000
          Width = 374.173416300000000000
          Height = 18.897637800000000000
          ShowHint = False
          Color = clWhite
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clMaroon
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Color = clGray
          Frame.Typ = [ftBottom]
          Memo.UTF8W = (
            '  Komentar  ')
          ParentFont = False
          VAlign = vaBottom
        end
      end
      object ReportTitle1: TfrxReportTitle
        Height = 91.669325509999990000
        Top = 18.897650000000000000
        Width = 1046.929810000000000000
        object MemoProjektIme: TfrxMemoView
          Left = 106.204724410000000000
          Top = 28.346456692913390000
          Width = 453.541865650000000000
          Height = 17.007876460000000000
          ShowHint = False
          AutoWidth = True
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            '___')
          ParentFont = False
        end
        object MemoTotal: TfrxMemoView
          Left = 106.204724410000000000
          Top = 67.472480000000000000
          Width = 404.409710000000000000
          Height = 17.007876460000000000
          ShowHint = False
          DisplayFormat.FormatStr = '%2.2n'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            'ukupno_iznos()')
          ParentFont = False
        end
        object Memo25: TfrxMemoView
          Left = 11.338582680000000000
          Top = 67.252010000000000000
          Width = 42.279326460000000000
          Height = 17.007876460000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            'Total:')
          ParentFont = False
        end
        object Memo10: TfrxMemoView
          Left = 480.000310000000000000
          Width = 566.929500000000000000
          Height = 26.456710000000000000
          ShowHint = False
          AutoWidth = True
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -15
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            'INOVACIONI CENTAR ELEKTROTEHNI'#268'KOG FAKULTETA U BEOGRADU')
          ParentFont = False
        end
        object MemoVodja: TfrxMemoView
          Left = 106.204724410000000000
          Top = 48.354330710000000000
          Width = 453.541865650000000000
          Height = 17.007876460000000000
          ShowHint = False
          AutoWidth = True
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            '___')
          ParentFont = False
        end
        object Memo11: TfrxMemoView
          Left = 11.338582680000000000
          Top = 28.346456692913390000
          Width = 83.854156460000000000
          Height = 17.007876460000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            'Projekat:')
          ParentFont = False
        end
        object Memo18: TfrxMemoView
          Left = 11.338582680000000000
          Top = 48.354330710000000000
          Width = 83.854156460000000000
          Height = 17.007876460000000000
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            'Rukovodilac:')
          ParentFont = False
        end
        object Shape1: TfrxShapeView
          Left = -0.755905511811024000
          Top = 86.929190000000000000
          Width = 1039.370750000000000000
          Height = 1.133858270000000000
          ShowHint = False
          Color = clBlack
        end
      end
      object PageFooter1: TfrxPageFooter
        Height = 22.677180000000000000
        Top = 317.480520000000000000
        Width = 1046.929810000000000000
        object Memo22: TfrxMemoView
          Align = baLeft
          Left = 49.433210000000000000
          Width = 139.842610000000000000
          Height = 18.897650000000000000
          ShowHint = False
          Memo.UTF8W = (
            '[Page]')
        end
        object Memo23: TfrxMemoView
          Left = 4.078850000000000000
          Width = 45.354360000000000000
          Height = 18.897650000000000000
          ShowHint = False
          Memo.UTF8W = (
            'Strana')
        end
        object Memo9: TfrxMemoView
          Align = baRight
          Left = 907.087200000000000000
          Width = 139.842610000000000000
          Height = 18.897650000000000000
          ShowHint = False
          HAlign = haRight
          Memo.UTF8W = (
            '[DATE]')
        end
      end
      object ReportSummary1: TfrxReportSummary
        Height = 7.559060000000000000
        Top = 287.244280000000000000
        Width = 1046.929810000000000000
        object Shape2: TfrxShapeView
          Left = -1.062770000000000000
          Top = 3.779530000000022000
          Width = 1039.370750000000000000
          Height = 1.133858267716540000
          ShowHint = False
          Color = clBlack
        end
      end
    end
  end
end
