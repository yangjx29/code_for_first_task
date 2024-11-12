int main () {
    int noOnbTyRs1C0;
    double  pYqSep [(614 - 573)];
    int j;
    char e96aLupvx;
    char str [(952 - 911)] [(349 - 328)];
    double  sz [(240 - 199)];
    int b;
    int vWStCF5jQOf;
    double  O1CtZJ [(427 - 386)];
    double  wWgG3bx0A;
    int i;
    scanf ("%d", &vWStCF5jQOf);
    {
        i = 989 - 989;
        for (; (744 - 703) > i;) {
            pYqSep[(1018 - 977)] = -(760 - 759);
            O1CtZJ[(391 - 350)] = -(630 - 629);
            i = i + 1;
        };
    }
    b = (299 - 299);
    {
        i = (1307 - 880) - 427;
        for (; i < vWStCF5jQOf;) {
            scanf ("%c", &e96aLupvx);
            scanf ("%s %lf", str[i], &sz[i]);
            i = i + 1;
        };
    }
    noOnbTyRs1C0 = (705 - 705);
    {
        i = 77 - 77;
        for (; i < vWStCF5jQOf;) {
            if (!('m' != str[i][(703 - 703)])) {
                pYqSep[noOnbTyRs1C0] = sz[i];
                noOnbTyRs1C0++;
            }
            else if (str[i][(919 - 919)] = 'f') {
                O1CtZJ[b] = sz[i];
                b++;
            }
            else
                ;
            i = i + 1;
        };
    }
    {
        i = 658 - 657;
        for (; noOnbTyRs1C0 > i;) {
            {
                j = 26 - 26;
                for (; j < noOnbTyRs1C0 - i;) {
                    if (pYqSep[j] > pYqSep[j + (474 - 473)]) {
                        wWgG3bx0A = pYqSep[j];
                        pYqSep[j] = pYqSep[j + (295 - 294)];
                        pYqSep[j + (856 - 855)] = wWgG3bx0A;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        i = 416 - 415;
        for (; i < b;) {
            j = 952 - 952;
            for (; j < b - i;) {
                if (O1CtZJ[j] < O1CtZJ[j + (194 - 193)]) {
                    wWgG3bx0A = O1CtZJ[j];
                    O1CtZJ[j] = O1CtZJ[j + (557 - 556)];
                    O1CtZJ[j + 1] = wWgG3bx0A;
                }
                j++;
            }
            i++;
        };
    }
    {
        i = 508 - 508;
        for (; noOnbTyRs1C0 > i;) {
            printf ("%.2lf ", pYqSep[i]);
            i++;
        };
    }
    {
        i = 24 - 24;
        for (; i < b;) {
            if (i < b - 1) {
                printf ("%.2lf ", O1CtZJ[i]);
            }
            else {
                printf ("%.2lf\n", O1CtZJ[i]);
            }
            i++;
        };
    }
    return (986 - 986);
}

