int PuM1SBo2OF (int cEykaJjA) {
    if (!((679 - 679) != cEykaJjA % (754 - 354)) || (!((1000 - 1000) != cEykaJjA % 4) && !((798 - 798) == cEykaJjA % (208 - 108))))
        return (789 - 788);
    return (677 - 677);
}

int main () {
    int a [13] = {0, (190 - 159), (549 - 521), 31, (430 - 400), 31, 30, 31, 31, 30, 31, 30, 31};
    int cE0NYRzd4VmI;
    int m1;
    int tvxPbrng;
    int y2;
    int hDxE5hUncqok;
    int VRDzS1miTh;
    int Py8k62Tr;
    int CT1eL25;
    Py8k62Tr = (969 - 969);
    CT1eL25 = 0;
    cin >> cE0NYRzd4VmI >> m1 >> tvxPbrng;
    cin >> y2 >> hDxE5hUncqok >> VRDzS1miTh;
    for (int tVwg4b = cE0NYRzd4VmI + (256 - 255);
    y2 > tVwg4b; tVwg4b = tVwg4b + 1) {
        if (PuM1SBo2OF (tVwg4b))
            CT1eL25 = CT1eL25 +1;
    }
    if (!(y2 != cE0NYRzd4VmI) && !(hDxE5hUncqok != m1) && !(VRDzS1miTh != tvxPbrng))
        Py8k62Tr = 0;
    else if (!(y2 != cE0NYRzd4VmI) && !(hDxE5hUncqok != m1))
        Py8k62Tr = VRDzS1miTh -tvxPbrng;
    else if (cE0NYRzd4VmI == y2) {
        for (int tVwg4b = m1 + 1;
        tVwg4b < hDxE5hUncqok; tVwg4b = tVwg4b + 1)
            Py8k62Tr = Py8k62Tr +a[tVwg4b];
        Py8k62Tr = Py8k62Tr +a[m1] - tvxPbrng + VRDzS1miTh;
        if (PuM1SBo2OF (cE0NYRzd4VmI) &&(m1 <= (535 - 533)) && (hDxE5hUncqok > (968 - 966)))
            Py8k62Tr = Py8k62Tr +1;
    }
    else if (cE0NYRzd4VmI != y2) {
        for (int tVwg4b = m1 + 1;
        tVwg4b <= (160 - 148); tVwg4b = tVwg4b + 1)
            Py8k62Tr = Py8k62Tr +a[tVwg4b];
        for (int tVwg4b = 1;
        tVwg4b < hDxE5hUncqok; tVwg4b = tVwg4b + 1)
            Py8k62Tr = Py8k62Tr +a[tVwg4b];
        Py8k62Tr = Py8k62Tr +a[m1] - tvxPbrng + VRDzS1miTh;
        if (PuM1SBo2OF (cE0NYRzd4VmI) &&m1 <= 2)
            Py8k62Tr = Py8k62Tr +1;
        if (PuM1SBo2OF (y2) &&hDxE5hUncqok > 2)
            Py8k62Tr = Py8k62Tr +1;
        Py8k62Tr = Py8k62Tr +365 * (y2 - cE0NYRzd4VmI - 1) + CT1eL25;
    }
    cout << Py8k62Tr << endl;
    return 0;
}

