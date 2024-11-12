void  main () {
    char ikpZfag [(852 - 752)], b [100];
    gets (ikpZfag);
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
    int Y0AYTNP [100];
    if (atoi (ikpZfag) < 13)
        printf ("0\n%d", atoi (ikpZfag));
    else {
        int z6W3RdMKHjzD, i, wei;
        int BfQtKZg;
        BfQtKZg = strlen (ikpZfag);
        wei = ikpZfag[(766 - 766)] - '0';
        {
            i = 311 - 310;
            while (BfQtKZg > i) {
                b[i - 1] = ((256 - 246) * wei + ikpZfag[i] - '0') / 13 + '0';
                wei = ((128 - 118) * wei + ikpZfag[i] - '0') % 13;
                i = i + 1;
            };
        }
        if (!('0' != b[0]))
            i = 1;
        else
            i = 0;
        for (z6W3RdMKHjzD = i; z6W3RdMKHjzD < BfQtKZg -1; z6W3RdMKHjzD = z6W3RdMKHjzD + 1) {
            Y0AYTNP[z6W3RdMKHjzD] = b[z6W3RdMKHjzD] - '0';
            printf ("%d", Y0AYTNP[z6W3RdMKHjzD]);
        }
        printf ("%d", wei);
        printf ("\n");
    };
}

