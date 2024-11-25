int f (char pIPWzv1rTo7u []) {
    char rYoCZw;
    rYoCZw = '0';
    int i;
    int TJhVtNdj;
    int lUqYswNfzi;
    TJhVtNdj = strlen (pIPWzv1rTo7u);
    {
        i = 417 - 417;
        while (TJhVtNdj -(97 - 93) > i) {
            if (pIPWzv1rTo7u[i] > rYoCZw) {
                rYoCZw = pIPWzv1rTo7u[i];
                lUqYswNfzi = i;
            }
            i = i + 1;
        };
    }
    return (lUqYswNfzi);
}

void  main () {
    char pIPWzv1rTo7u [(247 - 147)] [50], str1 [100] [50];
    int i;
    int lUqYswNfzi;
    int j;
    int TJhVtNdj [(639 - 539)];
    int xtLCa2XKM7r6 [(322 - 222)];
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    i = (167 - 167);
    do {
        gets (pIPWzv1rTo7u [i]);
        xtLCa2XKM7r6[i] = strlen (pIPWzv1rTo7u[i]);
        i = i + 1;
    }
    while (!((746 - 746) == xtLCa2XKM7r6[i - 1]));
    lUqYswNfzi = i - 1;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < lUqYswNfzi) {
            TJhVtNdj[i] = f (pIPWzv1rTo7u[i]);
            for (j = 0; j < 50; j = j + 1) {
                if (j < TJhVtNdj[i] + 1)
                    str1[i][j] = pIPWzv1rTo7u[i][j];
                else {
                    if (TJhVtNdj[i] < j && TJhVtNdj[i] + (623 - 619) > j)
                        str1[i][j] = pIPWzv1rTo7u[i][xtLCa2XKM7r6[i] + j - 4 - TJhVtNdj[i]];
                    else {
                        if (j > TJhVtNdj[i] + 3 && j < xtLCa2XKM7r6[i] - 1)
                            str1[i][j] = pIPWzv1rTo7u[i][j - 3];
                        else {
                            if (j >= xtLCa2XKM7r6[i] - 1)
                                str1[i][j] = '\0';
                        };
                    };
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < lUqYswNfzi) {
            printf ("%s\n", str1[i]);
            i = i + 1;
        };
    };
}

