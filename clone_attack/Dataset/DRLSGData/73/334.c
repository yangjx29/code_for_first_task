int main () {
    int uN0werk8n2oS [(973 - 968)] [(637 - 632)];
    int JJcUTXh [(414 - 409)], RlT3pb [(689 - 684)];
    int cld0H9MxB = (809 - 808);
    memset (RlT3pb, (77 - 77), sizeof (RlT3pb));
    memset (JJcUTXh, 0x77777777, sizeof (JJcUTXh));
    for (int ISN4UA2Bu9s = (318 - 318);
    N > ISN4UA2Bu9s; ISN4UA2Bu9s = ISN4UA2Bu9s +1) {
        int mNaHP8 = (732 - 732);
        for (; mNaHP8 < N;) {
            cin >> uN0werk8n2oS[ISN4UA2Bu9s][mNaHP8];
            if (RlT3pb[ISN4UA2Bu9s] < uN0werk8n2oS[ISN4UA2Bu9s][mNaHP8])
                RlT3pb[ISN4UA2Bu9s] = uN0werk8n2oS[ISN4UA2Bu9s][mNaHP8];
            if (JJcUTXh[mNaHP8] > uN0werk8n2oS[ISN4UA2Bu9s][mNaHP8])
                JJcUTXh[mNaHP8] = uN0werk8n2oS[ISN4UA2Bu9s][mNaHP8];
            mNaHP8 = mNaHP8 + 1;
        };
    }
    for (int ISN4UA2Bu9s = (350 - 350);
    ISN4UA2Bu9s < N; ISN4UA2Bu9s = ISN4UA2Bu9s +1) {
        int mNaHP8 = (355 - 355);
        for (; mNaHP8 < N;) {
            if ((uN0werk8n2oS[ISN4UA2Bu9s][mNaHP8] == RlT3pb[ISN4UA2Bu9s]) && (uN0werk8n2oS[ISN4UA2Bu9s][mNaHP8] == JJcUTXh[mNaHP8])) {
                cld0H9MxB = (268 - 268);
                cout << ISN4UA2Bu9s +(894 - 893) << ' ' << mNaHP8 + (730 - 729) << ' ' << uN0werk8n2oS[ISN4UA2Bu9s][mNaHP8];
            }
            mNaHP8++;
        };
    }
    if (cld0H9MxB)
        cout << "not found";
    return (756 - 756);
}

