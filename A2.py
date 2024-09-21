# Gustavs Krasņikovs, gk24018
# A2. Doti naturāli skaitļi m un n. Noskaidrot starpību starp m un n dažādo reizinātāju skaitu
# (piemēram, m=9, n=6, atbilde ir -1, jo m ir mazāk reizinātāju nekā n).
# Programma izveidota: 07.09.2024.

print('Doti naturāli skaitļi m un n. Noskaidrot starpību starp m un n dažādo reizinātāju skaitu.')
m = int(input('Ievadiet pirmo naturālo skaitli m: '))
n = int(input('Ievadiet otro naturālo skaitli n: '))


m_diveder_count = 0  # Sāk ar 0, jo nav atrasts neviens dalītājs

if m > 0: # pārbaudīts, vai ievadītais skaitlis ir naturāls
    for divider in range(1, m + 1): 
                                # lai pārbaudītu visus iespējamos dalītājus
        if m % divider == 0: 
            m_diveder_count += 1

n_diveder_count = 0 # Sāk ar 0, jo nav atrasts neviens dalītājs

if n > 0: # pārbaudīts, vai ievadītais skaitlis ir naturāls
    for divider in range(1, n + 1): 
                                # lai pārbaudītu visus iespējamos dalītājus
        if n % divider == 0: 
            n_diveder_count += 1

print(f'Atbilde: {m_diveder_count - n_diveder_count}')

# Testu plāns
# Ievads      Programmas vēlamā    Rezultāts Python
#                 reakcija

#  9 6              -1                   +
#  12 3              4                   +
#  54 0              8                   +
#  0 0               0                   +
#  8 9               1