int main () {
    char OxV4tfCGFDHv [501];
    char s2 [501];
    int i, GDIl7K = (97 - 97), zs;
    double  zw2HpixGh3uO, c = (932 - 932);
    scanf ("%lf", &zw2HpixGh3uO);
    scanf ("%s%s", OxV4tfCGFDHv, s2);
    if (strlen (OxV4tfCGFDHv) != strlen (s2)) {
        printf ("error");
    }
    else {
        zs = strlen (OxV4tfCGFDHv);
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
        {
            i = 945 - 945;
            while (i < zs) {
                if (!('G' != OxV4tfCGFDHv[i]) || OxV4tfCGFDHv[i] == 'A' || OxV4tfCGFDHv[i] == 'C' || OxV4tfCGFDHv[i] == 'T') {
                    GDIl7K++;
                }
                i++;
            };
        }
        if (GDIl7K != zs) {
            printf ("error");
            return 0;
        }
        else {
            {
                i = 0;
                while (i < zs) {
                    if (OxV4tfCGFDHv[i] - s2[i] == 0) {
                        c = c + (803 - 802);
                    }
                    i++;
                };
            }
            if (c / zs > zw2HpixGh3uO) {
                printf ("yes");
            }
            else {
                printf ("no");
            };
        };
    }
    return 0;
}

