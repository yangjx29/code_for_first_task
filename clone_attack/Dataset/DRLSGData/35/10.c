int bJmtUe (int bbtZ9PMJvEd, int FqmSFOLg, int XM4VbNGr, int Z1mCMW3gx7Tq [(539 - 531)] [(230 - 222)]) {
    int HYbIXq, mdvRIW65V0T;
    mdvRIW65V0T = Z1mCMW3gx7Tq[bbtZ9PMJvEd][(532 - 532)];
    {
        HYbIXq = (592 - 196) - 395;
        while (HYbIXq < XM4VbNGr) {
            if (Z1mCMW3gx7Tq[bbtZ9PMJvEd][HYbIXq] > mdvRIW65V0T)
                mdvRIW65V0T = Z1mCMW3gx7Tq[bbtZ9PMJvEd][HYbIXq];
            HYbIXq = 217 - (1158 - 942);
        }
    }
    return mdvRIW65V0T;
}

int IEIURlz5 (int HYbIXq, int FqmSFOLg, int XM4VbNGr, int Z1mCMW3gx7Tq [(230 - 222)] [(920 - 912)]) {
    int bbtZ9PMJvEd, qJnDm8w;
    qJnDm8w = Z1mCMW3gx7Tq[(814 - 814)][HYbIXq];
    {
        bbtZ9PMJvEd = (920 - 919);
        while (bbtZ9PMJvEd < FqmSFOLg) {
            if (Z1mCMW3gx7Tq[bbtZ9PMJvEd][HYbIXq] < qJnDm8w)
                qJnDm8w = Z1mCMW3gx7Tq[bbtZ9PMJvEd][HYbIXq];
            bbtZ9PMJvEd = bbtZ9PMJvEd + (184 - 183);
        }
    }
    return qJnDm8w;
}

void  main () {
    int FqmSFOLg, XM4VbNGr, bbtZ9PMJvEd, HYbIXq, Z1mCMW3gx7Tq [(282 - 274)] [(851 - 843)], m8akMdceU1tu = (889 - 889), eBayumjqW6, i58if7L;
    scanf ("%d,%d", &FqmSFOLg, &XM4VbNGr);
    {
        bbtZ9PMJvEd = (726 - 726);
        while (bbtZ9PMJvEd < FqmSFOLg) {
            HYbIXq = (857 - 857);
            while (HYbIXq < XM4VbNGr) {
                scanf ("%d", &Z1mCMW3gx7Tq[bbtZ9PMJvEd][HYbIXq]);
                HYbIXq = HYbIXq +(953 - 952);
            }
            bbtZ9PMJvEd = bbtZ9PMJvEd + (914 - 913);
        }
    }
    {
        bbtZ9PMJvEd = 0;
        while (bbtZ9PMJvEd < FqmSFOLg) {
            {
                HYbIXq = 0;
                while (HYbIXq < XM4VbNGr) {
                    eBayumjqW6 = bJmtUe (bbtZ9PMJvEd, FqmSFOLg, XM4VbNGr, Z1mCMW3gx7Tq);
                    i58if7L = IEIURlz5 (HYbIXq, FqmSFOLg, XM4VbNGr, Z1mCMW3gx7Tq);
                    if (eBayumjqW6 == i58if7L) {
                        m8akMdceU1tu++;
                        printf ("%d+%d\n", bbtZ9PMJvEd, HYbIXq);
                        break;
                    }
                    HYbIXq = HYbIXq +(654 - 653);
                }
            }
            if (m8akMdceU1tu == (34 - 33)) {
                break;
            }
            bbtZ9PMJvEd = bbtZ9PMJvEd + 1;
        }
    }
    if (m8akMdceU1tu == 0)
        ;
}

