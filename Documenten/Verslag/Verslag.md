# Analyse
## Small mindmap
![20180905_172313](https://user-images.githubusercontent.com/26321858/45103638-a6377900-b130-11e8-9125-fdec3194d7f5.jpg)
De mindmap is onderverdeeld in 2 belangerijke onderwerpen = HARDWARE en SOFTWARE.
Dit was een snelle schets om een beeld te kunnen maken hoe ik zou moeten beginnen.
Er werd beschreven on onze opdracht dat we 2 ultrasonic sensoren moesten gebruiken om een hoek van 90 graden te kunnen detecteren.
Dit doen we aan de hand met de distance van de sensoren. De gewenste distance coordinaten kunnen worden ingegeven met een bluetooth.
Dus we zenden met een bluetooth app via de terminal de data voor onze coordinaten.
Om meerdere hoeken te kunnen checken gebruiken we een servo om de sensoren te kunnen draaien in de geweneste positie.
Waar ook bluetooth wordt gebruikt. 
Als de coordinaten juist zijn zal er een led lampje branden.

## Software mindmap
![exam](https://user-images.githubusercontent.com/26321858/45113111-be67c200-b149-11e8-8975-1f6f2a598452.jpg)

De software mindmap is even om te schetsen wat we gaan gebruiken en wat we met de code kunnen bereiken.
Wat het eigenlijk allemaal zou moeten doen zodat we dit stap voor stap kunnen uitvoeren in arduino editor.
We beginnen met eerste simpele dingen zoals de sensor waarbij we de distance uitprinten daarna schrijven we 
de gewenste distance waarbij de led lampje gaat branden. Daarna de servo dat we onze sensoren kunnen draaien.
Met de bluetooth gedeelte willen we data kunnen ontvangen waar we bv. ook kunnen zeggen wanneer de led lamp
moet branden als we coordinaten doorsturen. We kunnen ook via bluetooth bij een bepaalde bit zeggen dat onze
servo motor 60 graden zou moeten draaien voor onze sensoren.

## Project stappen

### ultrasonic sensor, ledje - gedeetle 1
Ik was eerst met de opbouw van mijn sensoren begonnen zodat ik een hoek van 90 graden kan bereiken en kan opmeten.
Hierbij heb ik een kleinere breadboard gebruikt. ![20180905_173028](https://user-images.githubusercontent.com/26321858/45104239-eea36680-b131-11e8-94f2-fcca40009773.jpg)
Na dit heb ik eerst 1 sensor aangesloten met de arduino nano en de code geschreven ofdat ik de afstanden krijg zoals het hoort.
Mijn volgende stap was 2 sensors aan te sluiten toen ondervond ik problemen bij het aflezen van de afstanden na wat experimenteren met de
delay was het opgelost. Ik heb ook een ledje geplaats als de afstanden overeenkomen dan brand het ledje zoals gevraagd.

### Servo - gedeelte 2
 
De servo was een no brainer heel makkelijk om te plaatsen op de kleine breadboard en de code was vrij makkelijk.
Via bluetooth kunnen we de Servo laten bewegen als ik een karakter door stuur via de bluetooth terminal.
De servo kan 60,120,180 graden draaien. 

![servobluetoothvb](https://user-images.githubusercontent.com/26321858/45111386-249e1600-b145-11e8-8334-2d1a68a530d9.PNG)

### Bluetooth - gedeetle 3

Verder was het de bedoeling dat we bluetooth gebruiken. Ik kan data doosturen via een bluetooth app met deze data kunnen we de servo
laten draaien. 


![pc2](https://user-images.githubusercontent.com/26321858/45108301-86a64d80-b13c-11e8-868a-bf59af37aba0.jpg)

## Componenten 
* Arduino nano
* 2 * ultrasonic sensor 
* Bluetooth Module HC06
* Servo Motor
* Led Lamp
* 330 Ressistor

## MultiSim Design
In de multisim design heb ik alle componenten ingevoegd. Hierbij werd wel een losse Atmega328P gebruikt.
Dus hier moesten we nog een crystal toevoegen en capacitors anders zou de atmega niet werken.
Ik kon nog een schakeling maken bij de rxd,txd en Reset pin. Zodat we met een UART kabel code zouden kunnen uploaden.
Anders moeten we de atmega steeds op de breadboard of een arduino uno plaatsen om code te uploaden.
Om het terug te zetten op de pcb wat een lastige zaak is met de pinnen die heel makkelijk afbreken.

![design](https://user-images.githubusercontent.com/26321858/45111075-4fd43580-b144-11e8-8147-84429657003e.PNG)
## PCB
Daarna word de multisim design overgezet naar ultiboard om aan onze PCB design te kunnen werken.
Hier is het gewoon knutsel werk om alle componenten op de jusite plaats te zetten. Hierbij moeten we ook na 
gaan of dat onze lijnen dik genoeg zijn zodat er stroom overkan zonder een probleem.

![1](https://user-images.githubusercontent.com/26321858/45111088-5a8eca80-b144-11e8-9f29-d4825409f601.PNG)
![2](https://user-images.githubusercontent.com/26321858/45111103-6084ab80-b144-11e8-98d1-e820ec8a1d83.PNG)
![3](https://user-images.githubusercontent.com/26321858/45111112-65495f80-b144-11e8-9a11-b20f78efa833.PNG)

## Conclussie

Om eerlijk te zijn heb ik niet veel bij geleerd. Door het eerste project was ik steeds aan het helpen met de code
zelf dus dit project zelf maken heeft niet lang geduurd. Alles gaat veel vlotter dankzij de robot project waar ik veel
heb bijgeleerd. 

### Opmerking

Ik heb geen registers gebruikt ben laat met het project gestart. Bedoeling was dit eerst zonder registers schrijven en daarna te 
converteren in registeres. Dat zou het makkelijker maken om met registers te beginnen.
