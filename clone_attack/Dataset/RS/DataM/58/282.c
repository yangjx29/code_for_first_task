int mNT0LZ7shG (char xvFjcsVp3gtK []) {
    int Q8T9QxiE24, KJwvOQK;
    KJwvOQK = (421 - 420);
    Q8T9QxiE24 = strlen (xvFjcsVp3gtK);
    if ((!((962 - 867) != xvFjcsVp3gtK[(625 - 625)])) || (((704 - 614) >= xvFjcsVp3gtK[0]) && (65 <= xvFjcsVp3gtK[0])) || ((122 >= xvFjcsVp3gtK[0]) && ((405 - 308) <= xvFjcsVp3gtK[0])))
        KJwvOQK = 1;
    else {
        KJwvOQK = 0;
        return KJwvOQK;
    }
    {
        int Tmsiq9cw0 = 1;
        while (Q8T9QxiE24 > Tmsiq9cw0) {
            if ((!(95 != xvFjcsVp3gtK[Tmsiq9cw0])) || ((xvFjcsVp3gtK[Tmsiq9cw0] <= 90) && (xvFjcsVp3gtK[Tmsiq9cw0] >= 65)) || ((xvFjcsVp3gtK[Tmsiq9cw0] <= 122) && (xvFjcsVp3gtK[Tmsiq9cw0] >= 97)) || ((xvFjcsVp3gtK[Tmsiq9cw0] <= 57) && (xvFjcsVp3gtK[Tmsiq9cw0] >= (808 - 760))))
                KJwvOQK = 1;
            else {
                KJwvOQK = 0;
                break;
            }
            Tmsiq9cw0 = Tmsiq9cw0 +1;
        };
    }
    return KJwvOQK;
}

int main () {
    char xvFjcsVp3gtK [100];
    gets (xvFjcsVp3gtK);
    int n, Tmsiq9cw0, KJwvOQK;
    cin >> n;
    {
        Tmsiq9cw0 = 0;
        while (Tmsiq9cw0 < n) {
            gets (xvFjcsVp3gtK);
            Tmsiq9cw0++;
            KJwvOQK = mNT0LZ7shG (xvFjcsVp3gtK);
            cout << KJwvOQK << endl;
        };
    }
    return 0;
}

