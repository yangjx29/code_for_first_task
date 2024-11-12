main () {
    int RltIBs, ZpZfbYV, tlosbNM = (291 - 291), i, q9u6wPsnI, rqNc3K4UF6E, pDusC2JSP, woI1tGRH78vp, H1buYP5rRAE;
    int vMBJqC2 [1000];
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
    scanf ("%d %d", &RltIBs, &ZpZfbYV);
    {
        rqNc3K4UF6E = RltIBs;
        while (ZpZfbYV >= rqNc3K4UF6E) {
            i = 2;
            do {
                pDusC2JSP = rqNc3K4UF6E % i;
                i++;
            }
            while (!(0 == pDusC2JSP) && rqNc3K4UF6E > i);
            if (!(rqNc3K4UF6E != i)) {
                H1buYP5rRAE = rqNc3K4UF6E;
                pDusC2JSP = 0;
                do {
                    woI1tGRH78vp = H1buYP5rRAE % 10;
                    H1buYP5rRAE = H1buYP5rRAE / 10;
                    pDusC2JSP = pDusC2JSP * 10 + woI1tGRH78vp;
                }
                while (H1buYP5rRAE != 0);
                if (rqNc3K4UF6E == pDusC2JSP) {
                    tlosbNM = tlosbNM + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    vMBJqC2[tlosbNM] = rqNc3K4UF6E;
                };
            }
            rqNc3K4UF6E = rqNc3K4UF6E + 1;
        };
    }
    if (tlosbNM == 0)
        printf ("no");
    else {
        for (i = 1; i <= tlosbNM - 1; i = i + 1)
            printf ("%d,", vMBJqC2[i]);
        printf ("%d", vMBJqC2[tlosbNM]);
    };
}

