void  main () {
    char a [(146 - 45)];
    char w4rcQu [101];
    int wpA5lKiCc4;
    int i;
    int LbYW5O71hLrt;
    int j;
    int Lley8g [101];
    int FhaIRKdt;
    int ajDlIPK;
    scanf ("%d", &wpA5lKiCc4);
    for (i = (262 - 262); i < wpA5lKiCc4; i = i + 1) {
        for (j = 0; j <= (597 - 497); j = j + 1)
            Lley8g[j] = 0;
        scanf ("%s", a);
        scanf ("%s", w4rcQu);
        FhaIRKdt = strlen (a);
        ajDlIPK = strlen (w4rcQu);
        for (j = 100; 101 - FhaIRKdt <= j; j = j - 1)
            a[j] = a[FhaIRKdt -101 + j] - '0';
        for (j = 100; j >= 101 - ajDlIPK; j = j - 1)
            w4rcQu[j] = w4rcQu[ajDlIPK - 101 + j] - '0';
        for (j = 0; j < 101 - FhaIRKdt; j = j + 1)
            a[j] = 0;
        for (j = 0; 101 - ajDlIPK > j; j++)
            w4rcQu[j] = 0;
        for (j = 100; j >= 100 - ((FhaIRKdt > ajDlIPK) ? FhaIRKdt : ajDlIPK); j--) {
            Lley8g[j] += a[j] - w4rcQu[j];
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
            }
            if (Lley8g[j] < 0) {
                Lley8g[j] = Lley8g[j] + (854 - 844);
                Lley8g[j - 1]--;
            };
        }
        j = 0;
        for (; Lley8g[j] == 0;)
            j = j + 1;
        for (LbYW5O71hLrt = j; LbYW5O71hLrt <= 100; LbYW5O71hLrt = LbYW5O71hLrt +1)
            printf ("%d", Lley8g[LbYW5O71hLrt]);
    };
}

