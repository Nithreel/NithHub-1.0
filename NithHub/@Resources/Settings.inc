[Variables]

Font=Nexa Light
SkinWidth=1920
SkinHeigth=1080
Bar=(#SkinWidth#/5)
NApp=5
NFolder=5
NGame=4
A3=30

MainColor=20,20,20,150
Background=20,20,20,150
ColorApp1=214,51,51,150
ColorApp2=43,196,45,150
ColorApp3=78,113,178,150
ColorApp4=20,21,22,150
ColorApp5=27,119,115,150
ColorApp6=224,86,0,150
ColorApp7=18,83,168,150
ColorApp8=18,168,63,150
ColorApp9=43,133,206,150
ColorApp10=234,118,35,150
ColorFolder=0,0,0,40
Off=0,0,0,1
BarColor1=255,255,255,120
BarColor2=255,255,255

Open=[!ActivateConfig NithHub\Background Background.ini][!ActivateConfig NithHub\Buttons Buttons.ini][!ActivateConfig NithHub App.ini][!ActivateConfig NithHub\Info Info.ini][!ActivateConfig NithHub\Off Off.ini][!DeactivateConfig NithHub\Button Button.ini]
Exit=[!DeactivateConfig NithHub App.ini][!DeactivateConfig NithHub Folder.ini][!DeactivateConfig NithHub Game.ini][!DeactivateConfig NithHub\Info Info.ini][!DeactivateConfig NithHub\Buttons Buttons.ini][!DeactivateConfig NithHub\Off Off.ini][!DeactivateConfig NithHub\Background Background.ini][!ActivateConfig NithHub\Button Button.ini]