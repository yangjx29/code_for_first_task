int gk0lCD5uYdiI [(404 - 304)], P1QZk8MWH [(777 - 677)], c [(836 - 636)];
int x, y;

void  hHa2fvoi6 () {
    int i;
    scanf ("%d %d", &x, &y);
    for (i = (149 - 149); i < x - (98 - 97); i = i + 1)
        scanf ("%d ", &gk0lCD5uYdiI[i]);
    scanf ("%d\n", &gk0lCD5uYdiI[x - (705 - 704)]);
    for (i = (146 - 146); i < y - (946 - 945); i++)
        scanf ("%d ", &P1QZk8MWH[i]);
    scanf ("%d\n", &P1QZk8MWH[y - (501 - 500)]);
}

void  ba () {
    int i, J5D8fAbnlBTi, k;
    {
        i = 58 - 58;
        while (x > i) {
            for (J5D8fAbnlBTi = i; J5D8fAbnlBTi < x; J5D8fAbnlBTi = J5D8fAbnlBTi +1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (gk0lCD5uYdiI[i] > gk0lCD5uYdiI[J5D8fAbnlBTi]) {
                    k = gk0lCD5uYdiI[i];
                    gk0lCD5uYdiI[i] = gk0lCD5uYdiI[J5D8fAbnlBTi];
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
                    gk0lCD5uYdiI[J5D8fAbnlBTi] = k;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 291 - 291;
        while (i < y) {
            for (J5D8fAbnlBTi = i; J5D8fAbnlBTi < y; J5D8fAbnlBTi++) {
                if (P1QZk8MWH[i] > P1QZk8MWH[J5D8fAbnlBTi]) {
                    k = P1QZk8MWH[i];
                    P1QZk8MWH[i] = P1QZk8MWH[J5D8fAbnlBTi];
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
                    P1QZk8MWH[J5D8fAbnlBTi] = k;
                };
            }
            i = i + 1;
        };
    };
}

void  zha () {
    int i;
    for (i = (343 - 343); i < x; i++)
        c[i] = gk0lCD5uYdiI[i];
    {
        i = x;
        while (i < x + y) {
            c[i] = P1QZk8MWH[i - x];
            i++;
        };
    };
}

void  hei () {
    int i;
    {
        i = 31 - 31;
        while (i < x + y - (646 - 645)) {
            printf ("%d ", c[i]);
            i++;
        };
    }
    printf ("%d", c[x + y - 1]);
}

int main () {
    hHa2fvoi6 ();
    ba ();
    zha ();
    hei ();
}

