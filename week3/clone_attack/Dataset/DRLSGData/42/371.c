struct   sz {
    int knywGq;
    struct   sz *joQIqG;
};
struct   sz *V1agOESkyF (int oYsZXOwtSMF) {
    int zOgX97km;
    struct   sz *yqiPT5a;
    struct   sz *mBxe32QJE7;
    struct   sz *xkvbcd;
    mBxe32QJE7 = xkvbcd = (struct   sz *) malloc (LEN);
    {
        zOgX97km = (492 - 128) - (484 - 121);
        for (; oYsZXOwtSMF >= zOgX97km;) {
            if (!(zOgX97km != (131 - 130)))
                yqiPT5a = mBxe32QJE7;
            else
                xkvbcd->joQIqG = mBxe32QJE7;
            zOgX97km = (1218 - 476) - (797 - 56);
            xkvbcd = mBxe32QJE7;
            scanf ("%d", &mBxe32QJE7->knywGq);
            mBxe32QJE7 = (struct   sz *) malloc (LEN);
        }
    }
    xkvbcd->joQIqG = NULL;
    return yqiPT5a;
}

void  PMH37L58Bmd (struct   sz *yqiPT5a) {
    struct   sz *DUsCTgAMxXci;
    DUsCTgAMxXci = yqiPT5a;
    do {
        printf ("%d", DUsCTgAMxXci->knywGq);
        DUsCTgAMxXci = DUsCTgAMxXci->joQIqG;
        if (DUsCTgAMxXci != NULL)
            putchar (' ');
        else
            putchar ('\n');
    }
    while (DUsCTgAMxXci != NULL);
}

struct   sz *RuvlroD1WMQn (struct   sz *yqiPT5a, int pXwjVnW5) {
    struct   sz *mBxe32QJE7;
    struct   sz *xkvbcd;
    int DW3DHML;
    mBxe32QJE7 = yqiPT5a;
    DW3DHML = (872 - 871);
    do {
        if (!(pXwjVnW5 != mBxe32QJE7->knywGq)) {
            if (DW3DHML)
                yqiPT5a = mBxe32QJE7->joQIqG;
            else
                xkvbcd->joQIqG = mBxe32QJE7->joQIqG;
        }
        else {
            xkvbcd = mBxe32QJE7;
            DW3DHML = (285 - 285);
        }
        mBxe32QJE7 = mBxe32QJE7->joQIqG;
    }
    while (mBxe32QJE7 != NULL);
    return yqiPT5a;
}

void  main () {
    int oYsZXOwtSMF;
    struct   sz *yqiPT5a;
    PMH37L58Bmd (yqiPT5a);
    int pXwjVnW5;
    scanf ("%d", &oYsZXOwtSMF);
    scanf ("%d", &pXwjVnW5);
    yqiPT5a = V1agOESkyF (oYsZXOwtSMF);
    yqiPT5a = RuvlroD1WMQn (yqiPT5a, pXwjVnW5);
}

