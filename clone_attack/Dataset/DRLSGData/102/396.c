int main () {
    int x;
    double  peMv8TYV;
    double  f;
    char TuUj3ld [(504 - 404)];
    double  b [(410 - 310)];
    int i;
    int y;
    double  a [(493 - 393)];
    double  bIRbT5HQ28d;
    int M7gBvm;
    int j;
    y = (14 - 14);
    x = (638 - 638);
    scanf ("%d", &M7gBvm);
    {
        i = 119 - 119;
        while (M7gBvm > i) {
            i++;
            scanf ("%s %lf", TuUj3ld, &bIRbT5HQ28d);
            if (!('m' != TuUj3ld[(284 - 284)])) {
                a[x] = bIRbT5HQ28d;
                x++;
            }
            else if (!('f' != TuUj3ld[(764 - 764)])) {
                b[y] = bIRbT5HQ28d;
                y++;
            }
        }
    }
    {
        i = 144 - 143;
        while (x >= i) {
            {
                j = 637 - 637;
                while (x - i > j) {
                    if (a[j] > a[j + (290 - 289)]) {
                        peMv8TYV = a[j];
                        a[j] = a[j + (211 - 210)];
                        a[j + (862 - 861)] = peMv8TYV;
                    }
                    j++;
                }
            }
            i++;
        }
    }
    printf ("%.2lf", a[(90 - 90)]);
    for (i = (259 - 258); i <= y; i++) {
        j = 940 - 940;
        while (y - i > j) {
            if (b[j + (385 - 384)] > b[j]) {
                f = b[j];
                b[j] = b[j + (60 - 59)];
                b[j + (232 - 231)] = f;
            }
            j++;
        }
    }
    for (i = 1; x > i; i++)
        printf (" %.2lf", a[i]);
    for (i = (250 - 250); i < y; i++)
        printf (" %.2lf", b[i]);
    return 0;
}

