Platformă de food delivery
Tema – Food Delivery
O platformă de food delivery implică mai multe entități diferite care interacționează între ele în mod constant: un client plasează o comandă, un restaurant o pregătește și un curier o livrează. Fiecare dintre ele are un rol bine definit și date proprii. Tocmai de aceea mi s-a părut o temă potrivită pentru proiect  — relațiile dintre entități ușor de înțeles și se traduc direct în clase și ierarhii.
Despre proiect
Aplicația simulează o platformă de livrare mâncare. Există trei tipuri de entități principale în sistem: clienții care plasează comenzi, curierii care le livrează și restaurantele de la care se comandă. 
Clienții pot plasa comenzi selectând produse din meniul unui restaurant. Comanda este asociată automat cu un curier care se ocupă de livrare. La finalul comenzii, clientul poate lăsa una sau mai multe recenzii — pentru restaurant, pentru curier, pentru un preparat specific sau pentru aplicație în general.
Toată interacțiunea cu aplicația se face printr-un meniu în consolă, prin care utilizatorul poate adăuga, modifica, șterge sau vizualiza datele din sistem.
Ce poate face aplicația
Utilizatori
•	Poți adăuga clienți (cu nume, telefon și adresă de livrare) și curieri (cu nume, telefon și vehiculul pe care îl folosesc)
•	Poți modifica adresa de livrare a unui client oricând
•	Poți șterge un utilizator din sistem
Restaurante
•	Poți adăuga restaurante cu numele și adresa lor
•	Fiecare restaurant are un meniu propriu cu produse și prețuri
•	Poți șterge un restaurant din sistem
Comenzi
•	O comandă leagă un client, un curier și un restaurant
•	Clientul adaugă produse în coș, iar aplicația calculează automat totalul de plată
•	Fiecare comandă primește un ID unic generat automat
Recenzii
După o comandă, se pot lăsa mai multe tipuri de recenzii, toate cu o notă de la 1 la 5 și un mesaj:
•	Recenzie restaurant – a fost mâncarea caldă la sosire?
•	Recenzie curier – cât a durat livrarea?
•	Recenzie comandă completă – combină recenzia de restaurant și cea de curier într-una singură
•	Recenzie aplicație – a întâmpinat utilizatorul erori tehnice?
Dacă nota introdusă nu este între 1 și 5, aplicația aruncă o eroare și o tratează corespunzător.
Ierarhia claselor
Clasele sunt organizate în două ierarhii separate, una pentru utilizatori și una pentru recenzii.
Pentru utilizatori, clasa de bază este Utilizator, care conține datele comune (nume, telefon, ID). Din ea derivă Client, care adaugă o adresă de livrare, și Curier, care adaugă vehiculul folosit.
Pentru recenzii, clasa de bază este Evaluare — o clasă abstractă care definește nota și mesajul. Din ea derivă EvaluareRestaurant și EvaluareCurier, fiecare cu datele specifice. EvaluarePreparat extinde EvaluareRestaurant adăugând numele preparatului. EvaluareComandaCompleta moștenește atât din EvaluareRestaurant cât și din EvaluareCurier — aceasta este structura de tip diamant, rezolvată prin moștenire virtuală. În afara acestor ramuri, EvaluareAplicatie derivă direct din Evaluare.

