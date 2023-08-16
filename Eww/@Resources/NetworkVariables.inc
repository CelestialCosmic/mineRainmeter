;//////////////////////////////////////////////////////////////////////////////////////////////////
;                                     Network Meter Settings
;//////////////////////////////////////////////////////////////////////////////////////////////////

[Variables]
; background
BgAlpha=80
BgStyle=2

; bar graph position
BarPosX=82

; font appearance
ColorFontTitle=255,255,255
ColorFontSubtitle=144,238,144
ColorInfoText1=107,198,250
ColorInfoText2=201,205,209
FontName=Segoe UI
FontSize1=8
FontSize2=9
FontSizeS=7

; color palette
PaletteColor1=107,238,98
PaletteColor2=255,246,42
PaletteColor3=250,158,0
PaletteColor4=236,28,70
PaletteColor5=199,36,199
PaletteColor6=145,70,232
PaletteColor7=42,112,250
PaletteColor8=43,224,224
PaletteColor9=121,182,62
PaletteColor10=204,255,0
PaletteColor11=250,205,22
PaletteColor12=191,100,55
PaletteColor13=201,41,56
PaletteColor14=179,0,91
PaletteColor15=153,84,166
PaletteColor16=99,125,217

; scale factor
Scale=1

; text position
TextPosX=8

; network autoconfig, prevents infinite looping
;  0 = don't run autoconfig
;  1 = run autoconfig if all interfaces set to blank
InterfaceAutoConfig=0

;
; Set the interface name identifiers to match your system.  If your machine does not have have an
; adapter of the specified type, or to turn off monitoring, use blank ("") as the identifier.  Set
; all interfaces to blank ("") to have the Network Meter gadget report on all adapters, but if you
; have any virtualized interfaces active, the NetIn/NetOut/NetTotal measures will be incorrect. Use
; the Settings gadget to configure these values or enter them here.  Unless you have a machine with
; multiple network cards installed (i.e., like a server), you should only have one ACTIVE PHYSICAL
; network interface of each type, all other reported interfaces should be virtual or disconnected.
;
InterfaceBroadband=
InterfaceEthernet=Realtek PCIe GBE Family Controller #4
InterfaceWireless=
