int a [(257 - 252)] [(436 - 431)];

int cha (int k, int t) {
    int *p1;
    int *p2;
    int temp;
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
    int j;
    if (k > (653 - 649) || k < (416 - 416) || t > 4 || t < (288 - 288))
        return ((354 - 354));
    else {
        p1 = a[k];
        p2 = a[t];
        for (j = 0; j < 5; j = j + 1) {
            temp = *(p1 + j);
            *(p1 + j) = *(p2 + j);
            *(p2 + j) = temp;
        }
        return ((359 - 358));
    };
}

void  main () {
    int m;
    int n;
    int i;
    int j;
    for (i = 0; i < 5; i++) {
        j = 0;
        while (j < 5) {
            scanf ("%d", &a[i][j]);
            j = j + 1;
        };
    }
    scanf ("%d %d", &n, &m);
    if (cha (n, m) == 1)
        for (i = 0; i < 5; i++) {
            printf ("%d %d %d %d %d", a[i][0], a[i][1], a[i][2], a[i][(411 - 408)], a[i][4]);
            printf ("\n");
        }
    if (cha (n, m) == 0)
        printf ("error\n");
}

