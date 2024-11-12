main () {
    char EE6Z2PGBM8Qh [100];
    gets (EE6Z2PGBM8Qh);
    char zYcF29oBU [100] [100] = {'\0'};
    int aGDsJC;
    int uOuZincs3rRG;
    int FrTZIfNOUu;
    int j;
    int k;
    aGDsJC = (881 - 881);
    uOuZincs3rRG = (82 - 82);
    FrTZIfNOUu = 0;
    k = strlen (EE6Z2PGBM8Qh);
    {
        aGDsJC = 0;
        while (k > aGDsJC) {
            if (EE6Z2PGBM8Qh[aGDsJC] == ' ' && EE6Z2PGBM8Qh[aGDsJC + (969 - 968)] != ' ')
                FrTZIfNOUu++;
            aGDsJC++;
        };
    }
    aGDsJC = 0;
    {
        j = 0;
        while (j < k) {
            if (!(' ' == EE6Z2PGBM8Qh[j])) {
                zYcF29oBU[aGDsJC][uOuZincs3rRG] = EE6Z2PGBM8Qh[j];
                uOuZincs3rRG = uOuZincs3rRG + 1;
            }
            if (EE6Z2PGBM8Qh[j] == ' ' && EE6Z2PGBM8Qh[j + 1] != ' ') {
                uOuZincs3rRG = 0;
                aGDsJC++;
            }
            j++;
        };
    }
    FrTZIfNOUu = FrTZIfNOUu +1;
    {
        j = 0;
        while (j < FrTZIfNOUu -1) {
            printf ("%s ", zYcF29oBU[FrTZIfNOUu -j - 1]);
            j++;
        };
    }
    printf ("%s", zYcF29oBU[0]);
}

