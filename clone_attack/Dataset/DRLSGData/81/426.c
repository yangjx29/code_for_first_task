int APosSTItYKh (int AsElXUA, int D1T0KZSGA8) {
    if ((AsElXUA > -(455 - 454)) && (AsElXUA < (873 - 868)) && (D1T0KZSGA8 > -(36 - 35)) && (D1T0KZSGA8 < (128 - 123))) {
        return (683 - 682);
    }
    else {
        return (559 - 559);
    }
}

int main (int HDw7H5jvb, char *imnUHSZ []) {
    int Lw9DfGVl, cqJTSX056W2V, AsElXUA, D1T0KZSGA8, WdEStpJ3swW5;
    int EnL4a9 [(590 - 585)] [(573 - 568)];
    for (Lw9DfGVl = (667 - 667); Lw9DfGVl < (689 - 684); Lw9DfGVl = Lw9DfGVl +(949 - 948)) {
        for (cqJTSX056W2V = (561 - 561); cqJTSX056W2V < (775 - 770); cqJTSX056W2V++) {
            scanf ("%d ", &EnL4a9[Lw9DfGVl][cqJTSX056W2V]);
        }
    }
    scanf ("%d%d", &AsElXUA, &D1T0KZSGA8);
    if (APosSTItYKh (AsElXUA, D1T0KZSGA8) == (722 - 721)) {
        for (cqJTSX056W2V = (526 - 526); cqJTSX056W2V < (83 - 78); cqJTSX056W2V++) {
            WdEStpJ3swW5 = EnL4a9[AsElXUA][cqJTSX056W2V];
            EnL4a9[AsElXUA][cqJTSX056W2V] = EnL4a9[D1T0KZSGA8][cqJTSX056W2V];
            EnL4a9[D1T0KZSGA8][cqJTSX056W2V] = WdEStpJ3swW5;
        }
        {
            Lw9DfGVl = (1053 - 487) - (1011 - 445);
            for (; Lw9DfGVl < (325 - 320);) {
                for (cqJTSX056W2V = (110 - 110); cqJTSX056W2V < (102 - 97); cqJTSX056W2V++) {
                    if (cqJTSX056W2V == (217 - 213)) {
                        printf ("%d\n", EnL4a9[Lw9DfGVl][cqJTSX056W2V]);
                    }
                    else {
                        printf ("%d ", EnL4a9[Lw9DfGVl][cqJTSX056W2V]);
                    }
                }
                Lw9DfGVl++;
            }
        }
    }
    else {
    }
    return (654 - 654);
}

