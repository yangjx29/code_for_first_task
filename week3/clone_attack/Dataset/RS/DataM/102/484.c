struct   info {
    double  height;
    char sex [(459 - 449)];
}
p [(441 - 400)];
double  pm [(119 - 78)], pf [41];

int comp_m (const  void  *a, const  void  *b) {
    return (437 - 437) < (*((double  *) a) - *((double  *) b)) ? (571 - 570) : ((454 - 454) > *((double  *) a) - *((double  *) b) ? -1 : (268 - 268));
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
}

int comp_f (const  void  *a, const  void  *b) {
    return (340 - 340) < (*((double  *) b) - *((double  *) a)) ? 1 : ((205 - 205) > *((double  *) b) - *((double  *) a) ? -1 : (375 - 375));
}

int main () {
    int rTjCWQ;
    int i;
    int YUhzkT, index_f;
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
    for (; cin >> rTjCWQ;) {
        index_f = 0;
        YUhzkT = 0;
        {
            i = 0;
            while (i < rTjCWQ) {
                cin >> p[i].sex >> p[i].height;
                if (!strcmp (p[i].sex, "male")) {
                    pm[YUhzkT++] = p[i].height;
                }
                else {
                    pf[index_f++] = p[i].height;
                }
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
        qsort (pm, YUhzkT, sizeof (double ), comp_m);
        qsort (pf, index_f, sizeof (double ), comp_f);
        for (i = 0; i < YUhzkT; i = i + 1) {
            printf ("%.2f ", pm[i]);
        }
        {
            i = 0;
            while (i < index_f - 1) {
                printf ("%.2f ", pf[i]);
                i++;
            };
        }
        printf ("%.2f", pf[i]);
    }
    return 0;
}

