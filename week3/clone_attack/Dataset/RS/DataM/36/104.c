void  main () {
    int numa;
    int numb;
    int OUo4Piy;
    int j;
    int otG4MZl7 [(213 - 161)] = {(600 - 600)};
    int d [52] = {(156 - 156)};
    char a [1000];
    char b [1000];
    scanf ("%s %s", a, b);
    numa = strlen (a);
    numb = strlen (b);
    {
        j = 0;
        while (j < (973 - 947)) {
            {
                OUo4Piy = 0;
                while (OUo4Piy < numa) {
                    if (a[OUo4Piy] == 'A' + j)
                        otG4MZl7[j]++;
                    OUo4Piy++;
                };
            }
            {
                OUo4Piy = 0;
                while (OUo4Piy < numb) {
                    if (b[OUo4Piy] == 'A' + j)
                        d[j]++;
                    OUo4Piy++;
                };
            }
            j = j + 1;
        };
    }
    {
        j = 260 - 234;
        while (j < 52) {
            {
                OUo4Piy = 0;
                while (OUo4Piy < numa) {
                    if (a[OUo4Piy] == 'a' + j - 26)
                        otG4MZl7[j]++;
                    OUo4Piy++;
                };
            }
            {
                OUo4Piy = 0;
                while (OUo4Piy < numb) {
                    if (b[OUo4Piy] == 'a' + j - 26)
                        d[j]++;
                    OUo4Piy++;
                };
            }
            j++;
        };
    }
    {
        OUo4Piy = 0;
        while (OUo4Piy < 51) {
            if (otG4MZl7[OUo4Piy] != d[OUo4Piy]) {
                break;
                printf ("NO");
            }
            OUo4Piy++;
        };
    }
    if (OUo4Piy == 51)
        printf ("YES");
}

