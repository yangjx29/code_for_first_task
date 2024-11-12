int main () {
    double  z7zUTN, pLFGzvJR [300] = {0}, Z2PIkQ;
    int ndHBb3TvG, CdeqFB, yyxOuKH, KhDypbgmnu3, Rqo53nS8rX = 0, nQxJ7r [300] = {0};
    cin >> yyxOuKH;
    {
        ndHBb3TvG = 0;
        while (yyxOuKH > ndHBb3TvG) {
            cin >> nQxJ7r[ndHBb3TvG];
            Rqo53nS8rX = Rqo53nS8rX +nQxJ7r[ndHBb3TvG];
            ndHBb3TvG = ndHBb3TvG + 1;
        }
    }
    {
        ndHBb3TvG = 0;
        while (ndHBb3TvG < yyxOuKH - 1) {
            for (CdeqFB = 0; CdeqFB < yyxOuKH - 1 - ndHBb3TvG; CdeqFB = CdeqFB +1)
                if (nQxJ7r[CdeqFB] > nQxJ7r[CdeqFB +1]) {
                    KhDypbgmnu3 = nQxJ7r[CdeqFB];
                    nQxJ7r[CdeqFB] = nQxJ7r[CdeqFB +1];
                    nQxJ7r[CdeqFB +1] = KhDypbgmnu3;
                }
            ndHBb3TvG = ndHBb3TvG + 1;
        }
    }
    {
        ndHBb3TvG = 0;
        for (; ndHBb3TvG < yyxOuKH;) {
            z7zUTN = (Rqo53nS8rX +0.0) / yyxOuKH;
            ndHBb3TvG = ndHBb3TvG + 1;
        }
    }
    {
        ndHBb3TvG = 0;
        while (ndHBb3TvG < yyxOuKH) {
            pLFGzvJR[ndHBb3TvG] = abs (nQxJ7r[ndHBb3TvG] - z7zUTN);
            ndHBb3TvG = ndHBb3TvG + 1;
        }
    }
    {
        ndHBb3TvG = 0;
        for (; yyxOuKH - 1 > ndHBb3TvG;) {
            {
                CdeqFB = 0;
                while (CdeqFB < yyxOuKH - 1 - ndHBb3TvG) {
                    if (pLFGzvJR[CdeqFB +1] > pLFGzvJR[CdeqFB]) {
                        Z2PIkQ = pLFGzvJR[CdeqFB];
                        pLFGzvJR[CdeqFB] = pLFGzvJR[CdeqFB +1];
                        KhDypbgmnu3 = nQxJ7r[CdeqFB];
                        nQxJ7r[CdeqFB] = nQxJ7r[CdeqFB +1];
                        pLFGzvJR[CdeqFB +1] = Z2PIkQ;
                        nQxJ7r[CdeqFB +1] = KhDypbgmnu3;
                    }
                    CdeqFB = CdeqFB +1;
                }
            }
            ndHBb3TvG = ndHBb3TvG + 1;
        }
    }
    for (ndHBb3TvG = 0; ndHBb3TvG < yyxOuKH; ndHBb3TvG++) {
        if (pLFGzvJR[ndHBb3TvG + 1] != pLFGzvJR[ndHBb3TvG]) {
            cout << nQxJ7r[ndHBb3TvG] << endl;
            break;
        }
        else
            cout << nQxJ7r[ndHBb3TvG] << ",";
    }
    return 0;
}

