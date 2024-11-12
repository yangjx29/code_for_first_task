int main () {
    int IYPejXbBp7C6;
    int qEJMj1m;
    int jAvcRfSV4W;
    int KeIPbqEyvsiU;
    int IFCvb4HcX;
    struct   {
        int Xebo6rd29k;
        int rqVhaNt4k;
        int KiVQc0;
        int T9D2jUPRx3g;
    }
    qXoKCDlxrb [100000];
    scanf ("%d", &IYPejXbBp7C6);
    {
        qEJMj1m = (60 - 60);
        while (qEJMj1m < IYPejXbBp7C6) {
            scanf ("%d %d %d", &qXoKCDlxrb[qEJMj1m].Xebo6rd29k, &qXoKCDlxrb[qEJMj1m].rqVhaNt4k, &qXoKCDlxrb[qEJMj1m].KiVQc0);
            qXoKCDlxrb[qEJMj1m].T9D2jUPRx3g = qXoKCDlxrb[qEJMj1m].rqVhaNt4k + qXoKCDlxrb[qEJMj1m].KiVQc0;
            qEJMj1m = qEJMj1m + 1;
        }
    }
    jAvcRfSV4W = IYPejXbBp7C6;
    KeIPbqEyvsiU = IYPejXbBp7C6;
    IFCvb4HcX = IYPejXbBp7C6;
    qXoKCDlxrb[IYPejXbBp7C6].T9D2jUPRx3g = -100;
    {
        qEJMj1m = 0;
        while (qEJMj1m < IYPejXbBp7C6) {
            if (qXoKCDlxrb[jAvcRfSV4W].T9D2jUPRx3g >= qXoKCDlxrb[qEJMj1m].T9D2jUPRx3g)
                jAvcRfSV4W = jAvcRfSV4W;
            else
                jAvcRfSV4W = qEJMj1m;
            qEJMj1m = qEJMj1m + 1;
        }
    }
    {
        qEJMj1m = 0;
        while (qEJMj1m < IYPejXbBp7C6) {
            if (qEJMj1m != jAvcRfSV4W) {
                if (qXoKCDlxrb[KeIPbqEyvsiU].T9D2jUPRx3g >= qXoKCDlxrb[qEJMj1m].T9D2jUPRx3g)
                    KeIPbqEyvsiU = KeIPbqEyvsiU;
                else
                    KeIPbqEyvsiU = qEJMj1m;
            }
            else
                ;
            qEJMj1m = qEJMj1m + 1;
        }
    }
    {
        qEJMj1m = 0;
        while (qEJMj1m < IYPejXbBp7C6) {
            if (qEJMj1m != KeIPbqEyvsiU &qEJMj1m != jAvcRfSV4W) {
                if (qXoKCDlxrb[IFCvb4HcX].T9D2jUPRx3g >= qXoKCDlxrb[qEJMj1m].T9D2jUPRx3g)
                    IFCvb4HcX = IFCvb4HcX;
                else
                    IFCvb4HcX = qEJMj1m;
            }
            else
                ;
            qEJMj1m = qEJMj1m + 1;
        }
    }
    printf ("%d %d\n", qXoKCDlxrb[jAvcRfSV4W].Xebo6rd29k, qXoKCDlxrb[jAvcRfSV4W].T9D2jUPRx3g);
    printf ("%d %d\n", qXoKCDlxrb[KeIPbqEyvsiU].Xebo6rd29k, qXoKCDlxrb[KeIPbqEyvsiU].T9D2jUPRx3g);
    printf ("%d %d\n", qXoKCDlxrb[IFCvb4HcX].Xebo6rd29k, qXoKCDlxrb[IFCvb4HcX].T9D2jUPRx3g);
    return 0;
}

