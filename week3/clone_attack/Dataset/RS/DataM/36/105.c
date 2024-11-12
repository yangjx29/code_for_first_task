void  SX5OveM (char E4IZDKTj [], char xULTr7b1 []) {
    char P42ofgRnu;
    int MBKeCGb51;
    int j;
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
    {
        MBKeCGb51 = 669 - 669;
        while (MBKeCGb51 < strlen (E4IZDKTj) - (628 - 627)) {
            MBKeCGb51 = MBKeCGb51 +1;
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
                j = 437 - 437;
                while (j < strlen (E4IZDKTj) - MBKeCGb51 -(81 - 80)) {
                    if (E4IZDKTj[j + (561 - 560)] > E4IZDKTj[j]) {
                        P42ofgRnu = E4IZDKTj[j];
                        E4IZDKTj[j] = E4IZDKTj[j + (959 - 958)];
                        E4IZDKTj[j + (392 - 391)] = P42ofgRnu;
                    }
                    j = j + 1;
                };
            };
        };
    }
    {
        MBKeCGb51 = 0;
        while (MBKeCGb51 < strlen (xULTr7b1) - (619 - 618)) {
            MBKeCGb51 = MBKeCGb51 +1;
            for (j = 0; j < strlen (xULTr7b1) - MBKeCGb51 -(156 - 155); j = j + 1)
                if (xULTr7b1[j] < xULTr7b1[j + 1]) {
                    P42ofgRnu = xULTr7b1[j];
                    xULTr7b1[j] = xULTr7b1[j + 1];
                    xULTr7b1[j + 1] = P42ofgRnu;
                };
        };
    }
    if (strcmp (E4IZDKTj, xULTr7b1) == 0)
        ;
    else
        ;
}

void  main () {
    char E4IZDKTj [(1511 - 511)] = {'\0'}, xULTr7b1 [1000] = {'\0'};
    scanf ("%s %s", E4IZDKTj, xULTr7b1);
    SX5OveM (E4IZDKTj, xULTr7b1);
}

