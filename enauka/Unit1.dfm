object Form1: TForm1
  Left = 241
  Top = 130
  Width = 445
  Height = 278
  Caption = 'Enauka'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  DesignSize = (
    429
    239)
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 0
    Top = 0
    Width = 233
    Height = 49
    Alignment = taCenter
    AutoSize = False
    Color = clBtnText
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clRed
    Font.Height = -31
    Font.Name = 'System'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object Label2: TLabel
    Left = 240
    Top = 0
    Width = 185
    Height = 47
    Alignment = taCenter
    Anchors = [akLeft, akTop, akBottom]
    AutoSize = False
    Color = clMedGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -31
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object Label3: TLabel
    Left = 248
    Top = 72
    Width = 177
    Height = 17
    Alignment = taCenter
    AutoSize = False
    Color = clMedGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object Label4: TLabel
    Left = 248
    Top = 104
    Width = 177
    Height = 17
    Alignment = taCenter
    AutoSize = False
    Color = clMedGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object BitBtn1: TBitBtn
    Left = 56
    Top = 184
    Width = 105
    Height = 41
    Caption = 'Sprawd'#378'!'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = BitBtn1Click
  end
  object BitBtn2: TBitBtn
    Left = 40
    Top = 136
    Width = 137
    Height = 41
    Caption = 'Nast'#281'pne pytanie'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = BitBtn2Click
  end
  object Memo1: TMemo
    Left = 64
    Top = 72
    Width = 81
    Height = 41
    Alignment = taCenter
    Color = clBlack
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clRed
    Font.Height = -31
    Font.Name = 'System'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
  end
  object Memo2: TMemo
    Left = 328
    Top = 152
    Width = 33
    Height = 57
    Lines.Strings = (
      'Mem'
      'o2')
    TabOrder = 3
    Visible = False
  end
  object czas: TTimer
    OnTimer = czasTimer
    Left = 16
    Top = 80
  end
  object OpenDialog1: TOpenDialog
    FileName = 'wyniki.txt'
    Left = 16
    Top = 112
  end
  object SaveDialog1: TSaveDialog
    FileName = 'wyniki.txt'
    Left = 16
    Top = 144
  end
end
