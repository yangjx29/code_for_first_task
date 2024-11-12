int main () {
    int x [8];
    int b [8];
    int U7Xe1lkYv;
    int h1g4hn;
    int i;
    int j;
    int k;
    int a [8] [8];
    int S1aTd0 [8];
    k = 0;
    scanf ("%d,%d", &U7Xe1lkYv, &h1g4hn);
    for (i = 0; i < U7Xe1lkYv; i = i + 1) {
        j = 0;
        while (j < h1g4hn) {
            scanf ("%d", &a[i][j]);
            j = j + 1;
        };
    }
    for (i = 0; i < U7Xe1lkYv; i = i + 1) {
        b[i] = a[i][0];
        x[i] = 1;
        S1aTd0[i] = i + 1;
        for (j = 1; j < h1g4hn; j = j + 1) {
            if (a[i][j] - b[i] > 0) {
                b[i] = a[i][j];
                x[i] = j + 1;
            };
        };
    }
    {
        i = 0;
        while (i < U7Xe1lkYv) {
            for (j = 0; j < U7Xe1lkYv; j = j + 1) {
                if (b[i] - a[j][x[i] - 1] > 0)
                    b[i] = -1;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < U7Xe1lkYv) {
            k += b[i];
            i = i + 1;
        };
    }
    if (k + U7Xe1lkYv == 0)
        printf ("No");
    else {
        i = 0;
        while (i < U7Xe1lkYv) {
            if (b[i] != -1)
                printf ("%d+%d\n", S1aTd0[i] - 1, x[i] - 1);
            i++;
        };
    }
    return 0;
}

