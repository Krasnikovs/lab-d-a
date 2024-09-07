m = int(input('Ievadiet pirmo naturālo skaitli: '))
n = int(input('Ievadiet otro naturālo skaitli: '))


m_diveder_count = 0

for divider in range(1, m + 1):
    if m % divider == 0:
        m_diveder_count += 1

n_diveder_count = 0

for divider in range(1, m + 1):
    if n % divider == 0:
        n_diveder_count += 1

print(f'Atbilde: {m_diveder_count - n_diveder_count}')

# Gustavs Krasņikovs, gk24018
# A2. Izveidot programmu, kas apreiķina naturālu skaitļa, ko ievada lietotājs, 
# dalāmo skaitu un salīdzina kuram skaitlim ir lielāks dalāmo skaits, izvadot dalāmo skatļu starpību.
# Programma izveidota: 07.09.2024.