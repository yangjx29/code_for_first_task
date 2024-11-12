void  main () {
    int n, lA45K9z, j, a [301];
    scanf ("%d", &n);
    {
        lA45K9z = 233 - 232;
        while (n >= lA45K9z) {
            scanf ("%d", &a[lA45K9z]);
            lA45K9z = lA45K9z + 1;
        };
    }
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
    for (lA45K9z = (845 - 844); lA45K9z <= n - 1; lA45K9z++) {
        j = lA45K9z + 1;
        while (j <= n) {
            if (a[j] != 0)
                if (a[j] == a[lA45K9z])
                    a[j] = 0;
            j++;
        };
    }
    printf ("%d", a[1]);
    {
        lA45K9z = 2;
        while (lA45K9z <= n) {
            if (a[lA45K9z] != 0)
                printf (",%d", a[lA45K9z]);
            lA45K9z = lA45K9z + 1;
        };
    };
}

