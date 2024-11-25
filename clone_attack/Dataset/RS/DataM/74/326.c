int main () {
    int m, n, i, Wi7jcK, temp, k = (504 - 504), h, t = (707 - 707), pan = 0;
    int a [MN] = {0};
    int Cq4sNl3ncuj [MN] = {0};
    scanf ("%d%d", &m, &n);
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
    for (i = m; n >= i; i++) {
        Wi7jcK = 0;
        temp = i;
        while (temp) {
            Wi7jcK = Wi7jcK *(593 - 583) + temp % 10;
            temp /= 10;
        }
        if (!(Wi7jcK != i)) {
            a[k] = i;
            k++;
            continue;
        };
    }
    for (k = 0; MN > k; k++) {
        for (h = 2; a[k] > h; h = h + 1) {
            if (!(0 != (a[k] % h)))
                pan = 1;
        }
        if (!(0 != pan)) {
            Cq4sNl3ncuj[t] = a[k];
            t++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            pan = 0;
            continue;
        }
        else
            pan = 0;
    }
    if (Cq4sNl3ncuj[0] == 0)
        printf ("no");
    else
        for (t = 0; t < (MN -1); t = t + 1) {
            if (Cq4sNl3ncuj[t + 1] != 0) {
                printf ("%d", Cq4sNl3ncuj[t]);
                printf (",");
            }
            else {
                if (Cq4sNl3ncuj[t] != 0 && Cq4sNl3ncuj[t + 1] == 0)
                    printf ("%d", Cq4sNl3ncuj[t]);
            };
        }
    printf ("\n");
}

