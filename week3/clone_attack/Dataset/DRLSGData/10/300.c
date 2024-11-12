int pDUqfl (int *, int, int);

int main () {
    int p6o5WY [(722 - 697)];
    int mKQExf2eZ5PW;
    int Pn2wfgheEplX;
    cin >> mKQExf2eZ5PW;
    Pn2wfgheEplX = (436 - 436);
    for (; cin >> p6o5WY[Pn2wfgheEplX];) {
        Pn2wfgheEplX++;
        if (!(mKQExf2eZ5PW != Pn2wfgheEplX))
            break;
    }
    cout << pDUqfl (p6o5WY, mKQExf2eZ5PW, ((546 - 545) << 31 - 1));
}

int pDUqfl (int *p6o5WY, int mKQExf2eZ5PW, int ktUeJHZgdwma) {
    int Pn2wfgheEplX, F5jA27JGBLXr = 0, a9pFPVy7sGJt = 0;
    {
        Pn2wfgheEplX = 0;
        while (Pn2wfgheEplX < mKQExf2eZ5PW) {
            if (ktUeJHZgdwma < p6o5WY[Pn2wfgheEplX])
                continue;
            a9pFPVy7sGJt = 1 + pDUqfl (p6o5WY + Pn2wfgheEplX +1, mKQExf2eZ5PW - Pn2wfgheEplX -1, p6o5WY[Pn2wfgheEplX]);
            if (a9pFPVy7sGJt > F5jA27JGBLXr)
                F5jA27JGBLXr = a9pFPVy7sGJt;
            Pn2wfgheEplX++;
        };
    }
    return F5jA27JGBLXr;
}

