void  main () {
    char FQXAzjcIP [100] [50];
    char LgYtkrR0CW8 [100] [50];
    int zWi7nzsaxQe;
    int txpDUal9kZ2;
    int m;
    scanf ("%d", &zWi7nzsaxQe);
    for (txpDUal9kZ2 = 1; zWi7nzsaxQe >= txpDUal9kZ2; txpDUal9kZ2 = txpDUal9kZ2 + 1) {
        scanf ("%s", FQXAzjcIP[txpDUal9kZ2]);
        m = strlen (FQXAzjcIP[txpDUal9kZ2]);
        if (!('r' != FQXAzjcIP[txpDUal9kZ2][m - 1]) || FQXAzjcIP[txpDUal9kZ2][m - 1] == 'y')
            FQXAzjcIP[txpDUal9kZ2][m - 2] = '\0';
        if (FQXAzjcIP[txpDUal9kZ2][m - 1] == 'g')
            FQXAzjcIP[txpDUal9kZ2][m - 3] = '\0';
    }
    {
        txpDUal9kZ2 = 1;
        while (txpDUal9kZ2 <= zWi7nzsaxQe) {
            printf ("%s\n", FQXAzjcIP[txpDUal9kZ2]);
            txpDUal9kZ2++;
        };
    };
}

