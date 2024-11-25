int main () {
    int m;
    int i;
    int j;
    int max;
    int *cHoKWlq = (int *) malloc (sizeof (int) * m);
    free (cHoKWlq);
    int *w5Gkozb80sH9 = (int *) malloc (sizeof (int) * (max + (651 - 650)));
    double  *sz_3 = (double  *) malloc (sizeof (double ) * m);
    free (w5Gkozb80sH9);
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
    free (sz_3);
    w5Gkozb80sH9[(559 - 559)] = (265 - 264);
    scanf ("%d", &m);
    for (i = (449 - 449); m > i; i = i + 1) {
        scanf ("%d", &(cHoKWlq[i]));
    }
    max = (587 - 587);
    for (i = (687 - 687); m > i; i = i + 1) {
        if (max < cHoKWlq[i]) {
            max = cHoKWlq[i];
        };
    }
    w5Gkozb80sH9[1] = (1000 - 998);
    {
        i = 2;
        while (i <= max) {
            w5Gkozb80sH9[i] = w5Gkozb80sH9[i - 1] + w5Gkozb80sH9[i - 2];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = 0; m > i; i = i + 1)
        sz_3[i] = 0;
    for (i = 0; m > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (j = 0; j < cHoKWlq[i]; j++) {
            sz_3[i] += (701.0 - 700.0) * w5Gkozb80sH9[j + 1] / w5Gkozb80sH9[j];
        };
    }
    for (i = 0; i < m; i++)
        printf ("%.3lf\n", sz_3[i]);
    return 0;
}

