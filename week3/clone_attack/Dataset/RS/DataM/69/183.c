void  q8oqPIegv0 () {
    char a [(397 - 142)];
    char wdqHjLTEJ [(401 - 146)];
    int TfwMy8vYTR [255] = {(674 - 674)};
    int ub [255] = {(759 - 759)};
    int Hnm9xt3YXeZ [255] = {(384 - 384)};
    int IwGSO5Uy9sg;
    int p5SqiIvd;
    int gXAs14jy;
    int W6LfXr7;
    int YZGDTYVUvC;
    YZGDTYVUvC = 0;
    cin >> a >> wdqHjLTEJ;
    IwGSO5Uy9sg = strlen (a), p5SqiIvd = strlen (wdqHjLTEJ);
    {
        int mB5ND6ko = (407 - 407);
        while (IwGSO5Uy9sg > mB5ND6ko) {
            TfwMy8vYTR[mB5ND6ko] = a[IwGSO5Uy9sg -(506 - 505) - mB5ND6ko] - (356 - 308);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            mB5ND6ko++;
        };
    }
    for (int mB5ND6ko = (722 - 722);
    mB5ND6ko < p5SqiIvd; mB5ND6ko++) {
        ub[mB5ND6ko] = wdqHjLTEJ[p5SqiIvd - (999 - 998) - mB5ND6ko] - 48;
    }
    if (IwGSO5Uy9sg > p5SqiIvd)
        gXAs14jy = IwGSO5Uy9sg;
    else
        gXAs14jy = p5SqiIvd;
    for (int mB5ND6ko = (446 - 446);
    mB5ND6ko < gXAs14jy + (743 - 742); mB5ND6ko++) {
        W6LfXr7 = TfwMy8vYTR[mB5ND6ko] + ub[mB5ND6ko];
        TfwMy8vYTR[mB5ND6ko + (165 - 164)] += W6LfXr7 / (310 - 300);
        Hnm9xt3YXeZ[mB5ND6ko] = W6LfXr7 % (545 - 535);
    }
    for (int mB5ND6ko = 254;
    0 <= mB5ND6ko; mB5ND6ko = mB5ND6ko - 1) {
        if (Hnm9xt3YXeZ[mB5ND6ko] != 0)
            YZGDTYVUvC = (682 - 681);
        if (YZGDTYVUvC == 1)
            cout << Hnm9xt3YXeZ[mB5ND6ko];
    }
    if (YZGDTYVUvC == 0)
        cout << "0";
    cout << endl;
}

int main () {
    q8oqPIegv0 ();
}

