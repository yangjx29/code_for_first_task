char PkX2ISuw [110] [110];
int meLdmJCbwNY [100] [100] = {(422 - 422)};
int UecNgyITt5;

int HedRgvDuJ6fT (int lmqLhr) {
    int HLPkvuXK6s;
    int Rpldbm;
    int ofM3w2x6HeV;
    ofM3w2x6HeV = 0;
    HLPkvuXK6s = 0;
    Rpldbm = 0;
    if (!(0 != lmqLhr)) {
        {
            Rpldbm = 0;
            while (UecNgyITt5 > Rpldbm) {
                {
                    ofM3w2x6HeV = 0;
                    while (UecNgyITt5 > ofM3w2x6HeV) {
                        if (!('@' != PkX2ISuw[Rpldbm][ofM3w2x6HeV]))
                            HLPkvuXK6s = HLPkvuXK6s +(404 - 403);
                        ofM3w2x6HeV = ofM3w2x6HeV + (432 - 431);
                    }
                }
                Rpldbm = Rpldbm +(976 - 975);
            }
        }
        return HLPkvuXK6s;
    }
    else {
        {
            Rpldbm = 0;
            while (UecNgyITt5 > Rpldbm) {
                {
                    ofM3w2x6HeV = 0;
                    while (UecNgyITt5 > ofM3w2x6HeV) {
                        if (!('@' != PkX2ISuw[Rpldbm][ofM3w2x6HeV])) {
                            if (!('.' != PkX2ISuw[Rpldbm][ofM3w2x6HeV - (234 - 233)]))
                                meLdmJCbwNY[Rpldbm][ofM3w2x6HeV - 1] = 1;
                            if (!('.' != PkX2ISuw[Rpldbm][ofM3w2x6HeV + 1]))
                                meLdmJCbwNY[Rpldbm][ofM3w2x6HeV + 1] = 1;
                            if (!('.' != PkX2ISuw[Rpldbm +1][ofM3w2x6HeV]))
                                meLdmJCbwNY[Rpldbm +1][ofM3w2x6HeV] = 1;
                            if (!('.' != PkX2ISuw[Rpldbm -1][ofM3w2x6HeV]))
                                meLdmJCbwNY[Rpldbm -1][ofM3w2x6HeV] = 1;
                        }
                        ofM3w2x6HeV = ofM3w2x6HeV + 1;
                    }
                }
                Rpldbm = Rpldbm +1;
            }
        }
        {
            Rpldbm = 0;
            while (UecNgyITt5 > Rpldbm) {
                {
                    ofM3w2x6HeV = 0;
                    while (ofM3w2x6HeV < UecNgyITt5) {
                        if (!(1 != meLdmJCbwNY[Rpldbm][ofM3w2x6HeV]))
                            PkX2ISuw[Rpldbm][ofM3w2x6HeV] = '@';
                        ofM3w2x6HeV = ofM3w2x6HeV + 1;
                    }
                }
                Rpldbm = Rpldbm +1;
            }
        }
    }
    HedRgvDuJ6fT (lmqLhr - 1);
}

int main () {
    int Rpldbm;
    int ofM3w2x6HeV;
    int lmqLhr;
    cin >> UecNgyITt5;
    Rpldbm = 0;
    ofM3w2x6HeV = 0;
    {
        Rpldbm = 0;
        while (Rpldbm < UecNgyITt5) {
            {
                ofM3w2x6HeV = 0;
                while (ofM3w2x6HeV < UecNgyITt5) {
                    cin >> PkX2ISuw[Rpldbm][ofM3w2x6HeV];
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    ofM3w2x6HeV++;
                }
            }
            Rpldbm = Rpldbm +1;
        }
    }
    cin >> lmqLhr;
    lmqLhr = lmqLhr - 1;
    cout << HedRgvDuJ6fT (lmqLhr);
    return 0;
}

