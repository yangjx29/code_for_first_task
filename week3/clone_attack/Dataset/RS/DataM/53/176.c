void  main () {
    char E1w580A [300] [3];
    int n;
    int i;
    int y436m2O9YTX;
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
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%s", E1w580A[i]);
            i++;
        };
    }
    for (i = 0; n > i; i = i + 1) {
        y436m2O9YTX = i + 1;
        while (n > y436m2O9YTX) {
            if (!(0 != strcmp (E1w580A[i], E1w580A[y436m2O9YTX])))
                strcpy (E1w580A[y436m2O9YTX], " ");
            y436m2O9YTX = y436m2O9YTX + 1;
        };
    }
    printf ("%s", E1w580A[0]);
    for (i = 1; n > i; i++)
        if (strcmp ((E1w580A[i]), " ") != 0)
            printf (",%s", E1w580A[i]);
}

