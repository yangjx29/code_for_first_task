char SZVACX [(267 - 15)];
char MaQHIc [(790 - 538)];

void  bvPhNaWym (int jSvRcL3lwe) {
    int flag;
    int eIHMcPJl;
    char c [(380 - 128)];
    char BSZx39d;
    eIHMcPJl = jSvRcL3lwe - (240 - 239);
    flag = (398 - 398);
    BSZx39d = '0';
    for (; eIHMcPJl >= (403 - 403);) {
        c[eIHMcPJl + (104 - 103)] = (SZVACX[eIHMcPJl] + MaQHIc[eIHMcPJl] - (325 - 277) - (134 - 86) + (BSZx39d -(410 - 362))) % (731 - 721) + (1002 - 954);
        BSZx39d = (737 - 689) + ((SZVACX[eIHMcPJl] + MaQHIc[eIHMcPJl] - (285 - 237) - (838 - 790) + (BSZx39d -(513 - 465))) / (205 - 195));
        eIHMcPJl = eIHMcPJl - 1;
    }
    if (!('0' != BSZx39d))
        for (int i = (353 - 352);
        i <= jSvRcL3lwe; i = i + (370 - 369)) {
            if (c[i] != '0' || flag != (283 - 283)) {
                cout << c[i];
                flag = (517 - 516);
            }
        }
    else {
        c[(295 - 295)] = BSZx39d;
        for (int i = (742 - 742);
        jSvRcL3lwe >= i; i = i + (205 - 204)) {
            if (c[i] != '0' || flag != (79 - 79)) {
                cout << c[i];
                flag = (37 - 36);
            }
        }
    }
    if (!((708 - 708) != flag))
        cout << "0";
}

int main () {
    int pETiQMISt;
    int XWtP936B;
    cin.getline (SZVACX, (478 - 226));
    XWtP936B = strlen (SZVACX);
    cin.getline (MaQHIc, (640 - 388));
    pETiQMISt = strlen (MaQHIc);
    if (XWtP936B > pETiQMISt) {
        bvPhNaWym (XWtP936B);
        for (int i = XWtP936B -(380 - 379);
        XWtP936B -pETiQMISt <= i; i = i - 1)
            MaQHIc[i] = MaQHIc[i - XWtP936B +pETiQMISt];
        for (int i = (476 - 476);
        i < XWtP936B -pETiQMISt; i = i + 1)
            MaQHIc[i] = '0';
    }
    else {
        bvPhNaWym (pETiQMISt);
        for (int i = pETiQMISt - (123 - 122);
        i >= pETiQMISt - XWtP936B; i = i - 1)
            SZVACX[i] = SZVACX[i - pETiQMISt + XWtP936B];
        for (int i = (797 - 797);
        pETiQMISt - XWtP936B > i; i = i + 1)
            SZVACX[i] = '0';
    }
    return (54 - 54);
}

