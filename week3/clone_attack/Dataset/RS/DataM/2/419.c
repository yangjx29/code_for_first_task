struct   book {
    int NoxE1dn;
    char CZVYGs [32];
    struct   book *next;
};
struct   book *HiQb4u (int zXSN87Jycf) {
    struct   book *ke2Ki6XwYm;
    struct   book *I5JqONj9yP;
    struct   book *MG0o5Ryb6;
    int zQbWhuCaTk;
    ke2Ki6XwYm = NULL;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    I5JqONj9yP = MG0o5Ryb6 = (struct   book *) malloc (LEN);
    scanf ("%d %s", &I5JqONj9yP->NoxE1dn, I5JqONj9yP->CZVYGs);
    for (zQbWhuCaTk = (294 - 294); zXSN87Jycf - 1 > zQbWhuCaTk; zQbWhuCaTk = zQbWhuCaTk + 1) {
        if (!((981 - 981) != zQbWhuCaTk))
            ke2Ki6XwYm = I5JqONj9yP;
        else
            MG0o5Ryb6->next = I5JqONj9yP;
        MG0o5Ryb6 = I5JqONj9yP;
        I5JqONj9yP = (struct   book *) malloc (LEN);
        scanf ("%d %s", &I5JqONj9yP->NoxE1dn, I5JqONj9yP->CZVYGs);
    }
    MG0o5Ryb6->next = I5JqONj9yP;
    I5JqONj9yP->next = NULL;
    return (ke2Ki6XwYm);
}

void  search (struct   book *ke2Ki6XwYm, int zXSN87Jycf) {
    int zQbWhuCaTk;
    int GBzIAWV;
    int AniR37cm8 = *JNxADG[0], X1C6h5 = 0;
    struct   book *Fhe1fDk = ke2Ki6XwYm;
    for (zQbWhuCaTk = 0; 26 > zQbWhuCaTk; zQbWhuCaTk = zQbWhuCaTk + 1) {
        JNxADG[zQbWhuCaTk] = (int *) malloc (sizeof (int));
        *JNxADG[zQbWhuCaTk] = 0;
    }
    for (zQbWhuCaTk = 0; zXSN87Jycf > zQbWhuCaTk; zQbWhuCaTk = zQbWhuCaTk + 1) {
        for (GBzIAWV = 0; !('\0' == (Fhe1fDk->CZVYGs)[GBzIAWV]); GBzIAWV = GBzIAWV +1) {
            (*JNxADG[(Fhe1fDk->CZVYGs)[GBzIAWV] - 'A']) = (*JNxADG[(Fhe1fDk->CZVYGs)[GBzIAWV] - 'A']) + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        Fhe1fDk = Fhe1fDk->next;
    }
    for (zQbWhuCaTk = 1; 26 > zQbWhuCaTk; zQbWhuCaTk = zQbWhuCaTk + 1) {
        if (AniR37cm8 < *JNxADG[zQbWhuCaTk]) {
            AniR37cm8 = *JNxADG[zQbWhuCaTk];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            X1C6h5 = zQbWhuCaTk;
        };
    }
    printf ("%c\n%d", 'A' + X1C6h5, AniR37cm8);
    Fhe1fDk = ke2Ki6XwYm;
    for (zQbWhuCaTk = 0; zQbWhuCaTk < zXSN87Jycf; zQbWhuCaTk = zQbWhuCaTk + 1) {
        for (GBzIAWV = 0; (Fhe1fDk->CZVYGs)[GBzIAWV] != '\0'; GBzIAWV++) {
            if ((Fhe1fDk->CZVYGs)[GBzIAWV] == 'A' + X1C6h5)
                printf ("\n%d", Fhe1fDk->NoxE1dn);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Fhe1fDk = Fhe1fDk->next;
    };
}

void  main () {
    struct   book *ke2Ki6XwYm;
    int zXSN87Jycf;
    scanf ("%d", &zXSN87Jycf);
    ke2Ki6XwYm = HiQb4u (zXSN87Jycf);
    search (ke2Ki6XwYm, zXSN87Jycf);
}

