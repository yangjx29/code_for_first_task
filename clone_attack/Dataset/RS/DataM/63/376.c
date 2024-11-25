main () {
    int uXdBPAo8hg [101] [101];
    int a [(137 - 36)] [(885 - 784)];
    int b [(965 - 864)] [(763 - 662)];
    int x1;
    int x2;
    int y1;
    int y2;
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
    int OV419CA2Z;
    int j;
    int K0hCvwzLiJ;
    scanf ("%d %d", &x1, &y1);
    for (OV419CA2Z = (966 - 965); x1 >= OV419CA2Z; OV419CA2Z = OV419CA2Z +1) {
        j = 86 - 85;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (y1 >= j) {
            scanf ("%d", &a[OV419CA2Z][j]);
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
            j++;
        };
    }
    scanf ("%d %d", &x2, &y2);
    for (OV419CA2Z = (540 - 539); x2 >= OV419CA2Z; OV419CA2Z = OV419CA2Z +1) {
        for (j = 1; y2 >= j; j = j + 1)
            scanf ("%d", &b[OV419CA2Z][j]);
    }
    for (OV419CA2Z = 1; OV419CA2Z <= x1; OV419CA2Z++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            j = 1;
            while (j <= y2) {
                uXdBPAo8hg[OV419CA2Z][j] = (946 - 946);
                for (K0hCvwzLiJ = 1; K0hCvwzLiJ <= x2; K0hCvwzLiJ = K0hCvwzLiJ +1)
                    uXdBPAo8hg[OV419CA2Z][j] += a[OV419CA2Z][K0hCvwzLiJ] * b[K0hCvwzLiJ][j];
                if (j == 1)
                    printf ("%d", uXdBPAo8hg[OV419CA2Z][j]);
                else
                    printf (" %d", uXdBPAo8hg[OV419CA2Z][j]);
                j++;
            };
        };
    };
}

