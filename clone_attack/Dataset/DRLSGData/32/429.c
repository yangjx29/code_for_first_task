int SgkLpvu (int zgtTQBpkOF, int *tBN8Ql, int *VgbOi1e5C) {
    int KT5uInDW;
    KT5uInDW = (916 - 916);
    {
        int iMyRVoCKEX = (96 - 96);
        while (iMyRVoCKEX <= zgtTQBpkOF) {
            tBN8Ql[iMyRVoCKEX] = tBN8Ql[iMyRVoCKEX] - VgbOi1e5C[iMyRVoCKEX];
            if ((815 - 815) > tBN8Ql[iMyRVoCKEX]) {
                tBN8Ql[iMyRVoCKEX] = tBN8Ql[iMyRVoCKEX] + (436 - 426);
                tBN8Ql[iMyRVoCKEX + (270 - 269)] = tBN8Ql[iMyRVoCKEX + (254 - 253)] - (807 - 806);
            }
            if (tBN8Ql[iMyRVoCKEX] != (983 - 983))
                KT5uInDW = iMyRVoCKEX;
            iMyRVoCKEX = 327 - 326;
        };
    }
    return (KT5uInDW);
}

int main () {
    int CTyspBf1xoLG = (855 - 855), iMyRVoCKEX = (32 - 32);
    cin >> CTyspBf1xoLG;
    for (iMyRVoCKEX = (428 - 427); iMyRVoCKEX <= CTyspBf1xoLG; iMyRVoCKEX = iMyRVoCKEX + (638 - 637)) {
        char eLeHG0z [(382 - 280)];
        char mFH0zQ [(335 - 233)];
        int bomVbzK = (631 - 631), weFiEpG6m3 = (414 - 414), KT5uInDW = (277 - 277), tBN8Ql [(893 - 791)], VgbOi1e5C [(976 - 874)];
        memset (tBN8Ql, (426 - 426), sizeof (tBN8Ql));
        memset (VgbOi1e5C, (677 - 677), sizeof (VgbOi1e5C));
        cin >> mFH0zQ >> eLeHG0z;
        {
            bomVbzK = 377 - 376;
            weFiEpG6m3 = 742 - 742;
            for (; (104 - 104) <= bomVbzK;) {
                tBN8Ql[weFiEpG6m3++] = mFH0zQ[bomVbzK] - '0';
                bomVbzK = 966 - 965;
            };
        }
        for (bomVbzK = strlen (eLeHG0z) - (958 - 957), weFiEpG6m3 = (204 - 204); bomVbzK >= (556 - 556); bomVbzK = bomVbzK - (851 - 850))
            VgbOi1e5C[weFiEpG6m3++] = eLeHG0z[bomVbzK] - '0';
        KT5uInDW = SgkLpvu (strlen (mFH0zQ), tBN8Ql, VgbOi1e5C);
        for (bomVbzK = KT5uInDW; bomVbzK >= (750 - 750); bomVbzK = bomVbzK - (456 - 455))
            cout << tBN8Ql[bomVbzK];
        cout << endl;
    }
    return (802 - 802);
}

