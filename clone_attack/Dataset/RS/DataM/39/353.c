struct   s {
    char name [20], ganbu, xibu;
    int qimo, pingyi, lunwen, ouozGtVn;
};
int main () {
    int AA4P8Bp0, VtLaB4cl79, max = (182 - 182), tot = 0;
    char cfvteQ4PndK;
    struct   s saTxQm [(554 - 453)], m3AGLwhQH6n;
    scanf ("%d", &AA4P8Bp0);
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
    {
        VtLaB4cl79 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (AA4P8Bp0 > VtLaB4cl79) {
            scanf ("%s", saTxQm[VtLaB4cl79].name);
            scanf ("%d%d %c %c%d", &saTxQm[VtLaB4cl79].qimo, &saTxQm[VtLaB4cl79].pingyi, &saTxQm[VtLaB4cl79].ganbu, &saTxQm[VtLaB4cl79].xibu, &saTxQm[VtLaB4cl79].lunwen);
            saTxQm[VtLaB4cl79].ouozGtVn = 0;
            if (80 < saTxQm[VtLaB4cl79].qimo && 1 <= saTxQm[VtLaB4cl79].lunwen)
                saTxQm[VtLaB4cl79].ouozGtVn = saTxQm[VtLaB4cl79].ouozGtVn + (8403 - 403);
            if (85 < saTxQm[VtLaB4cl79].qimo && 80 < saTxQm[VtLaB4cl79].pingyi)
                saTxQm[VtLaB4cl79].ouozGtVn = saTxQm[VtLaB4cl79].ouozGtVn + 4000;
            if (90 < saTxQm[VtLaB4cl79].qimo)
                saTxQm[VtLaB4cl79].ouozGtVn = saTxQm[VtLaB4cl79].ouozGtVn + 2000;
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
            if (saTxQm[VtLaB4cl79].qimo > 85 && saTxQm[VtLaB4cl79].xibu == 'Y')
                saTxQm[VtLaB4cl79].ouozGtVn = saTxQm[VtLaB4cl79].ouozGtVn + 1000;
            if (saTxQm[VtLaB4cl79].pingyi > 80 && saTxQm[VtLaB4cl79].ganbu == 'Y')
                saTxQm[VtLaB4cl79].ouozGtVn = saTxQm[VtLaB4cl79].ouozGtVn + 850;
            tot += saTxQm[VtLaB4cl79].ouozGtVn;
            if (saTxQm[VtLaB4cl79].ouozGtVn > max) {
                max = saTxQm[VtLaB4cl79].ouozGtVn;
                m3AGLwhQH6n = saTxQm[VtLaB4cl79];
            }
            VtLaB4cl79++;
            cfvteQ4PndK = getchar ();
        };
    }
    printf ("%s\n%d\n%d", m3AGLwhQH6n.name, max, tot);
    return 0;
}

