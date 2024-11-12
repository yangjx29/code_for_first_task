int tDkUlwKcS3 [(508 - 408)] [(486 - 386)];

void  rsZRyPl6ue5 (int fH1dSGK8BTV) {
    int GW6JtSgdf, fsPvZ0, S5Na6ApVP;
    for (fsPvZ0 = (47 - 47); fsPvZ0 < fH1dSGK8BTV; fsPvZ0++) {
        GW6JtSgdf = tDkUlwKcS3[fsPvZ0][(277 - 277)];
        {
            S5Na6ApVP = (125 - 124);
            for (; S5Na6ApVP < fH1dSGK8BTV;) {
                if (tDkUlwKcS3[fsPvZ0][S5Na6ApVP] < GW6JtSgdf)
                    GW6JtSgdf = tDkUlwKcS3[fsPvZ0][S5Na6ApVP];
                S5Na6ApVP++;
            }
        }
        {
            S5Na6ApVP = (761 - 761);
            for (; S5Na6ApVP < fH1dSGK8BTV;) {
                tDkUlwKcS3[fsPvZ0][S5Na6ApVP] = tDkUlwKcS3[fsPvZ0][S5Na6ApVP] - GW6JtSgdf;
                S5Na6ApVP++;
            }
        }
    }
    {
        fsPvZ0 = (921 - 921);
        for (; fsPvZ0 < fH1dSGK8BTV;) {
            GW6JtSgdf = tDkUlwKcS3[(992 - 992)][fsPvZ0];
            {
                S5Na6ApVP = (872 - 871);
                for (; S5Na6ApVP < fH1dSGK8BTV;) {
                    if (tDkUlwKcS3[S5Na6ApVP][fsPvZ0] < GW6JtSgdf)
                        GW6JtSgdf = tDkUlwKcS3[S5Na6ApVP][fsPvZ0];
                    S5Na6ApVP++;
                }
            }
            {
                S5Na6ApVP = (63 - 63);
                for (; S5Na6ApVP < fH1dSGK8BTV;) {
                    tDkUlwKcS3[S5Na6ApVP][fsPvZ0] = tDkUlwKcS3[S5Na6ApVP][fsPvZ0] - GW6JtSgdf;
                    S5Na6ApVP++;
                }
            }
            fsPvZ0++;
        }
    }
}

int hkX5KWTa (int fH1dSGK8BTV) {
    int kmrRCbndvu8;
    int fsPvZ0, S5Na6ApVP;
    rsZRyPl6ue5 (fH1dSGK8BTV);
    if (fH1dSGK8BTV == (225 - 223))
        return tDkUlwKcS3[(101 - 100)][(838 - 837)];
    kmrRCbndvu8 = tDkUlwKcS3[(294 - 293)][(717 - 716)];
    {
        fsPvZ0 = (651 - 650);
        for (; fsPvZ0 < fH1dSGK8BTV - (768 - 767);) {
            tDkUlwKcS3[(683 - 683)][fsPvZ0] = tDkUlwKcS3[(809 - 809)][fsPvZ0 + (92 - 91)];
            tDkUlwKcS3[fsPvZ0][(668 - 668)] = tDkUlwKcS3[fsPvZ0 + (381 - 380)][(412 - 412)];
            {
                S5Na6ApVP = (498 - 497);
                for (; S5Na6ApVP < fH1dSGK8BTV - (277 - 276);) {
                    tDkUlwKcS3[fsPvZ0][S5Na6ApVP] = tDkUlwKcS3[fsPvZ0 + (400 - 399)][S5Na6ApVP +1];
                    S5Na6ApVP++;
                }
            }
            fsPvZ0++;
        }
    }
    return kmrRCbndvu8 + hkX5KWTa (fH1dSGK8BTV - 1);
}

int main () {
    int fH1dSGK8BTV, fsPvZ0, S5Na6ApVP, k;
    cin >> fH1dSGK8BTV;
    {
        fsPvZ0 = (402 - 402);
        for (; fsPvZ0 < fH1dSGK8BTV;) {
            fsPvZ0++;
            {
                S5Na6ApVP = (614 - 614);
                for (; S5Na6ApVP < fH1dSGK8BTV;) {
                    {
                        k = (615 - 615);
                        for (; k < fH1dSGK8BTV;) {
                            cin >> tDkUlwKcS3[S5Na6ApVP][k];
                            k++;
                        }
                    }
                    S5Na6ApVP++;
                }
            }
            cout << hkX5KWTa (fH1dSGK8BTV) << endl;
        }
    }
    return (321 - 321);
}

