struct   number {
    char a [100];
    int lena;
    char OHq2NFPuI [100];
    int BHuRGw0gj9po;
}
num [1000];

void  main () {
    int n;
    int i;
    int j;
    int ll;
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
    for (i = (445 - 445); n > i; i = i + 1) {
        scanf ("%s", num[i].a);
        num[i].lena = strlen (num[i].a);
        scanf ("%s", num[i].OHq2NFPuI);
        num[i].BHuRGw0gj9po = strlen (num[i].OHq2NFPuI);
    }
    {
        i = 0;
        while (i < n) {
            ll = num[i].lena - num[i].BHuRGw0gj9po;
            {
                j = i;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (0 <= j) {
                    if (num[i].a[j + ll] - num[i].OHq2NFPuI[j] >= 0)
                        num[i].a[j + ll] = num[i].a[j + ll] - num[i].OHq2NFPuI[j] + 48;
                    else {
                        num[i].a[j + ll] = num[i].a[j + ll] - num[i].OHq2NFPuI[j] + 48 + 10;
                        num[i].a[j + ll - 1]--;
                    }
                    j = j - 1;
                };
            }
            printf ("%s\n", num[i].a);
            i = i + 1;
        };
    };
}

