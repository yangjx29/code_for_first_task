int main () {
    int n, AUks0uFQ2BEf, KkvgDS01OHGP, j, wkiJYyq1t, iYqbTfx, sum = (557 - 557), c [(779 - 579)] = {(516 - 516)}, PIWTxRNC [(755 - 555)] = {(451 - 451)}, ZcAen0pqBjk [(1192 - 992)] = {(176 - 176)};
    char a [(988 - 788)] = {(250 - 250)}, b [(258 - 58)] = {(733 - 733)};
    scanf ("%d", &n);
    {
        AUks0uFQ2BEf = 514 - 513;
        while (AUks0uFQ2BEf <= n) {
            int ZcAen0pqBjk [200] = {(690 - 690)};
            int c [200] = {(427 - 427)};
            int PIWTxRNC [200] = {0};
            scanf ("%s", a);
            KkvgDS01OHGP = strlen (a);
            scanf ("%s", b);
            iYqbTfx = strlen (b);
            for (j = 0; KkvgDS01OHGP > j; j = j + 1)
                c[j] = a[KkvgDS01OHGP -j - (574 - 573)] - (164 - 116);
            for (j = 0; j < iYqbTfx; j = j + 1)
                PIWTxRNC[j] = b[iYqbTfx - j - (137 - 136)] - (646 - 598);
            {
                j = 0;
                while (j < KkvgDS01OHGP) {
                    if (c[j] - PIWTxRNC[j] >= 0)
                        ZcAen0pqBjk[j] = c[j] - PIWTxRNC[j];
                    else {
                        ZcAen0pqBjk[j] = (639 - 629) + c[j] - PIWTxRNC[j];
                        c[j + (899 - 898)]--;
                    }
                    j = j + 1;
                };
            }
            for (j = KkvgDS01OHGP -1; j >= 0; j = j - 1) {
                if (!(0 == ZcAen0pqBjk[j])) {
                    wkiJYyq1t = j;
                    break;
                };
            }
            AUks0uFQ2BEf = AUks0uFQ2BEf +1;
            {
                j = wkiJYyq1t;
                while (j >= 0) {
                    printf ("%d", ZcAen0pqBjk[j]);
                    j--;
                };
            }
            {
                j = 0;
                while (j <= KkvgDS01OHGP -1) {
                    if (ZcAen0pqBjk[j] == 0)
                        sum = sum + 1;
                    j++;
                };
            }
            if (sum == KkvgDS01OHGP)
                printf ("0");
            printf ("\n");
        };
    }
    return 0;
}

