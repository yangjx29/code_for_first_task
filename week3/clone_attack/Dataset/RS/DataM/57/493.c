void  main () {
    int yQeAiupWZ;
    int UFEiw9yMd;
    int j;
    int m;
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
    char a [50] [10];
    scanf ("%d", &yQeAiupWZ);
    {
        UFEiw9yMd = 0;
        while (yQeAiupWZ > UFEiw9yMd) {
            scanf ("%s", a[UFEiw9yMd]);
            UFEiw9yMd = UFEiw9yMd +1;
        };
    }
    {
        UFEiw9yMd = 0;
        while (UFEiw9yMd < yQeAiupWZ) {
            {
                j = UFEiw9yMd;
                while (0 <= j) {
                    j = j - 1;
                    m = (int) strlen (a[UFEiw9yMd]);
                    if (!('r' != a[UFEiw9yMd][m - 1]) && !('e' != a[UFEiw9yMd][m - 2]))
                        a[UFEiw9yMd][m - 2] = '\0';
                    if (a[UFEiw9yMd][m - 1] == 'y' && a[UFEiw9yMd][m - 2] == 'l')
                        a[UFEiw9yMd][m - 2] = '\0';
                    if (a[UFEiw9yMd][m - 1] == 'g' && a[UFEiw9yMd][m - 2] == 'n' && a[UFEiw9yMd][m - 3] == 'i')
                        a[UFEiw9yMd][m - 3] = '\0';
                };
            }
            UFEiw9yMd++;
        };
    }
    for (UFEiw9yMd = 0; UFEiw9yMd < yQeAiupWZ; UFEiw9yMd++) {
        printf ("%s\n", a[UFEiw9yMd]);
    };
}

