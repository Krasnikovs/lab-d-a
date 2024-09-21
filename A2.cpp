/*
Gustavs Krasņikovs, gk24018
A2. Doti naturāli skaitļi m un n. Noskaidrot starpību starp m un n dažādo reizinātāju skaitu
 (piemēram, m=9, n=6, atbilde ir -1, jo m ir mazāk reizinātāju nekā n).
Programma izveidota: 07.09.2024.
*/


#include <iostream>
using namespace std;

int a2() {

    int m, n;

    
    cout << "Ievadiet pirmo naturālo skaitli m: ";
    cin >> m; // Lai lietotajs ievada skaitli
    cout << "Ievadiet otro naturālo skaitli n: ";
    cin >> n;

    int m_divider_count = 0; // Sāk ar 0, lai varētu saskaitīt dalītāju skaitu

    for (int divider = 1; divider <= m; divider++) { // tiks skaitīts no 1 lidz ievadītajam skaitlim ieskaitot, 
                                                    // lai pārbaudītu visus iespējamos dalītājus
        if ((m % divider) == 0) { // tiek pārbaudīts, lai izdalot būs vesels skatlis
            m_divider_count +=1;
        }
    };

    int n_divider_count = 0; // Sāk ar 0, lai varētu saskaitīt dalītāju skaitu

    for (int divider = 1; divider <= n; divider++) { // tiks skaitīts no 1 lidz ievadītajam skaitlim ieskaitot, 
                                                    // lai pārbaudītu visus iespējamos dalītājus
        if ((n % divider) == 0) { // tiek pārbaudīts, lai izdalot būs vesels skatlis
            n_divider_count +=1;
        }
    };

    int count = m_divider_count - n_divider_count; // salīdzina starpību starp abu skaitļu dalītāju skaitu

    return count;
}

int main() {

    bool continue_prog = true; // nosaka, lai programma izpildītos vismaz vienu reizi

    cout << "Doti naturāli skaitļi m un n. Noskaidrot starpību starp m un n dažādo reizinātāju skaitu." << endl;
    
    do {
        /*
        Programmas daļa,
        kuru vajag atkartot
        */

        int count = a2(); // izsauc funkciju, kas paprasīs lietotājam naturālus skaitļus un 
                            // noteiktu dalītāju skatu starpību
        std::cout << "Atbilde:" << count << endl;

        char user_choise;
        std::cout << "Vēlaties turpināt? (Y/n):"; 
        cin >> user_choise;

        if (user_choise == 'n') { // tiek izvēlēts n un N, jo tas tiek izmantos kā standartilizētas opcijas, kas nozīmē nē
            continue_prog = false;
        } else if (user_choise == 'N') {
            continue_prog = false;
        } 

    } while (continue_prog == true); // visas citas opcijas nozīmēs jā
    
    return 0;
}


/*
    Testa plāns
    Ievads      Programmas vēlamā    Rezultāts C++
                    reakcija

     9 6              -1                   +
     12 3              4                   +
     54 0              8                   +
     0 0               0                   +
*/