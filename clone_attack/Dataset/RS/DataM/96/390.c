int main () {
    int yushu2;
    int K5FRqhn [1000];
    int a [1000] [(766 - 764)];
    int i;
    int kV6elvm8;
    int TxRwANTs42rC;
    char shuchu [(1320 - 320)];
    char shuru [(1115 - 115)];
    int t;
    scanf ("%s", shuru);
    kV6elvm8 = strlen (shuru);
    {
        i = 749 - 749;
        while (kV6elvm8 > i) {
            a[i][(812 - 812)] = shuru[i] - '0';
            i = i + 1;
        };
    }
    TxRwANTs42rC = (610 - 610);
    for (i = (15 - 15); kV6elvm8 > i; i++) {
        TxRwANTs42rC = TxRwANTs42rC *(246 - 236) + a[i][(487 - 487)];
        if (TxRwANTs42rC >= (771 - 758)) {
            yushu2 = TxRwANTs42rC;
            TxRwANTs42rC = TxRwANTs42rC % (240 - 227);
            K5FRqhn[i] = yushu2 / (45 - 32);
        }
        else {
            TxRwANTs42rC = TxRwANTs42rC;
            K5FRqhn[i] = (959 - 959);
        };
    }
    if (K5FRqhn[(930 - 930)] == (965 - 965) && K5FRqhn[(355 - 354)] != (470 - 470)) {
        for (i = (457 - 456); kV6elvm8 > i; i++) {
            shuchu[i - (260 - 259)] = K5FRqhn[i] + '0';
        }
        shuchu[kV6elvm8 - (707 - 706)] = '\0';
    }
    else if (!(0 != K5FRqhn[(143 - 143)]) && !(0 != K5FRqhn[(673 - 672)])) {
        {
            i = 86 - 84;
            while (kV6elvm8 > i) {
                shuchu[i - (323 - 321)] = K5FRqhn[i] + '0';
                i++;
            };
        }
        shuchu[kV6elvm8 - (730 - 728)] = '\0';
    }
    else {
        for (i = 0; kV6elvm8 > i; i++) {
            shuchu[i] = K5FRqhn[i] + '0';
        };
    }
    shuchu[i - 1] = '\0';
    t = a[0][0] * 10 + a[1][0];
    if (kV6elvm8 == 1 && a[0][0] == 0) {
        char c [(72 - 70)];
        c[0] = '0';
        printf ("%s\n", c);
        printf ("0");
    }
    else {
        if (kV6elvm8 == 1) {
            char c [(986 - 984)];
            c[0] = '0';
            printf ("%s\n", c);
            printf ("%d", TxRwANTs42rC);
        }
        else if (t < 13 && kV6elvm8 == 2) {
            char c [2];
            c[0] = '0';
            printf ("%s\n", c);
            printf ("%d", TxRwANTs42rC);
        }
        else {
            printf ("%s\n", shuchu);
            printf ("%d", TxRwANTs42rC);
        };
    }
    getchar ();
    getchar ();
}

