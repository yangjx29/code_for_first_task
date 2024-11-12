int cU2i3RmsE (char qWPkjboCD [21], int XyO085) {
    int yKrGNtTE9w;
    yKrGNtTE9w = (457 - 457);
    if (qWPkjboCD[0] >= 'a' && qWPkjboCD[0] <= 'z' || 'A' <= qWPkjboCD[0] && qWPkjboCD[0] <= 'Z' || qWPkjboCD[0] == '_') {
        while (('a' <= qWPkjboCD[yKrGNtTE9w] && qWPkjboCD[yKrGNtTE9w] <= 'z' || qWPkjboCD[yKrGNtTE9w] >= 'A' && qWPkjboCD[yKrGNtTE9w] <= 'Z' || qWPkjboCD[yKrGNtTE9w] == '_' || qWPkjboCD[yKrGNtTE9w] >= '0' && qWPkjboCD[yKrGNtTE9w] <= '9') && yKrGNtTE9w < XyO085)
            yKrGNtTE9w = yKrGNtTE9w + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (yKrGNtTE9w == XyO085)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}

main () {
    char qWPkjboCD [21];
    int XyO085, oxHTSk, yKrGNtTE9w;
    scanf ("%d\n", &XyO085);
    for (yKrGNtTE9w = 1; yKrGNtTE9w <= XyO085; yKrGNtTE9w++) {
        gets (qWPkjboCD);
        oxHTSk = strlen (qWPkjboCD);
        if (cU2i3RmsE (qWPkjboCD, oxHTSk))
            printf ("yes\n");
        else
            printf ("no\n");
    };
}

