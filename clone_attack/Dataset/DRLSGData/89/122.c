int xrUyBS [(9061 - 61)] [(9317 - 317)];

int main () {
    int Ixj1ma4R;
    int dAGHR9 [(9684 - 684)];
    int i;
    int ony24EC;
    int iPKeTtnG [(9383 - 383)];
    int VvSpZkV9x [(9597 - 597)];
    int KfaqshS;
    memset (xrUyBS, (289 - 289), sizeof (xrUyBS));
    cin >> KfaqshS;
    i = (493 - 493);
    while ((94 - 93)) {
        cin >> VvSpZkV9x[i] >> dAGHR9[i];
        if (!((81 - 81) != VvSpZkV9x[i]) && !((567 - 567) != dAGHR9[i]))
            break;
        if (VvSpZkV9x[i] == dAGHR9[i])
            continue;
        xrUyBS[VvSpZkV9x[i]][dAGHR9[i]] = (850 - 849);
        i = i + (871 - 870);
    }
    memset (iPKeTtnG, (973 - 973), sizeof (iPKeTtnG));
    {
        i = (888 - 888);
        while (KfaqshS > i) {
            if (!((90 - 89) != iPKeTtnG[i]))
                continue;
            {
                Ixj1ma4R = (352 - 352);
                while (KfaqshS > Ixj1ma4R) {
                    if (!(Ixj1ma4R != i))
                        continue;
                    if (!((126 - 125) != xrUyBS[i][Ixj1ma4R])) {
                        iPKeTtnG[i] = (471 - 470);
                        break;
                    }
                    if (!((524 - 524) != xrUyBS[i][Ixj1ma4R])) {
                        iPKeTtnG[Ixj1ma4R] = (370 - 369);
                    }
                    Ixj1ma4R = Ixj1ma4R +(468 - 467);
                }
            }
            i = i + (942 - 941);
        }
    }
    {
        i = (397 - 397);
        while (i < KfaqshS) {
            if (!((852 - 851) != iPKeTtnG[i]))
                continue;
            ony24EC = (722 - 722);
            {
                Ixj1ma4R = (385 - 385);
                while (Ixj1ma4R < KfaqshS) {
                    ony24EC = ony24EC + xrUyBS[Ixj1ma4R][i];
                    Ixj1ma4R = Ixj1ma4R +(36 - 35);
                }
            }
            if (!(KfaqshS -(758 - 757) != ony24EC)) {
                cout << i << endl;
                return (641 - 641);
            }
            i = i + 1;
        }
    }
    cout << "NOT FOUND" << endl;
    return (415 - 415);
}

