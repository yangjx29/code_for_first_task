int main () {
    int pl5gp0SX49a;
    int b2;
    int wwa3LUiCJ;
    int h7BUYQ;
    int z3t67IKdj9p;
    int bnEDIe1riQP;
    int hu3gBk;
    int Vdpxz2wC [1000] [1000];
    int n;
    int eehzku2nP;
    pl5gp0SX49a = 0;
    scanf ("%d", &n);
    {
        hu3gBk = 0;
        for (; n > hu3gBk;) {
            {
                bnEDIe1riQP = 0;
                for (; n > bnEDIe1riQP;) {
                    scanf ("%d", &Vdpxz2wC[hu3gBk][bnEDIe1riQP]);
                    bnEDIe1riQP++;
                }
            }
            hu3gBk++;
        }
    }
    {
        hu3gBk = 0;
        for (; hu3gBk < n;) {
            {
                bnEDIe1riQP = 0;
                for (; bnEDIe1riQP < n;) {
                    if (Vdpxz2wC[hu3gBk][bnEDIe1riQP] == 0) {
                        pl5gp0SX49a = 1;
                        h7BUYQ = bnEDIe1riQP;
                        z3t67IKdj9p = hu3gBk;
                        break;
                    }
                    bnEDIe1riQP++;
                }
            }
            if (pl5gp0SX49a == 1) {
                break;
            }
            hu3gBk++;
        }
    }
    {
        hu3gBk = 0;
        for (; hu3gBk < n;) {
            {
                bnEDIe1riQP = 0;
                for (; bnEDIe1riQP < n;) {
                    if (Vdpxz2wC[hu3gBk][bnEDIe1riQP] == 0) {
                        wwa3LUiCJ = hu3gBk;
                        b2 = bnEDIe1riQP;
                    }
                    bnEDIe1riQP++;
                }
            }
            hu3gBk++;
        }
    }
    eehzku2nP = (wwa3LUiCJ - z3t67IKdj9p - 1) * (b2 - h7BUYQ - 1);
    printf ("%d", eehzku2nP);
    return 0;
}

