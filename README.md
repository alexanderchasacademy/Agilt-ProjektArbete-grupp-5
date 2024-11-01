Fyra-i-rad för tre


-------------Programbeskrivning------------

Programmet är ett konsolprogram spel i C++ som är en modifierad fyra-i-rad. Det utbjuder en expanderad variant av det klassiska brädspelet där spelarna försöker få fyra i rad. i vår version spelar tre spelare samtidigt, och sedan turas om att välja kolumner där deras symboler faller ner till lägsta lediga positionen i kolumner rutnät. spelaren som har sina symboler i rad, lodrätt,vågrätt eller diagonalt, vinner spelet. 

Spelet är designat för att ge användaren ett lätthanterlig spel direkt i terminalen, med funktioner som validering av spelardrag, indikering av vinnare och möjlighet att starta om spelet efter varje omgång 

--------------Installation------------------

För att ladda ner och installera spelet krävs det att du har ett operativsystem kompatibelt med programmeringsspråket C++. 
Ladda ner GIT repot genom att antingen klona eller forka repot.
Öppna mappen i en miljö kapabel av att kompilera koden. 
Kör .exe filen skapad från kompilatorn i en passande miljö för att köra spelet. 

Programmet är i princip helhet skapad utifrån ett objekt programmerat tillvägagångssätt.

-----------------Metoder-------------------

Menyval: Användarna kan välja att starta spelet, läsa spelreglerna eller avsluta spelet.
Anpassningsbara ikoner: Spelarna kan välja sina egna symboler för att representera sig själva på spelbrädet eller använda de förinställda symbolerna (x, y, z).
Fyra i Rad-mekanism: Spelet slutar när en spelare får fyra symboler i rad, horisontellt, vertikalt eller diagonalt, eller om spelbrädet blir fullt.
Sparad spelplan: Spelplanen är en 8x8-array som uppdateras efter varje drag.
Byt spelare: Turordningen växlar automatiskt efter varje drag.
Avsluta: Spelare kan avsluta spelet via kommandot 101 och avsluta programmet via menyn.

----------------Användning-----------------
Huvudmeny:
När programmet startas visas en huvudmeny med tre alternativ:
Starta Spelet: Startar ett nytt spel och låter spelarna välja sina symboler.
Visa Spel Regler: Visar reglerna för Fyra i Rad och förklarar målet med spelet.
Avsluta Spelet: Avslutar programmet.

----------------Spelregler----------------
Målet är att få fyra symboler i rad - horisontellt, vertikalt eller diagonalt - genom att turas om att släppa en spelbricka i en vald kolumn. Om spelbrädet fylls utan att någon spelare får fyra i rad, blir det oavgjort.

-----------------Spelmekanik--------------
Byt spelare: Efter varje drag växlas turen automatiskt till nästa spelare.
Placera symbol: Spelaren väljer en kolumn för att släppa sin symbol i den lägsta tillgängliga positionen i kolumnen.
Kontrollera spelstatus: Efter varje drag kontrollerar spelet om någon har vunnit eller om spelbrädet är fullt.
Avsluta spelet: Spelare kan avsluta spelet genom att ange "101" när de blir tillfrågade om nästa drag.

-----------------Författare---------------
@Robert
@Jessica
@Alexander
@Mario
@Markus









