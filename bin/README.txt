moin meister !


Qt InstalL:


sudo apt install qtcreator
sudo apt-get install qt5-qmake qtbase5-dev qtbase5-dev-tools
sudo apt install cmake



erst mit cmake die Makefile generieren lassen (falls Änderungen vorgenommen), dann Bauen !
aus dem /build heraus eine ebene nach oben -> Makefile wird im /build abgelegt, exe kommt in /bin rein (in config festgelegt)

comitten:
bitte den ganzen building schmarrn lokal lassen (nur den gitkeep adden, nicht die logs etc)

bauen:
cd build
cmake ..
make

ausführen:
./../bin/BallerStats
