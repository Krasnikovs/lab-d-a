#include <iostream>
using namespace std;

int a2() {

    int m, n;

    cout << "Ievadiet pirmo naturālo skaitli: ";
    cin >> m;
    cout << "Ievadiet otro naturālo skaitli: ";
    cin >> n;

    int m_divider_count = 0;

    for (int divider = 1; divider <= m; divider++) {
        if ((m % divider) == 0) {
            m_divider_count +=1;
        }
    };

    int n_divider_count = 0;

    for (int divider = 1; divider <= n; divider++) {
        
        if ((n % divider) == 0) {
            n_divider_count +=1;
        }
    };

    int count = m_divider_count - n_divider_count;

    return count;
}

int main() {

    bool continue_prog = true;

    do {
        int count = a2();
        std::cout << count << endl;

        char user_choise;
        std::cout << "Vēlaties turpināt? (Y/n):";
        cin >> user_choise;

        if (user_choise == 'n') {
            continue_prog = false;
        } else if (user_choise == 'N') {
            continue_prog = false;
        }

    } while (continue_prog == true);
    
    return 0;
}

/*
Gustavs Krasņikovs, gk24018
A2. Izveidot programmu, kas apreiķina naturālu skaitļa, ko ievada lietotājs, 
dalāmo skaitu un salīdzina kuram skaitlim ir lielāks dalāmo skaits, izvadot dalāmo skatļu starpību.
Programma izveidota: 07.09.2024.
*/