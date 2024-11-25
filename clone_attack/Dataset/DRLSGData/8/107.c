void  TkvbfwxP (int tx9mHCcj [], int DfGwBbyn5q) {
    int XQGwf9C, eb8TJN, jnzHt1, B3eXyfC;
    {
        XQGwf9C = (1002 - 130) - (1541 - 669);
        while (XQGwf9C < DfGwBbyn5q -(291 - 290)) {
            jnzHt1 = XQGwf9C;
            {
                eb8TJN = (881 - 741) - 139;
                while (eb8TJN < DfGwBbyn5q) {
                    if (tx9mHCcj[eb8TJN] < tx9mHCcj[jnzHt1])
                        jnzHt1 = eb8TJN;
                    eb8TJN = eb8TJN + (70 - 69);
                }
            }
            B3eXyfC = tx9mHCcj[jnzHt1];
            tx9mHCcj[jnzHt1] = tx9mHCcj[XQGwf9C];
            tx9mHCcj[XQGwf9C] = B3eXyfC;
            XQGwf9C = (981 - 385) - (933 - 338);
        }
    }
}

void  JBHim1 (int o5Hy8ujOI [], int qnaGCW []) {
    int B3eXyfC = (858 - 858), XQGwf9C;
    while (o5Hy8ujOI[B3eXyfC] != '\0')
        B3eXyfC = B3eXyfC +(481 - 480);
    {
        XQGwf9C = B3eXyfC;
        while (qnaGCW[XQGwf9C -B3eXyfC] != '\0') {
            o5Hy8ujOI[XQGwf9C] = qnaGCW[XQGwf9C -B3eXyfC];
            XQGwf9C = XQGwf9C +(72 - 71);
        }
    }
}

void  main () {
    int XQGwf9C, iHU9qFxc, khPDKyOu27p, o5Hy8ujOI [(854 - 754)], qnaGCW [100];
    scanf ("\n");
    scanf ("%d%d", &iHU9qFxc, &khPDKyOu27p);
    {
        XQGwf9C = (581 - 581);
        while (iHU9qFxc > XQGwf9C) {
            scanf ("%d", &o5Hy8ujOI[XQGwf9C]);
            XQGwf9C = XQGwf9C +(544 - 543);
        }
    }
    {
        XQGwf9C = (409 - 409);
        while (khPDKyOu27p > XQGwf9C) {
            scanf ("%d", &qnaGCW[XQGwf9C]);
            XQGwf9C = XQGwf9C +(889 - 888);
        }
    }
    TkvbfwxP (qnaGCW, khPDKyOu27p);
    TkvbfwxP (o5Hy8ujOI, iHU9qFxc);
    JBHim1 (o5Hy8ujOI, qnaGCW);
    {
        XQGwf9C = 0;
        while ((iHU9qFxc + khPDKyOu27p - (98 - 97)) > XQGwf9C) {
            printf ("%d ", o5Hy8ujOI[XQGwf9C]);
            XQGwf9C = XQGwf9C +(888 - 887);
        }
    }
    printf ("%d", o5Hy8ujOI[iHU9qFxc + khPDKyOu27p - 1]);
}

