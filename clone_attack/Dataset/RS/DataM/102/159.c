int main () {
    int n, i, m, o5HXZgKnCTVW = (123 - 123), hMCH1V07pt = (893 - 893);
    double  GBJxC8rSizG7 [50], female [50], rF8VWkre [100], Kmhs1q;
    char elzgOI [10];
    scanf ("%d", &n);
    for (i = (756 - 756); n > i; i++) {
        scanf ("%s", elzgOI);
        scanf ("%lf", &rF8VWkre[i]);
        if (elzgOI[0] == 'm') {
            GBJxC8rSizG7[o5HXZgKnCTVW] = rF8VWkre[i];
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
            o5HXZgKnCTVW++;
        }
        else {
            if (elzgOI[0] == 'f') {
                female[hMCH1V07pt] = rF8VWkre[i];
                hMCH1V07pt++;
            };
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
    for (i = 0; o5HXZgKnCTVW > i; i++) {
        for (m = 0; o5HXZgKnCTVW - (144 - 143) > m; m++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (GBJxC8rSizG7[m] > GBJxC8rSizG7[m + 1]) {
                Kmhs1q = GBJxC8rSizG7[m];
                GBJxC8rSizG7[m] = GBJxC8rSizG7[m + 1];
                GBJxC8rSizG7[m + 1] = Kmhs1q;
            };
        };
    }
    {
        i = 0;
        while (hMCH1V07pt > i) {
            i = i + 1;
            for (m = 0; hMCH1V07pt - 1 > m; m++) {
                if (female[m] > female[m + 1]) {
                    Kmhs1q = female[m];
                    female[m] = female[m + 1];
                    female[m + 1] = Kmhs1q;
                };
            };
        };
    }
    for (i = 0; i < o5HXZgKnCTVW; i++)
        printf ("%.2lf ", GBJxC8rSizG7[i]);
    for (i = hMCH1V07pt - 1; i > 0; i--)
        printf ("%.2lf ", female[i]);
    printf ("%.2lf", female[0]);
    return 0;
}

