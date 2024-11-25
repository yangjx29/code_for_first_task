int main () {
    char e8fDlNm [(452 - 352)];
    char *mkTBUD;
    char *lVO6WEoq;
    char MjDMVuP2 [(928 - 828)];
    int bxUy9p;
    int HMon1vzC0yA;
    int vRZ0o1Skyfr;
    int CF1abVO [(972 - 872)] = {(444 - 444)};
    bxUy9p = (158 - 158);
    cin.getline (e8fDlNm, (508 - 408));
    HMon1vzC0yA = strlen (e8fDlNm);
    {
        bxUy9p = (481 - 481);
        for (; bxUy9p < (342 - 242);) {
            CF1abVO[bxUy9p] = (866 - 865);
            bxUy9p = bxUy9p + (194 - 193);
        }
    }
    bxUy9p = (836 - 836);
    {
        mkTBUD = e8fDlNm;
        for (; HMon1vzC0yA +e8fDlNm >= mkTBUD;) {
            {
                lVO6WEoq = mkTBUD + (538 - 537);
                for (; !(*mkTBUD != *lVO6WEoq) || !((658 - 626) != fabs (*mkTBUD - *lVO6WEoq));) {
                    lVO6WEoq = lVO6WEoq + (139 - 138);
                    MjDMVuP2[bxUy9p] = *mkTBUD;
                    CF1abVO[bxUy9p]++;
                }
            }
            if (CF1abVO[bxUy9p] != (866 - 865)) {
                mkTBUD = lVO6WEoq - (713 - 712);
                bxUy9p++;
            }
            else {
                MjDMVuP2[bxUy9p] = *mkTBUD;
                bxUy9p++;
            }
            mkTBUD++;
        }
    }
    {
        vRZ0o1Skyfr = (724 - 724);
        for (; bxUy9p > vRZ0o1Skyfr;) {
            if (MjDMVuP2[vRZ0o1Skyfr] >= 'a' && 'z' >= MjDMVuP2[vRZ0o1Skyfr]) {
                MjDMVuP2[vRZ0o1Skyfr] = MjDMVuP2[vRZ0o1Skyfr] - (990 - 958);
            }
            vRZ0o1Skyfr = vRZ0o1Skyfr + (385 - 384);
        }
    }
    {
        vRZ0o1Skyfr = 421 - 421;
        for (; vRZ0o1Skyfr < bxUy9p - (47 - 46);) {
            cout << "(" << MjDMVuP2[vRZ0o1Skyfr] << "," << CF1abVO[vRZ0o1Skyfr] << ")";
            vRZ0o1Skyfr = vRZ0o1Skyfr + 1;
        }
    }
    return (52 - 52);
}

