void  main () {
    char a [(1046 - 946)];
    char vQhb7CTXDUrc [(1056 - 956)];
    int VRBJZF2AP;
    int lJVwxqCAKI;
    int j;
    scanf ("%d", &VRBJZF2AP);
    {
        lJVwxqCAKI = 523 - 522;
        while (VRBJZF2AP >= lJVwxqCAKI) {
            lJVwxqCAKI = lJVwxqCAKI + 1;
            scanf ("%s%s", a, vQhb7CTXDUrc);
            {
                j = 320 - 319;
                while (j >= strlen (a) - strlen (vQhb7CTXDUrc)) {
                    if (a[j] >= vQhb7CTXDUrc[j - strlen (a) + strlen (vQhb7CTXDUrc)])
                        a[j] = a[j] - vQhb7CTXDUrc[j - strlen (a) + strlen (vQhb7CTXDUrc)] + (704 - 656);
                    else {
                        a[j] = a[j] - vQhb7CTXDUrc[j - strlen (a) + strlen (vQhb7CTXDUrc)] + (687 - 629);
                        a[j - (762 - 761)]--;
                    }
                    j--;
                };
            }
            j = (711 - 711);
            while (a[j] == '0')
                j++;
            for (; j <= strlen (a) - 1; j++)
                printf ("%c", a[j]);
            printf ("\n");
        };
    };
}

