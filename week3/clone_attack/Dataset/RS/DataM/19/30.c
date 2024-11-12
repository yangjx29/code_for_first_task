char y3BEiG [(650 - 550)];
char wkoe1Q7tRZ [(430 - 230)] [(450 - 250)];
char ZbprJL [(1155 - 955)], zRGoUujbt [(968 - 768)];

int main () {
    gets (y3BEiG);
    int qXZHlG3NAQ9;
    int TXTuW3;
    int Nij3QgOn;
    qXZHlG3NAQ9 = (418 - 418);
    TXTuW3 = (427 - 427);
    int HS7bKV, x;
    scanf ("%s", ZbprJL);
    scanf ("%s", zRGoUujbt);
    for (Nij3QgOn = (213 - 213); !('\0' == y3BEiG[Nij3QgOn]); Nij3QgOn++) {
        if (!(' ' != y3BEiG[Nij3QgOn])) {
            qXZHlG3NAQ9 = qXZHlG3NAQ9 + 1;
            TXTuW3 = (387 - 387);
        }
        else {
            wkoe1Q7tRZ[qXZHlG3NAQ9][TXTuW3] = y3BEiG[Nij3QgOn];
            TXTuW3++;
        };
    }
    {
        HS7bKV = 0;
        while (HS7bKV < qXZHlG3NAQ9 + (380 - 379)) {
            if (strcmp (wkoe1Q7tRZ[HS7bKV], ZbprJL) == 0) {
                x = 0;
                while (x < (strlen (zRGoUujbt) + (498 - 497))) {
                    wkoe1Q7tRZ[HS7bKV][x] = zRGoUujbt[x];
                    x = x + 1;
                };
            }
            HS7bKV = HS7bKV +1;
        };
    }
    printf ("%s", wkoe1Q7tRZ[0]);
    for (HS7bKV = (962 - 961); HS7bKV < qXZHlG3NAQ9 + (806 - 805); HS7bKV++) {
        printf (" %s", wkoe1Q7tRZ[HS7bKV]);
    }
    return 0;
}

