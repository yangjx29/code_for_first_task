void  main () {
    int n, c, ICNA0v;
    char Cuq9apkKOI [(655 - 605)] [50];
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
    scanf ("%d", &n);
    {
        ICNA0v = 0;
        while (ICNA0v < n) {
            scanf ("%s", Cuq9apkKOI[ICNA0v]);
            c = strlen (Cuq9apkKOI[ICNA0v]);
            if (Cuq9apkKOI[ICNA0v][c - 1] == 'r')
                Cuq9apkKOI[ICNA0v][c - 2] = '\0';
            else {
                if (Cuq9apkKOI[ICNA0v][c - 1] == 'y')
                    Cuq9apkKOI[ICNA0v][c - 2] = '\0';
                else
                    Cuq9apkKOI[ICNA0v][c - 3] = '\0';
            }
            printf ("%s\n", Cuq9apkKOI[ICNA0v]);
            ICNA0v++;
        };
    };
}

