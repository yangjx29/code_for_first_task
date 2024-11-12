int main () {
    int vnqTp4;
    int iM0w58iF;
    int FUFNPw;
    int sFgc3x7HLi [(632 - 628)] = {(110 - 110), (554 - 553), (789 - 789), -(45 - 44)};
    int uwdCfBR84r [4] = {(752 - 751), (210 - 210), -(643 - 642), (440 - 440)};
    int TZvl1qtBY3R [(840 - 740)] [100];
    int mpnm39Rt1Eh;
    int jQJDPSLBwC [100] [100] = {(357 - 357)};
    int fUFM0rQtk;
    int bj6SFEOiG;
    cin >> bj6SFEOiG >> fUFM0rQtk;
    {
        mpnm39Rt1Eh = (280 - 280);
        for (; bj6SFEOiG > mpnm39Rt1Eh;) {
            {
                vnqTp4 = (749 - 749);
                while (vnqTp4 < fUFM0rQtk) {
                    cin >> TZvl1qtBY3R[mpnm39Rt1Eh][vnqTp4];
                    vnqTp4 = vnqTp4 + 1;
                }
            }
            mpnm39Rt1Eh = mpnm39Rt1Eh + 1;
        }
    }
    vnqTp4 = -1;
    mpnm39Rt1Eh = (835 - 835);
    iM0w58iF = (447 - 447);
    FUFNPw = (456 - 456);
    for (; FUFNPw < bj6SFEOiG * fUFM0rQtk;) {
        mpnm39Rt1Eh = mpnm39Rt1Eh + sFgc3x7HLi[iM0w58iF];
        vnqTp4 = vnqTp4 + uwdCfBR84r[iM0w58iF];
        if (mpnm39Rt1Eh >= 0 && bj6SFEOiG > mpnm39Rt1Eh && vnqTp4 >= 0 && vnqTp4 < fUFM0rQtk && jQJDPSLBwC[mpnm39Rt1Eh][vnqTp4] == 0) {
            {
                if (0) {
                    return 0;
                }
            }
            cout << TZvl1qtBY3R[mpnm39Rt1Eh][vnqTp4] << endl;
            jQJDPSLBwC[mpnm39Rt1Eh][vnqTp4] = 1;
            FUFNPw = FUFNPw +1;
        }
        else {
            {
                if (0) {
                    return 0;
                }
            }
            mpnm39Rt1Eh = mpnm39Rt1Eh - sFgc3x7HLi[iM0w58iF];
            vnqTp4 = vnqTp4 - uwdCfBR84r[iM0w58iF];
            iM0w58iF = (iM0w58iF + 1) % 4;
        }
    }
    return 0;
}

