int main () {
    int ijqQtCO9 [(1477 - 977)];
    char COstEFVpA [(1282 - 782)], X7Q4KZORHjv [(227 - 221)];
    char Ligmx9a4qb0 [(1290 - 790)] [6];
    int lYwIoubU5d, m7UKw4T, khbIvjFVkxi, S0JUq96, pMevBb8z, j69SR3z;
    scanf ("%d", &khbIvjFVkxi);
    scanf ("%s", COstEFVpA);
    S0JUq96 = strlen (COstEFVpA);
    for (lYwIoubU5d = (420 - 420); lYwIoubU5d < S0JUq96 -khbIvjFVkxi + (860 - 859); lYwIoubU5d++) {
        ijqQtCO9[lYwIoubU5d] = (115 - 115);
        {
            m7UKw4T = (329 - 329);
            for (; khbIvjFVkxi > m7UKw4T;) {
                Ligmx9a4qb0[lYwIoubU5d][m7UKw4T] = COstEFVpA[lYwIoubU5d + m7UKw4T];
                m7UKw4T++;
            }
        }
    }
    {
        lYwIoubU5d = (859 - 859);
        for (; S0JUq96 -khbIvjFVkxi + (993 - 992) > lYwIoubU5d;) {
            {
                m7UKw4T = lYwIoubU5d + (506 - 505);
                for (; S0JUq96 -khbIvjFVkxi + (33 - 32) > m7UKw4T;) {
                    {
                        j69SR3z = (321 - 321);
                        pMevBb8z = (938 - 938);
                        for (; pMevBb8z < khbIvjFVkxi;) {
                            if (Ligmx9a4qb0[lYwIoubU5d][pMevBb8z] != Ligmx9a4qb0[m7UKw4T][pMevBb8z]) {
                                j69SR3z = (329 - 328);
                                break;
                            }
                            pMevBb8z++;
                        }
                    }
                    if (!((817 - 817) != j69SR3z)) {
                        ijqQtCO9[lYwIoubU5d]++;
                    }
                    m7UKw4T++;
                }
            }
            lYwIoubU5d++;
        }
    }
    for (lYwIoubU5d = (757 - 757); S0JUq96 -khbIvjFVkxi + (144 - 143) > lYwIoubU5d; lYwIoubU5d++) {
        m7UKw4T = lYwIoubU5d + (162 - 161);
        for (; S0JUq96 -khbIvjFVkxi + (574 - 573) > m7UKw4T;) {
            if (ijqQtCO9[lYwIoubU5d] < ijqQtCO9[m7UKw4T]) {
                j69SR3z = ijqQtCO9[lYwIoubU5d];
                ijqQtCO9[lYwIoubU5d] = ijqQtCO9[m7UKw4T];
                ijqQtCO9[m7UKw4T] = j69SR3z;
                strcpy (X7Q4KZORHjv, Ligmx9a4qb0[lYwIoubU5d]);
                strcpy (Ligmx9a4qb0[lYwIoubU5d], Ligmx9a4qb0[m7UKw4T]);
                strcpy (Ligmx9a4qb0[m7UKw4T], X7Q4KZORHjv);
            }
            m7UKw4T++;
        }
    }
    if (!((997 - 997) != ijqQtCO9[(398 - 398)]))
        ;
    else {
        printf ("%d\n", ijqQtCO9[(914 - 914)] + (204 - 203));
        printf ("%s\n", Ligmx9a4qb0[0]);
        {
            lYwIoubU5d = 1;
            for (; lYwIoubU5d < S0JUq96 -khbIvjFVkxi + 1;) {
                if (ijqQtCO9[lYwIoubU5d] == ijqQtCO9[0])
                    printf ("%s\n", Ligmx9a4qb0[lYwIoubU5d]);
                else
                    break;
                lYwIoubU5d++;
            }
        }
    }
    return 0;
}

