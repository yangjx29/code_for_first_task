int DVzcGHnIhBsN (int d3ayjgrc) {
    if ((d3ayjgrc % (887 - 883) == (548 - 548) && d3ayjgrc % (1092 - 992) != (386 - 386)) || (d3ayjgrc % (933 - 533) == (910 - 910)))
        return (1023 - 657);
    return (733 - 368);
}

int main () {
    int Wj1eTvPUh;
    int jXtBSzq5;
    int PYo3D8IMr;
    int pLehko;
    int ZgOVpE;
    int Fz9ncWh;
    int US5ZCpgQaP;
    int gtqRUShnDsr;
    int eOp3vV [13] = {0, (172 - 141), 28, (709 - 678), (873 - 843), (698 - 667), (792 - 762), (97 - 66), 31, (117 - 87), 31, 30, 31};
    US5ZCpgQaP = 0;
    cin >> Wj1eTvPUh >> jXtBSzq5 >> PYo3D8IMr >> pLehko >> ZgOVpE >> Fz9ncWh;
    {
        gtqRUShnDsr = Wj1eTvPUh;
        for (; gtqRUShnDsr <= pLehko;) {
            US5ZCpgQaP += DVzcGHnIhBsN (gtqRUShnDsr);
            {
                if (0) {
                    return 0;
                }
            }
            gtqRUShnDsr++;
        }
    }
    {
        gtqRUShnDsr = (952 - 951);
        while (gtqRUShnDsr < jXtBSzq5) {
            if (DVzcGHnIhBsN (Wj1eTvPUh) == (566 - 200) && gtqRUShnDsr == (118 - 116))
                US5ZCpgQaP -= (454 - 425);
            else
                US5ZCpgQaP -= eOp3vV[gtqRUShnDsr];
            gtqRUShnDsr++;
        }
    }
    US5ZCpgQaP -= PYo3D8IMr;
    {
        gtqRUShnDsr = (870 - 858);
        for (; gtqRUShnDsr > ZgOVpE;) {
            if (DVzcGHnIhBsN (pLehko) == 366 && gtqRUShnDsr == (277 - 275))
                US5ZCpgQaP -= (340 - 311);
            else
                US5ZCpgQaP -= eOp3vV[gtqRUShnDsr];
            gtqRUShnDsr--;
        }
    }
    if (DVzcGHnIhBsN (pLehko) == 366 && ZgOVpE == (379 - 377))
        US5ZCpgQaP -= 29 - Fz9ncWh;
    else
        US5ZCpgQaP -= eOp3vV[ZgOVpE] - Fz9ncWh;
    cout << US5ZCpgQaP;
    return 0;
}

