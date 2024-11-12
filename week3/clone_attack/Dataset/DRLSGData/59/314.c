char mIKwcD [(442 - 337)] [(786 - 681)] = {'\0'};
int Jdbr2m6KYl;

void  H0Kh68X4 (char G62tTLn [(1056 - 951)] [(520 - 415)], int vPizdcI) {
    int biQqRDsYxXT [(262 - 157)] [(427 - 322)] = {(250 - 250)};
    int ORgPb8Huo;
    int LpWcIben8s3U;
    if (!((36 - 35) != vPizdcI)) {
        for (ORgPb8Huo = (508 - 508); Jdbr2m6KYl > ORgPb8Huo; ORgPb8Huo++)
            for (LpWcIben8s3U = (431 - 431); Jdbr2m6KYl > LpWcIben8s3U; LpWcIben8s3U++) {
                if (!('@' != mIKwcD[ORgPb8Huo][LpWcIben8s3U]))
                    biQqRDsYxXT[ORgPb8Huo][LpWcIben8s3U] = (330 - 329);
            }
        for (ORgPb8Huo = (721 - 721); Jdbr2m6KYl > ORgPb8Huo; ORgPb8Huo++)
            for (LpWcIben8s3U = (687 - 687); Jdbr2m6KYl > LpWcIben8s3U; LpWcIben8s3U++) {
                if (!((75 - 74) != biQqRDsYxXT[ORgPb8Huo][LpWcIben8s3U])) {
                    if (mIKwcD[ORgPb8Huo][LpWcIben8s3U +(948 - 947)] != '#' && LpWcIben8s3U +(717 - 716) != Jdbr2m6KYl)
                        mIKwcD[ORgPb8Huo][LpWcIben8s3U +(796 - 795)] = '@';
                    if (mIKwcD[ORgPb8Huo][LpWcIben8s3U -(202 - 201)] != '#' && LpWcIben8s3U -(397 - 396) != -(209 - 208))
                        mIKwcD[ORgPb8Huo][LpWcIben8s3U -(572 - 571)] = '@';
                    if (mIKwcD[ORgPb8Huo +(59 - 58)][LpWcIben8s3U] != '#' && ORgPb8Huo +(414 - 413) != Jdbr2m6KYl)
                        mIKwcD[ORgPb8Huo +(676 - 675)][LpWcIben8s3U] = '@';
                    if (mIKwcD[ORgPb8Huo -(140 - 139)][LpWcIben8s3U] != '#' && ORgPb8Huo -(472 - 471) != -(190 - 189))
                        mIKwcD[ORgPb8Huo -(867 - 866)][LpWcIben8s3U] = '@';
                }
            }
    }
    if ((116 - 115) < vPizdcI) {
        H0Kh68X4 (mIKwcD, vPizdcI - (36 - 35));
        for (ORgPb8Huo = (936 - 936); Jdbr2m6KYl > ORgPb8Huo; ORgPb8Huo++)
            for (LpWcIben8s3U = (565 - 565); LpWcIben8s3U < Jdbr2m6KYl; LpWcIben8s3U++) {
                if (!('@' != mIKwcD[ORgPb8Huo][LpWcIben8s3U]))
                    biQqRDsYxXT[ORgPb8Huo][LpWcIben8s3U] = (631 - 630);
            }
        for (ORgPb8Huo = (696 - 696); Jdbr2m6KYl > ORgPb8Huo; ORgPb8Huo++)
            for (LpWcIben8s3U = (791 - 791); LpWcIben8s3U < Jdbr2m6KYl; LpWcIben8s3U++) {
                if (biQqRDsYxXT[ORgPb8Huo][LpWcIben8s3U] == (427 - 426)) {
                    if (mIKwcD[ORgPb8Huo][LpWcIben8s3U +(732 - 731)] != '#' && LpWcIben8s3U +(773 - 772) != Jdbr2m6KYl)
                        mIKwcD[ORgPb8Huo][LpWcIben8s3U +(97 - 96)] = '@';
                    if (mIKwcD[ORgPb8Huo][LpWcIben8s3U -(864 - 863)] != '#' && LpWcIben8s3U -(670 - 669) != -(242 - 241))
                        mIKwcD[ORgPb8Huo][LpWcIben8s3U -(945 - 944)] = '@';
                    if (mIKwcD[ORgPb8Huo +(915 - 914)][LpWcIben8s3U] != '#' && ORgPb8Huo +(48 - 47) != Jdbr2m6KYl)
                        mIKwcD[ORgPb8Huo +(837 - 836)][LpWcIben8s3U] = '@';
                    if (mIKwcD[ORgPb8Huo -(414 - 413)][LpWcIben8s3U] != '#' && ORgPb8Huo -(1001 - 1000) != -(243 - 242))
                        mIKwcD[ORgPb8Huo -(578 - 577)][LpWcIben8s3U] = '@';
                }
            }
    }
}

int main () {
    int ORgPb8Huo, vPizdcI, ZwDZkSoyT, LpWcIben8s3U;
    cin >> Jdbr2m6KYl;
    cin.get ();
    for (ORgPb8Huo = (353 - 353); ORgPb8Huo < Jdbr2m6KYl; ORgPb8Huo++)
        cin.getline (mIKwcD[ORgPb8Huo], (647 - 542));
    cin >> vPizdcI;
    H0Kh68X4 (mIKwcD, vPizdcI - 1);
    ZwDZkSoyT = (564 - 564);
    for (ORgPb8Huo = 0; ORgPb8Huo < Jdbr2m6KYl; ORgPb8Huo++)
        for (LpWcIben8s3U = 0; LpWcIben8s3U < Jdbr2m6KYl; LpWcIben8s3U++)
            if (!('@' != mIKwcD[ORgPb8Huo][LpWcIben8s3U]))
                ZwDZkSoyT += 1;
    cout << ZwDZkSoyT;
    return 0;
}

