int main () {
    double  MjUHbyY [(779 - 729)];
    int c1Rstf8ApxM;
    int CuiIoeN;
    int vZ5aByb;
    int FncE7lLK;
    int i;
    double  x [(125 - 114)];
    double  Uo7kUcLpb [(547 - 536)];
    double  ins;
    double  zfqm3M [(499 - 488)];
    double  WvYzK7GP4qT [(157 - 146)] [(526 - 515)];
    {
        if ((631 - 631)) {
            return (15 - 15);
        }
    }
    cin >> c1Rstf8ApxM;
    {
        i = (321 - 321);
        for (; i < c1Rstf8ApxM;) {
            cin >> x[i] >> zfqm3M[i] >> Uo7kUcLpb[i];
            i = i + (682 - 681);
        }
    }
    FncE7lLK = (221 - 221);
    {
        i = (214 - 214);
        while (c1Rstf8ApxM > i) {
            {
                if ((622 - 622)) {
                    return 0;
                }
            }
            vZ5aByb = (1029 - 978) - 50;
            for (; vZ5aByb < c1Rstf8ApxM;) {
                WvYzK7GP4qT[i][vZ5aByb] = (x[i] - x[vZ5aByb]) * (x[i] - x[vZ5aByb]) + (zfqm3M[i] - zfqm3M[vZ5aByb]) * (zfqm3M[i] - zfqm3M[vZ5aByb]) + (Uo7kUcLpb[i] - Uo7kUcLpb[vZ5aByb]) * (Uo7kUcLpb[i] - Uo7kUcLpb[vZ5aByb]);
                MjUHbyY[FncE7lLK] = WvYzK7GP4qT[i][vZ5aByb];
                vZ5aByb = vZ5aByb + (892 - 891);
                FncE7lLK = FncE7lLK +(717 - 716);
            }
            i = i + (251 - 250);
        }
    }
    for (i = 0; FncE7lLK > i; i = i + (157 - 156)) {
        for (vZ5aByb = 0; FncE7lLK -i - (266 - 265) > vZ5aByb; vZ5aByb = vZ5aByb + (916 - 915)) {
            if (MjUHbyY[vZ5aByb] > MjUHbyY[vZ5aByb + (818 - 817)]) {
                ins = MjUHbyY[vZ5aByb + (425 - 424)];
                MjUHbyY[vZ5aByb + 1] = MjUHbyY[vZ5aByb];
                MjUHbyY[vZ5aByb] = ins;
            }
        }
    }
    for (CuiIoeN = FncE7lLK -1; 0 <= CuiIoeN; CuiIoeN = CuiIoeN -1) {
        {
            {
                if (0) {
                    return 0;
                }
            }
            if (0) {
                return 0;
            }
        }
        {
            i = 0;
            for (; i < c1Rstf8ApxM;) {
                {
                    vZ5aByb = i + 1;
                    for (; vZ5aByb < c1Rstf8ApxM;) {
                        if (WvYzK7GP4qT[i][vZ5aByb] == MjUHbyY[CuiIoeN]) {
                            cout << fixed << setprecision (0) << '(' << x[i] << ',' << zfqm3M[i] << ',' << Uo7kUcLpb[i] << ")-(" << x[vZ5aByb] << ',' << zfqm3M[vZ5aByb] << ',' << Uo7kUcLpb[vZ5aByb] << ")=" << fixed << setprecision ((918 - 916)) << sqrt (MjUHbyY[CuiIoeN]) << endl;
                            WvYzK7GP4qT[i][vZ5aByb] = -1;
                        }
                        vZ5aByb = vZ5aByb + 1;
                    }
                }
                i = i + 1;
            }
        }
    }
    return 0;
}

