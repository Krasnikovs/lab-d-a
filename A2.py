m = int(input('Ievadiet pirmo naturālo skaitli: '))
n = int(input('Ievadiet otro naturālo skaitli: '))


m_diveder_count = 0 # Sāk ar 0, lai varētu saskaitīt dalītāju skaitu

if m > 0: # pārbaudīts lai ievadītais skaitlis ir naturāls
    for divider in range(1, m + 1): # tiks skaitīts no 1 lidz ievadītajam skaitlim ieskaitot, 
                                # lai pārbaudītu visus iespējamos dalītājus
        if m % divider == 0: # rezultātu salīdzina ar 0
                            # lai uzinātu ka reizinās ar konkrēto skaitli
            m_diveder_count += 1

n_diveder_count = 0 # Sāk ar 0, lai varētu saskaitīt dalītāju skaitu

if n > 0: # pārbaudīts lai ievadītais skaitlis ir naturāls
    for divider in range(1, m + 1): # tiks skaitīts no 1 lidz ievadītajam skaitlim ieskaitot, 
                                # lai pārbaudītu visus iespējamos dalītājus
        if n % divider == 0: # rezultātu salīdzina ar 0
                            # lai uzinātu ka reizinās ar konkrēto skaitli
            n_diveder_count += 1

print(f'Atbilde: {m_diveder_count - n_diveder_count}')

# Gustavs Krasņikovs, gk24018
# A2. Izveidot programmu, kas apreiķina naturālu skaitļa, ko ievada lietotājs, 
# dalāmo skaitu un salīdzina kuram skaitlim ir lielāks dalāmo skaits, izvadot dalāmo skatļu starpību.
# Programma izveidota: 07.09.2024.

# Ievads      Programmas vēlamā    Rezultāts C++
#                 reakcija

#  9 6              -1                   +
#  12 3              4                   +
#  54 0              8                   +
#  0 0               0                   +