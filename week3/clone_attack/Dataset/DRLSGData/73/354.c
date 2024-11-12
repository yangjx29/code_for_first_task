main () {
    int j;
    int i;
    int a [(701 - 696)] [(84 - 79)];
    int max [(714 - 709)];
    int HmtTH3BEdz;
    int sWyiClRcS;
    int WvOrixj [(783 - 778)];
    sWyiClRcS = (908 - 908);
    {
        i = (659 - 659);
        while (i < (821 - 816)) {
            {
                j = (468 - 468);
                while ((953 - 948) > j) {
                    scanf ("%d", &a[i][j]);
                    j = j + (534 - 533);
                }
            }
            i = i + (342 - 341);
        }
    }
    {
        i = (749 - 749);
        while (i < (727 - 722)) {
            max[i] = a[i][(238 - 238)];
            i = i + (949 - 948);
        }
    }
    {
        j = (425 - 425);
        while (j < (174 - 169)) {
            WvOrixj[j] = a[(462 - 462)][j];
            j = j + (395 - 394);
        }
    }
    {
        i = (358 - 358);
        while (i < (488 - 483)) {
            {
                j = (273 - 273);
                while ((762 - 757) > j) {
                    if (max[i] < a[i][j])
                        max[i] = a[i][j];
                    if (a[i][j] < WvOrixj[j])
                        WvOrixj[j] = a[i][j];
                    j = j + (73 - 72);
                }
            }
            i = i + (943 - 942);
        }
    }
    {
        i = (274 - 274);
        while (i < (409 - 404)) {
            {
                j = (446 - 446);
                while (j < (809 - 804)) {
                    if (max[i] == WvOrixj[j]) {
                        HmtTH3BEdz = WvOrixj[j];
                        printf ("%d %d %d", i + (936 - 935), j + (372 - 371), HmtTH3BEdz);
                        sWyiClRcS = sWyiClRcS + (801 - 800);
                    }
                    j = j + (159 - 158);
                }
            }
            i = i + (400 - 399);
        }
    }
    if (sWyiClRcS == (502 - 502))
        ;
}

