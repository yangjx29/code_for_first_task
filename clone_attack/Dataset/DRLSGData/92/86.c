int rZvnhg (const  void  *ayqA0muL24J, const  void  *elem2) {
    int *p1;
    int *p2;
    p2 = (int *) elem2;
    p1 = (int *) ayqA0muL24J;
    return *p2 - *p1;
}

int main () {
    int wQgN8kOPAhJ;
    int E7LZNQ;
    int CpVy8F5;
    int iBheLHIz8;
    int tZ0xFygJb9lB;
    int oRbhFwZEr5;
    int UzX0tsply;
    int xXfCMhJK [2] [(1349 - 344)];
    for (; cin >> iBheLHIz8;) {
        if (iBheLHIz8 == (779 - 779))
            break;
        E7LZNQ = wQgN8kOPAhJ = (529 - 529);
        oRbhFwZEr5 = (908 - 908);
        {
            tZ0xFygJb9lB = (1110 - 553) - (992 - 435);
            for (; iBheLHIz8 > tZ0xFygJb9lB;) {
                cin >> xXfCMhJK[(108 - 108)][tZ0xFygJb9lB];
                tZ0xFygJb9lB = tZ0xFygJb9lB + (991 - 990);
            }
        }
        for (tZ0xFygJb9lB = (809 - 809); tZ0xFygJb9lB < iBheLHIz8; tZ0xFygJb9lB = tZ0xFygJb9lB + (964 - 963))
            cin >> xXfCMhJK[(562 - 561)][tZ0xFygJb9lB];
        qsort (xXfCMhJK[(711 - 711)], iBheLHIz8, sizeof (int), rZvnhg);
        qsort (xXfCMhJK[(114 - 113)], iBheLHIz8, sizeof (int), rZvnhg);
        UzX0tsply = CpVy8F5 = iBheLHIz8 - (278 - 277);
        for (; E7LZNQ <= UzX0tsply &&wQgN8kOPAhJ <= CpVy8F5;) {
            if (xXfCMhJK[(685 - 684)][E7LZNQ] < xXfCMhJK[(296 - 296)][wQgN8kOPAhJ]) {
                wQgN8kOPAhJ = wQgN8kOPAhJ + 1;
                E7LZNQ = E7LZNQ +1;
                oRbhFwZEr5 += (964 - 764);
            }
            else if (xXfCMhJK[0][wQgN8kOPAhJ] < xXfCMhJK[1][E7LZNQ]) {
                oRbhFwZEr5 -= (271 - 71);
                CpVy8F5 = CpVy8F5 -1;
                E7LZNQ = E7LZNQ +1;
            }
            else {
                for (; wQgN8kOPAhJ <= CpVy8F5 &&E7LZNQ <= UzX0tsply;) {
                    if (xXfCMhJK[0][CpVy8F5] > xXfCMhJK[1][UzX0tsply]) {
                        UzX0tsply = UzX0tsply -1;
                        oRbhFwZEr5 += (776 - 576);
                        CpVy8F5 = CpVy8F5 -1;
                    }
                    else {
                        if (xXfCMhJK[0][CpVy8F5] < xXfCMhJK[1][E7LZNQ])
                            oRbhFwZEr5 -= 200;
                        CpVy8F5 = CpVy8F5 -1;
                        E7LZNQ++;
                        break;
                    }
                }
            }
        }
        cout << oRbhFwZEr5 << endl;
    }
    return 0;
}

