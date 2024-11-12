main () {
    int PqkBr21tC;
    PqkBr21tC = 0;
    int r = 0;
    int n, cKDC4lzf9YnU, i, RpuLWlx;
    int *UwLycT01e = (int *) malloc (cKDC4lzf9YnU * sizeof (int));
    int eKQ0Pyp2q = 0;
    int *ZyOMtJdLX = (int *) malloc (n * sizeof (int));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &n);
    for (i = 0;; i = i + 2) {
        scanf ("%d %d", &UwLycT01e[i], &UwLycT01e[i + 1]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != UwLycT01e[i]) && UwLycT01e[i + 1] == 0)
            break;
        else
            eKQ0Pyp2q = eKQ0Pyp2q + 1;
    }
    cKDC4lzf9YnU = 2 * n * (n - 1);
    for (i = 0; i < n; i = i + 1)
        ZyOMtJdLX[i] = 0;
    for (i = 1; i <= (2 * eKQ0Pyp2q - 1); i = i + 2)
        ZyOMtJdLX[UwLycT01e[i]]++;
    for (i = 0; i < n; i = i + 1) {
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
        if (!((n - 1) != ZyOMtJdLX[i])) {
            for (RpuLWlx = 0; RpuLWlx <= (2 * eKQ0Pyp2q - 2); RpuLWlx = RpuLWlx +2) {
                if (UwLycT01e[RpuLWlx] == i)
                    PqkBr21tC = 1;
            }
            if (PqkBr21tC == 0)
                printf ("%d", i);
            else
                printf ("NOT FOUND");
            r = 1;
            break;
        };
    }
    if (r == 0)
        printf ("NOT FOUND");
}

