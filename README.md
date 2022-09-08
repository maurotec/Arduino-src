# Arduino-src
Collezione di skecht con diverso albero dei sorgenti.

Ci sono diversi modi di organizzare l'albero dei sorgenti di uno sketch con Arduino IDE.
L'argomento è trattato con maggiore dettaglio seguento questo [link](https://programmersqtcpp.blogspot.com/2022/07/arduino-sketch-multi-file.html)

## importLiquidCrystal
Questo sketch usa una versione modificata della libreria LiquidCystal. Il sorgente di questa
libreria è incluso nell'albero dei sorgenti, stessa cosa per la libreria MTRelay. Nota che ciò è possibile
con Arduino IDE solo grazie alla presenza della cartella *src* la quale contiene le altre due cartella: `LiquidCrystal` e `MTRelay`. 

- **Difetto:** Con Arduino IDE non è possibile aprire una tab per modificare uno dei file .h o .cpp contenuto nelle cartelle.
