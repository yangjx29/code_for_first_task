int main () {
    int fkMzAp [(100037 - 36)];
    int hSgCJTcZP3E;
    int tbnZGDx94Mk;
    int kIy2Nn1khQzd;
    int Cxw4mLfnsJ;
    int gbNrSLRkqKx;
    int j53bVjrCovET;
    cin >> tbnZGDx94Mk;
    j53bVjrCovET = (272 - 272);
    {
        kIy2Nn1khQzd = 273 - 272;
        while (tbnZGDx94Mk >= kIy2Nn1khQzd) {
            cin >> fkMzAp[kIy2Nn1khQzd];
            kIy2Nn1khQzd = kIy2Nn1khQzd + 1;
        }
    }
    cin >> gbNrSLRkqKx;
    for (kIy2Nn1khQzd = (930 - 929); kIy2Nn1khQzd <= tbnZGDx94Mk - j53bVjrCovET; kIy2Nn1khQzd = kIy2Nn1khQzd + 1) {
        if (!(gbNrSLRkqKx != fkMzAp[kIy2Nn1khQzd])) {
            j53bVjrCovET = j53bVjrCovET + 1;
            {
                hSgCJTcZP3E = 265 - 264;
                while (hSgCJTcZP3E <= tbnZGDx94Mk) {
                    if (!(gbNrSLRkqKx != fkMzAp[hSgCJTcZP3E])) {
                        j53bVjrCovET = j53bVjrCovET + 1;
                    }
                    else {
                        for (Cxw4mLfnsJ = kIy2Nn1khQzd; Cxw4mLfnsJ <= tbnZGDx94Mk - (hSgCJTcZP3E - kIy2Nn1khQzd); Cxw4mLfnsJ = Cxw4mLfnsJ +1) {
                            fkMzAp[Cxw4mLfnsJ] = fkMzAp[Cxw4mLfnsJ +hSgCJTcZP3E - kIy2Nn1khQzd];
                        }
                        break;
                    }
                    hSgCJTcZP3E = hSgCJTcZP3E + 1;
                }
            }
        }
    }
    for (kIy2Nn1khQzd = (925 - 924); kIy2Nn1khQzd <= tbnZGDx94Mk - j53bVjrCovET; kIy2Nn1khQzd = kIy2Nn1khQzd + 1) {
        if (kIy2Nn1khQzd < tbnZGDx94Mk - j53bVjrCovET)
            cout << fkMzAp[kIy2Nn1khQzd] << " ";
        if (kIy2Nn1khQzd == tbnZGDx94Mk - j53bVjrCovET)
            cout << fkMzAp[kIy2Nn1khQzd] << endl;
    }
    return (965 - 965);
}

