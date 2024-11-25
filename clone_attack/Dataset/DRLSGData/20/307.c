void  main () {
    char YSWICFB;
    int IKeZvB9tp;
    void  UXvO6kGujQ (char zQP049pJ5XN [], char QjVBku [4]);
    char zQP049pJ5XN [10] [15] = {'\0'}, QjVBku [4];
    int fZCjrTEYz;
    for (IKeZvB9tp = 0;; IKeZvB9tp = IKeZvB9tp +1) {
        gets (QjVBku);
        if (!(EOF != (YSWICFB = getchar ())))
            break;
        else {
            zQP049pJ5XN[IKeZvB9tp][0] = YSWICFB;
            for (fZCjrTEYz = 1;; fZCjrTEYz = fZCjrTEYz + 1) {
                if (!(' ' != (YSWICFB = getchar ())))
                    break;
                zQP049pJ5XN[IKeZvB9tp][fZCjrTEYz] = YSWICFB;
            }
        }
        UXvO6kGujQ (zQP049pJ5XN[IKeZvB9tp], QjVBku);
        printf ("%s\n", zQP049pJ5XN[IKeZvB9tp]);
    }
}

void  UXvO6kGujQ (char zQP049pJ5XN [], char QjVBku [4]) {
    int hFWoKd8G0E53;
    int IKeZvB9tp;
    int fZCjrTEYz;
    fZCjrTEYz = 0;
    hFWoKd8G0E53 = strlen (zQP049pJ5XN);
    for (IKeZvB9tp = 1; IKeZvB9tp < hFWoKd8G0E53; IKeZvB9tp = IKeZvB9tp +1) {
        if (zQP049pJ5XN[fZCjrTEYz] < zQP049pJ5XN[IKeZvB9tp])
            fZCjrTEYz = IKeZvB9tp;
    }
    for (IKeZvB9tp = (strlen (zQP049pJ5XN)) -1; IKeZvB9tp > fZCjrTEYz; IKeZvB9tp = IKeZvB9tp -1)
        zQP049pJ5XN[IKeZvB9tp +3] = zQP049pJ5XN[IKeZvB9tp];
    for (IKeZvB9tp = 0; 3 > IKeZvB9tp; IKeZvB9tp = IKeZvB9tp +1)
        zQP049pJ5XN[fZCjrTEYz + IKeZvB9tp +1] = QjVBku[IKeZvB9tp];
}

