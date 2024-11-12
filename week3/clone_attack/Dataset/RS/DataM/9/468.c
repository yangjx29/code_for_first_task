struct   patient {
    char uTyiaPp [(355 - 344)];
    int age;
}
YLOgrdlYFiJ [(1862 - 862)];

int main () {
    int MXjEkSUzD0v, i, k, j, l, DVyfqCsvH = (477 - 477), b = (922 - 922), wt24IzHa;
    int sz1 [(1016 - 16)], sz2 [(1157 - 157)];
    char fAK9ShO3Pytp [(1876 - 876)] [(344 - 333)], zfc2 [1000] [(526 - 515)], f [11];
    scanf ("%d", &MXjEkSUzD0v);
    {
        i = 310 - 310;
        while (MXjEkSUzD0v > i) {
            scanf ("%s", &YLOgrdlYFiJ[i].uTyiaPp);
            scanf (" %d", &YLOgrdlYFiJ[i].age);
            i = i + 1;
        };
    }
    for (i = (55 - 55), j = (513 - 513), l = (73 - 73); MXjEkSUzD0v > i; i++) {
        if (YLOgrdlYFiJ[i].age >= 60) {
            DVyfqCsvH = DVyfqCsvH +1;
            sz1[j] = YLOgrdlYFiJ[i].age;
            strcpy (fAK9ShO3Pytp[j], YLOgrdlYFiJ[i].uTyiaPp);
            j = j + 1;
        }
        else {
            b = b + 1;
            sz2[l] = YLOgrdlYFiJ[i].age;
            strcpy (zfc2[l], YLOgrdlYFiJ[i].uTyiaPp);
            l = l + 1;
        };
    }
    {
        k = 0;
        while (MXjEkSUzD0v > k) {
            {
                j = 516 - 515;
                while (k <= j) {
                    if (sz1[j + 1] > sz1[j]) {
                        wt24IzHa = sz1[j];
                        sz1[j] = sz1[j + 1];
                        sz1[j + 1] = wt24IzHa;
                        strcpy (f, fAK9ShO3Pytp[j]);
                        strcpy (fAK9ShO3Pytp[j], fAK9ShO3Pytp[j + 1]);
                        strcpy (fAK9ShO3Pytp[j + 1], f);
                    }
                    j--;
                };
            }
            k++;
        };
    }
    {
        j = 0;
        while (j < DVyfqCsvH) {
            printf ("%s\n", fAK9ShO3Pytp[j]);
            j = j + 1;
        };
    }
    {
        l = 0;
        while (l < b) {
            printf ("%s\n", zfc2[l]);
            l++;
        };
    }
    return 0;
}

