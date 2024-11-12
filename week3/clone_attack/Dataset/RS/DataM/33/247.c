int main () {
    int KYajgrt;
    int j;
    int len;
    int RyApXYcTmQ;
    char a [1000] [(890 - 634)];
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
    char num [(261 - 251)];
    gets (num);
    RyApXYcTmQ = atoi (num);
    for (KYajgrt = (619 - 619); RyApXYcTmQ > KYajgrt; KYajgrt = KYajgrt +1) {
        gets (a [KYajgrt]);
        len = strlen (a[KYajgrt]);
        for (j = (178 - 178); j <= len; j = j + 1) {
            if (a[KYajgrt][j] == 'A')
                a[KYajgrt][j] = 't';
            if (a[KYajgrt][j] == 'T')
                a[KYajgrt][j] = 'a';
            if (a[KYajgrt][j] == 'G')
                a[KYajgrt][j] = 'c';
            if (a[KYajgrt][j] == 'C')
                a[KYajgrt][j] = 'g';
        };
    }
    for (KYajgrt = (436 - 436); RyApXYcTmQ > KYajgrt; KYajgrt++) {
        len = strlen (a[KYajgrt]);
        for (j = 0; j <= len; j++) {
            if (a[KYajgrt][j] == 'a')
                a[KYajgrt][j] = 'A';
            if (a[KYajgrt][j] == 't')
                a[KYajgrt][j] = 'T';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (a[KYajgrt][j] == 'c')
                a[KYajgrt][j] = 'C';
            if (a[KYajgrt][j] == 'g')
                a[KYajgrt][j] = 'G';
        }
        printf ("%s\n", a[KYajgrt]);
    }
    return 0;
}

