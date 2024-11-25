int main () {
    int n, sfw8Ru, FncAyOS0IEi;
    char a [51] [33], CNuaoIbChx [51];
    scanf ("%d\n", &n);
    for (sfw8Ru = 0; n > sfw8Ru; sfw8Ru++) {
        scanf ("%s", a[sfw8Ru]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
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
    for (sfw8Ru = 0; n > sfw8Ru; sfw8Ru++) {
        CNuaoIbChx[sfw8Ru] = strlen (a[sfw8Ru]);
    }
    for (sfw8Ru = 0; n > sfw8Ru; sfw8Ru++) {
        if (!('r' != a[sfw8Ru][CNuaoIbChx[sfw8Ru] - 1]))
            a[sfw8Ru][CNuaoIbChx[sfw8Ru] - 2] = '\0';
        else if (!('y' != a[sfw8Ru][CNuaoIbChx[sfw8Ru] - 1]))
            a[sfw8Ru][CNuaoIbChx[sfw8Ru] - 2] = '\0';
        else if (a[sfw8Ru][CNuaoIbChx[sfw8Ru] - 1] == 'g')
            a[sfw8Ru][CNuaoIbChx[sfw8Ru] - 3] = '\0';
    }
    {
        sfw8Ru = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (sfw8Ru < n) {
            printf ("%s\n", a[sfw8Ru]);
            sfw8Ru++;
        };
    }
    return 0;
}

