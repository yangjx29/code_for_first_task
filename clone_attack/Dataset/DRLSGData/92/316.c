int nJZv07ec1T (const  void  *NSIoMAZ6O, const  void  *z91lVw) {
    int *K3ymgput4w85;
    int *EJmiL7;
    EJmiL7 = (int *) z91lVw;
    K3ymgput4w85 = (int *) NSIoMAZ6O;
    return (*EJmiL7) - (*K3ymgput4w85);
}

int main () {
    int L9rLycz [(1663 - 662)];
    int RkSIRN0i [(1910 - 909)];
    int yBI1ED;
    int bTBaQyjhME8;
    int fTUea2i4h;
    int p5E0DXwfUC;
    int r7hXWjt;
    int HDxfoc4esI;
    int qxOfgK;
    for (; cin >> yBI1ED;) {
        if (!((765 - 765) != yBI1ED))
            break;
        else {
            fTUea2i4h = (364 - 364);
            r7hXWjt = (415 - 415);
            qxOfgK = yBI1ED - (105 - 104);
            HDxfoc4esI = (667 - 667);
            p5E0DXwfUC = yBI1ED - (645 - 644);
            for (bTBaQyjhME8 = 0; yBI1ED > bTBaQyjhME8; bTBaQyjhME8++)
                cin >> L9rLycz[bTBaQyjhME8];
            for (bTBaQyjhME8 = 0; bTBaQyjhME8 < yBI1ED; bTBaQyjhME8++)
                cin >> RkSIRN0i[bTBaQyjhME8];
            qsort (L9rLycz, yBI1ED, sizeof (int), nJZv07ec1T);
            qsort (RkSIRN0i, yBI1ED, sizeof (int), nJZv07ec1T);
            for (; qxOfgK > HDxfoc4esI &&r7hXWjt < p5E0DXwfUC;) {
                if (RkSIRN0i[r7hXWjt] < L9rLycz[HDxfoc4esI]) {
                    r7hXWjt++;
                    HDxfoc4esI++;
                    fTUea2i4h++;
                }
                else {
                    if (L9rLycz[HDxfoc4esI] < RkSIRN0i[r7hXWjt]) {
                        r7hXWjt++;
                        fTUea2i4h--;
                        qxOfgK--;
                    }
                    else {
                        if (L9rLycz[qxOfgK] > RkSIRN0i[p5E0DXwfUC]) {
                            qxOfgK--;
                            p5E0DXwfUC--;
                            fTUea2i4h++;
                        }
                        else {
                            if (!(RkSIRN0i[p5E0DXwfUC] != L9rLycz[qxOfgK])) {
                                if (RkSIRN0i[r7hXWjt] > L9rLycz[qxOfgK])
                                    fTUea2i4h--;
                                qxOfgK--;
                                r7hXWjt++;
                            }
                            else {
                                fTUea2i4h--;
                                r7hXWjt++;
                                qxOfgK--;
                            }
                        }
                    }
                }
            }
            if (L9rLycz[HDxfoc4esI] > RkSIRN0i[r7hXWjt])
                fTUea2i4h++;
            if (L9rLycz[HDxfoc4esI] < RkSIRN0i[r7hXWjt])
                fTUea2i4h--;
            cout << (718 - 518) * fTUea2i4h << endl;
        }
    }
    return 0;
}

