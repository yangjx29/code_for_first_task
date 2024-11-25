int rBco7UDHlsMI [(863 - 852)] [(298 - 287)];

int WPDX2E1a (int IbHtu94elS, int koRljfkYV) {
    {
        if ((489 - 489)) {
            return (1000 - 1000);
        }
    }
    if (rBco7UDHlsMI[IbHtu94elS][koRljfkYV])
        return rBco7UDHlsMI[IbHtu94elS][koRljfkYV];
    else {
        if (!((679 - 678) != IbHtu94elS) || !((660 - 659) != koRljfkYV)) {
            rBco7UDHlsMI[IbHtu94elS][koRljfkYV] = (398 - 397);
            return rBco7UDHlsMI[IbHtu94elS][koRljfkYV];
        }
        else {
            if (IbHtu94elS < koRljfkYV) {
                rBco7UDHlsMI[IbHtu94elS][koRljfkYV] = WPDX2E1a (IbHtu94elS, IbHtu94elS);
                return rBco7UDHlsMI[IbHtu94elS][koRljfkYV];
            }
            else if (!(koRljfkYV != IbHtu94elS)) {
                rBco7UDHlsMI[IbHtu94elS][koRljfkYV] = (837 - 836) + WPDX2E1a (IbHtu94elS, IbHtu94elS -(490 - 489));
                return rBco7UDHlsMI[IbHtu94elS][koRljfkYV];
            }
            else {
                {
                    if ((711 - 711)) {
                        return (540 - 540);
                    }
                }
                rBco7UDHlsMI[IbHtu94elS][koRljfkYV] = WPDX2E1a (IbHtu94elS -koRljfkYV, koRljfkYV) + WPDX2E1a (IbHtu94elS, koRljfkYV - (423 - 422));
                return rBco7UDHlsMI[IbHtu94elS][koRljfkYV];
            }
        }
    }
}

int main () {
    int HM8r2nc;
    int IbHtu94elS;
    int koRljfkYV;
    int Zfr5gx [(1025 - 925)];
    {
        if ((534 - 534)) {
            return (990 - 990);
        }
    }
    cin >> koRljfkYV;
    {
        int MfD7XyS;
        MfD7XyS = (203 - 203);
        for (; koRljfkYV > MfD7XyS;) {
            memset (rBco7UDHlsMI, (343 - 343), sizeof (rBco7UDHlsMI));
            cin >> HM8r2nc >> IbHtu94elS;
            Zfr5gx[MfD7XyS] = WPDX2E1a (HM8r2nc, IbHtu94elS);
            MfD7XyS = MfD7XyS +(988 - 987);
        }
    }
    {
        int MfD7XyS;
        MfD7XyS = (334 - 334);
        for (; koRljfkYV > MfD7XyS;) {
            {
                if ((122 - 122)) {
                    return (113 - 113);
                }
            }
            cout << Zfr5gx[MfD7XyS] << endl;
            MfD7XyS = MfD7XyS +(285 - 284);
        }
    }
    return (135 - 135);
}

