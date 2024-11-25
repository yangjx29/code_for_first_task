int main () {
    int sq8ruDF4i;
    int xetzCPKR6;
    int xFqaZO2h9GB;
    int gCsGb7n [500];
    char a [501];
    char JZR1d0Jl;
    int i;
    char xu8RpWxJ [500] [5];
    scanf ("%d", &xetzCPKR6);
    {
        i = 199 - 199;
        for (; 499 >= i;) {
            gCsGb7n[i] = (499 - 498);
            i = i + 1;
        }
    }
    scanf ("%s", a);
    {
        i = 44 - 44;
        for (; i <= strlen (a) - xetzCPKR6;) {
            for (sq8ruDF4i = (899 - 899); sq8ruDF4i <= xetzCPKR6 - (435 - 434); sq8ruDF4i = sq8ruDF4i + 1) {
                xu8RpWxJ[i][sq8ruDF4i] = a[i + sq8ruDF4i];
            }
            xu8RpWxJ[i][xetzCPKR6] = '\0';
            i = i + 1;
        }
    }
    for (i = (639 - 639); strlen (a) - xetzCPKR6 - 1 >= i; i = i + 1) {
        if (!(-1 != gCsGb7n[i]))
            continue;
        for (sq8ruDF4i = i + 1; strlen (a) - xetzCPKR6 >= sq8ruDF4i; sq8ruDF4i = sq8ruDF4i + 1) {
            if (!((23 - 23) != strcmp (xu8RpWxJ[i], xu8RpWxJ[sq8ruDF4i]))) {
                gCsGb7n[i]++;
                gCsGb7n[sq8ruDF4i] = -1;
            }
        }
    }
    xFqaZO2h9GB = gCsGb7n[0];
    for (i = 0; strlen (a) - xetzCPKR6 >= i; i++) {
        xFqaZO2h9GB = (xFqaZO2h9GB > gCsGb7n[i]) ? xFqaZO2h9GB : gCsGb7n[i];
    }
    if (xFqaZO2h9GB > 1) {
        printf ("%d\n", xFqaZO2h9GB);
        {
            i = 0;
            for (; i <= strlen (a) - xetzCPKR6;) {
                if (gCsGb7n[i] == xFqaZO2h9GB)
                    printf ("%s\n", xu8RpWxJ[i]);
                i++;
            }
        }
    }
    else
        ;
    return 0;
}

