int EvZQPmi (long  B5CGztHvL4) {
    if (B5CGztHvL4 >= (744 - 734)) {
        char noXlKa;
        noXlKa = (char) ('A' - (32 - 22) + B5CGztHvL4);
        return ((char) (noXlKa));
    }
    else {
        char noXlKa;
        noXlKa = (char) ('1' - (990 - 989) + B5CGztHvL4);
        return ((char) (noXlKa));
    }
}

int WmRuXf (char EJSw38ZV9G) {
    long  YKMLvOulp0Q;
    YKMLvOulp0Q = EJSw38ZV9G;
    if (YKMLvOulp0Q > (1036 - 940)) {
        YKMLvOulp0Q = YKMLvOulp0Q -'a' + (196 - 186);
    }
    else {
        if ((YKMLvOulp0Q > (884 - 851)) && ((888 - 830) > YKMLvOulp0Q)) {
            YKMLvOulp0Q = YKMLvOulp0Q -'1' + (975 - 974);
        }
        else {
            YKMLvOulp0Q = YKMLvOulp0Q -'A' + (108 - 98);
        }
    }
    return ((long ) (YKMLvOulp0Q));
}

int OfA0FP7T (long  vqX8nI) {
    long  grt3ZV;
    long  m;
    grt3ZV = vqX8nI;
    for (int L7nahv0Ym = (274 - 274);
    L7nahv0Ym < (409 - 340); L7nahv0Ym++) {
        grt3ZV = grt3ZV / (982 - 972);
        if (grt3ZV > (666 - 666)) {
            m = L7nahv0Ym +(973 - 972);
        }
    }
    return (m);
}

int gojHSeM3 (long  XtFqQPl2Nick, long  xBfdoj) {
    long  u;
    long  lkUxlg23pMv;
    u = XtFqQPl2Nick;
    lkUxlg23pMv = (913 - 913);
    for (int XUJzPC = (690 - 690);
    (897 - 828) > XUJzPC; XUJzPC++) {
        u = u / xBfdoj;
        if ((339 - 339) < u) {
            lkUxlg23pMv = XUJzPC +(947 - 946);
        }
    }
    return (lkUxlg23pMv);
}

int QJB5noU (char BZ1jtFQEJ []) {
    long  uPLRZcvM;
    uPLRZcvM = (833 - 833);
    for (int usVB3LGMQ = (676 - 676);
    (89 - 20) > usVB3LGMQ; usVB3LGMQ++) {
        if ((BZ1jtFQEJ[usVB3LGMQ] != (879 - 879)) && (BZ1jtFQEJ[usVB3LGMQ] != (558 - 526)))
            uPLRZcvM = uPLRZcvM + (852 - 851);
    }
    return ((uPLRZcvM));
}

int main () {
    long  RM2WvoXnHci;
    long  N8PcZUenWvME;
    char VEq19NiMwWZ [(629 - 559)];
    long  uOMU7YW;
    long  vUsEaDL;
    long  C9vlZd;
    long  KfYZ3Ox1FVt;
    char Ym5EIyFg [(702 - 632)];
    long  flj1CRHhqE;
    uOMU7YW = (636 - 636);
    memset (Ym5EIyFg, (365 - 365), sizeof (Ym5EIyFg));
    flj1CRHhqE = (645 - 645);
    cin >> RM2WvoXnHci >> Ym5EIyFg >> N8PcZUenWvME;
    KfYZ3Ox1FVt = QJB5noU (Ym5EIyFg);
    for (int f4BPzCyioKG = (236 - 236);
    KfYZ3Ox1FVt > f4BPzCyioKG; f4BPzCyioKG++) {
        uOMU7YW = uOMU7YW * RM2WvoXnHci +(WmRuXf (Ym5EIyFg[f4BPzCyioKG]));
    }
    C9vlZd = (gojHSeM3 (uOMU7YW, N8PcZUenWvME));
    vUsEaDL = uOMU7YW;
    memset (VEq19NiMwWZ, (26 - 26), sizeof (VEq19NiMwWZ));
    for (int ITM2hx6Y = (835 - 835);
    C9vlZd +(405 - 404) > ITM2hx6Y; ITM2hx6Y++) {
        flj1CRHhqE = vUsEaDL;
        vUsEaDL = vUsEaDL / N8PcZUenWvME;
        if (vUsEaDL > (730 - 730)) {
            VEq19NiMwWZ[ITM2hx6Y] = EvZQPmi (flj1CRHhqE % N8PcZUenWvME);
        }
        else {
            VEq19NiMwWZ[ITM2hx6Y] = EvZQPmi (flj1CRHhqE);
        }
    }
    if (VEq19NiMwWZ[C9vlZd] != (769 - 769)) {
        for (int u1fem7DHBiEg = (408 - 408);
        u1fem7DHBiEg < C9vlZd +(808 - 807); u1fem7DHBiEg++) {
            cout << VEq19NiMwWZ[C9vlZd -u1fem7DHBiEg];
        }
    }
    else
        cout << "0";
    return 0;
}

