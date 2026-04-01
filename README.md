# [cite_start]Platformă de food delivery [cite: 41]

## [cite_start]Tema – Food Delivery [cite: 42]
[cite_start]O platformă de food delivery implică mai multe entități diferite care interacționează între ele în mod constant: un client plasează o comandă, un restaurant o pregătește și un curier o livrează. [cite: 43] [cite_start]Fiecare dintre ele are un rol bine definit și date proprii. [cite: 44] [cite_start]Tocmai de aceea mi s-a părut o temă potrivită pentru proiect — relațiile dintre entități ușor de înțeles și se traduc direct în clase și ierarhii. [cite: 45]

## [cite_start]Despre proiect [cite: 46]
Aplicația simulează o platformă de livrare mâncare. [cite_start]Există trei tipuri de entități principale în sistem: clienții care plasează comenzi, curierii care le livrează și restaurantele de la care se comandă. [cite: 47] [cite_start]Clienții pot plasa comenzi selectând produse din meniul unui restaurant. [cite: 48] [cite_start]Comanda este asociată automat cu un curier care se ocupă de livrare. [cite: 49] [cite_start]La finalul comenzii, clientul poate lăsa una sau mai multe recenzii — pentru restaurant, pentru curier, pentru un preparat specific sau pentru aplicație în general. [cite: 50] [cite_start]Toată interacțiunea cu aplicația se face printr-un meniu în consolă, prin care utilizatorul poate adăuga, modifica, șterge sau vizualiza datele din sistem. [cite: 51]

## [cite_start]Ce poate face aplicația [cite: 52]

### [cite_start]Utilizatori [cite: 53]
* [cite_start]Poți adăuga clienți (cu nume, telefon și adresă de livrare) și curieri (cu nume, telefon și vehiculul pe care îl folosesc) [cite: 54]
* [cite_start]Poți modifica adresa de livrare a unui client oricând [cite: 55]
* [cite_start]Poți șterge un utilizator din sistem [cite: 56]

### [cite_start]Restaurante [cite: 57]
* [cite_start]Poți adăuga restaurante cu numele și adresa lor [cite: 58]
* [cite_start]Fiecare restaurant are un meniu propriu cu produse și prețuri [cite: 59]
* [cite_start]Poți șterge un restaurant din sistem [cite: 60]

### [cite_start]Comenzi [cite: 61]
* [cite_start]O comandă leagă un client, un curier și un restaurant [cite: 62]
* [cite_start]Clientul adaugă produse în coș, iar aplicația calculează automat totalul de plată [cite: 63]
* [cite_start]Fiecare comandă primește un ID unic generat automat [cite: 64]

### [cite_start]Recenzii [cite: 65]
[cite_start]După o comandă, se pot lăsa mai multe tipuri de recenzii, toate cu o notă de la 1 la 5 și un mesaj: [cite: 66]
* [cite_start]**Recenzie restaurant** – a fost mâncarea caldă la sosire? [cite: 67]
* [cite_start]**Recenzie curier** – cât a durat livrarea? [cite: 68]
* [cite_start]**Recenzie comandă completă** – combină recenzia de restaurant și cea de curier într-una singură [cite: 69]
* [cite_start]**Recenzie aplicație** – a întâmpinat utilizatorul erori tehnice? [cite: 70]

[cite_start]Dacă nota introdusă nu este între 1 și 5, aplicația aruncă o eroare și o tratează corespunzător. [cite: 71]

## [cite_start]Ierarhia claselor [cite: 72]
[cite_start]Clasele sunt organizate în două ierarhii separate, una pentru utilizatori și una pentru recenzii. [cite: 73] [cite_start]Pentru utilizatori, clasa de bază este Utilizator, care conține datele comune (nume, telefon, ID). [cite: 74] [cite_start]Din ea derivă Client, care adaugă o adresă de livrare, și Curier, care adaugă vehiculul folosit. [cite: 75] 

[cite_start]Pentru recenzii, clasa de bază este Evaluare — o clasă abstractă care definește nota și mesajul. [cite: 76] Din ea derivă EvaluareRestaurant și EvaluareCurier, fiecare cu datele specifice. [cite_start]EvaluarePreparat extinde EvaluareRestaurant adăugând numele preparatului. [cite: 77] [cite_start]EvaluareComandaCompleta moștenește atât din EvaluareRestaurant cât și din EvaluareCurier — aceasta este structura de tip diamant, rezolvată prin moștenire virtuală. [cite: 78] [cite_start]În afara acestor ramuri, EvaluareAplicatie derivă direct din Evaluare. [cite: 79]
