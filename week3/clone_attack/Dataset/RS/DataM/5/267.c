int main () {
    char h2 [10000];
    double  k;
    int total1, total2;
    int i, same = 0;
    char h1 [10000];
    scanf ("%lf", &k);
    scanf ("%s", h1);
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
    scanf ("%s", h2);
    total1 = (int) strlen (h1);
    total2 = (int) strlen (h2);
    if (total1 != total2) {
        printf ("error");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        return 0;
    }
    else {
        for (i = 0; i < total1; i++) {
            if ((h1[i] == 'A' || h1[i] == 'T' || !('C' != h1[i]) || h1[i] == 'G') && (h2[i] == 'A' || h2[i] == 'T' || h2[i] == 'C' || h2[i] == 'G')) {
                if (h1[i] == h2[i]) {
                    same++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                };
            }
            else {
                printf ("error");
                return 0;
            };
        };
    }
    if (((double ) same / (double ) total1) > k) {
        printf ("yes");
    }
    else {
        printf ("no");
    }
    return 0;
}

