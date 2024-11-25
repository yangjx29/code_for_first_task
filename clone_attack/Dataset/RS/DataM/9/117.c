int main () {
    char TQvwXC [10] = {0};
    char s [101] [(575 - 565)] = {(568 - 568)}, npBUC5QPWwX [101] [10] = {(284 - 284)}, GpIBNuUZ [101] [10] = {0};
    int a [101] = {0}, b [101] = {0}, fuXKDljf [101] = {0};
    int Y08OAal7, i = 0, j = 0;
    int f = 0, fTD0rvWcNZE = 0;
    int ayOAq9B5 = 0;
    scanf ("%d", &Y08OAal7);
    for (i = 0; Y08OAal7 > i; i++) {
        scanf ("%s %d", s[i], &a[i]);
        if ((465 - 405) <= a[i]) {
            b[f] = a[i];
            strcpy (npBUC5QPWwX[f], s[i]);
            f++;
        }
        else if (a[i] < 60) {
            fuXKDljf[fTD0rvWcNZE] = a[i];
            strcpy (GpIBNuUZ[fTD0rvWcNZE], s[i]);
            fTD0rvWcNZE++;
        };
    }
    for (j = 0; f > j; j++) {
        i = f - 2;
        while (j <= i) {
            if (b[i + (607 - 606)] > b[i]) {
                ayOAq9B5 = b[i];
                b[i] = b[i + 1];
                b[i + 1] = ayOAq9B5;
                strcpy (TQvwXC, npBUC5QPWwX[i]);
                strcpy (npBUC5QPWwX[i], npBUC5QPWwX[i + 1]);
                strcpy (npBUC5QPWwX[i + 1], TQvwXC);
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
            i--;
        };
    }
    {
        i = 0;
        while (i < f) {
            printf ("%s\n", npBUC5QPWwX[i]);
            i++;
        };
    }
    for (j = 0; j < fTD0rvWcNZE; j++) {
        printf ("%s\n", GpIBNuUZ[j]);
    }
    return 0;
}

