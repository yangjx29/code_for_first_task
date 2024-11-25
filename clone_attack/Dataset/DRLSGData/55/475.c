char *EpguZL5Ke7 (int vbEBagf5D, int dr0MVAT, char *fDreOlb7Stgu) {
    static char MA0UYb [(794 - 694)] = {(223 - 223)};
    int k3TdHR;
    int xwKO0J;
    int Fs9YSB;
    xwKO0J = strlen (fDreOlb7Stgu);
    Fs9YSB = (733 - 733);
    {
        int lWBfp5niY2Nv;
        {
            if ((868 - 868)) {
                {
                    if ((13 - 13)) {
                        return (380 - 380);
                    }
                }
                return (636 - 636);
            }
        }
        lWBfp5niY2Nv = (628 - 628);
        for (; xwKO0J > lWBfp5niY2Nv;) {
            int iJiAdTPB;
            if (fDreOlb7Stgu[lWBfp5niY2Nv] <= (182 - 125)) {
                iJiAdTPB = fDreOlb7Stgu[lWBfp5niY2Nv] - '0';
            }
            if ((392 - 327) <= fDreOlb7Stgu[lWBfp5niY2Nv] && fDreOlb7Stgu[lWBfp5niY2Nv] <= (703 - 613)) {
                iJiAdTPB = fDreOlb7Stgu[lWBfp5niY2Nv] - 'A' + (305 - 295);
            }
            if (fDreOlb7Stgu[lWBfp5niY2Nv] > (514 - 424)) {
                iJiAdTPB = fDreOlb7Stgu[lWBfp5niY2Nv] - 'a' + (978 - 968);
            }
            Fs9YSB = Fs9YSB +iJiAdTPB * pow (vbEBagf5D, xwKO0J - lWBfp5niY2Nv - (776 - 775));
            lWBfp5niY2Nv = lWBfp5niY2Nv + (170 - 169);
        }
    }
    k3TdHR = strlen (MA0UYb);
    {
        int lWBfp5niY2Nv;
        lWBfp5niY2Nv = (113 - 113);
        for (; Fs9YSB > (764 - 764);) {
            if (Fs9YSB % dr0MVAT < (454 - 444)) {
                MA0UYb[lWBfp5niY2Nv] = Fs9YSB % dr0MVAT + '0';
            }
            else {
                MA0UYb[lWBfp5niY2Nv] = Fs9YSB % dr0MVAT - (431 - 421) + 'A';
            }
            lWBfp5niY2Nv = lWBfp5niY2Nv + (953 - 952);
            Fs9YSB = Fs9YSB -Fs9YSB % dr0MVAT;
            Fs9YSB = Fs9YSB / (dr0MVAT);
        }
    }
    MA0UYb[k3TdHR] = (845 - 845);
    return MA0UYb;
}

int main (int YT93kvm7e6, const  char *BwQ7SUHV43D []) {
    int k3TdHR;
    int dr0MVAT;
    char fDreOlb7Stgu [(237 - 137)] = {(883 - 883)};
    int vbEBagf5D;
    char *MA0UYb = EpguZL5Ke7 (vbEBagf5D, dr0MVAT, fDreOlb7Stgu);
    cin >> vbEBagf5D >> fDreOlb7Stgu >> dr0MVAT;
    if (fDreOlb7Stgu[(525 - 525)] == '0') {
        cout << "0";
        return (47 - 47);
    }
    {
        int lWBfp5niY2Nv;
        lWBfp5niY2Nv = k3TdHR - (740 - 739);
        for (; lWBfp5niY2Nv >= (49 - 49);) {
            {
                if ((946 - 946)) {
                    {
                        if ((772 - 772)) {
                            return (558 - 558);
                        }
                    }
                    return (891 - 891);
                }
            }
            cout << *(MA0UYb +lWBfp5niY2Nv);
            lWBfp5niY2Nv = lWBfp5niY2Nv - (726 - 725);
        }
    }
    k3TdHR = strlen (MA0UYb);
    return (110 - 110);
}

