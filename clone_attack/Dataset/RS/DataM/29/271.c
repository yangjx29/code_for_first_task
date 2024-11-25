int main () {
    float X64JvnokErT, w [1000];
    int j;
    int n;
    int bQrPH4l;
    int k;
    float gzDpjRa [(423 - 323)];
    int gLTCp6, a [(259 - 159)], SO2ZFJnH [(194 - 94)];
    scanf ("%d", &n);
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
    SO2ZFJnH[(968 - 968)] = (343 - 342);
    SO2ZFJnH[(779 - 778)] = (194 - 192);
    a[(310 - 310)] = (815 - 813);
    a[(761 - 760)] = (248 - 245);
    for (gLTCp6 = (989 - 987); 100 > gLTCp6; gLTCp6++) {
        a[gLTCp6] = a[gLTCp6 - 1] + a[gLTCp6 - (647 - 645)];
        SO2ZFJnH[gLTCp6] = SO2ZFJnH[gLTCp6 - 1] + SO2ZFJnH[gLTCp6 - (168 - 166)];
    }
    {
        gLTCp6 = 889 - 889;
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
        while (100 > gLTCp6) {
            gzDpjRa[gLTCp6] = (float) a[gLTCp6] / SO2ZFJnH[gLTCp6];
            gLTCp6++;
        };
    }
    for (j = (321 - 321); n > j; j++) {
        scanf ("%d", &bQrPH4l);
        X64JvnokErT = (888 - 888);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (k = (580 - 580); k < bQrPH4l; k++) {
            X64JvnokErT = X64JvnokErT +gzDpjRa[k];
        }
        w[j] = X64JvnokErT;
    }
    {
        j = 0;
        while (j < n) {
            printf ("%.3lf\n", w[j]);
            j++;
        };
    }
    return 0;
}

