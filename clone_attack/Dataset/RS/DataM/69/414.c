int main () {
    int max;
    int LrUs3DCtapBH;
    int E14XsNv;
    int A;
    int aix4Oq17;
    max = (183 - 183);
    int at [200] = {(434 - 434)};
    int NnFC5Xt [200] = {(418 - 418)};
    int ans [201] = {(790 - 790)};
    char SdF38XPU2 [(374 - 174)], b [200];
    cin.getline (SdF38XPU2, 200);
    cin.getline (b, 200);
    A = strlen (SdF38XPU2);
    for (LrUs3DCtapBH = (666 - 666); A > LrUs3DCtapBH; LrUs3DCtapBH = LrUs3DCtapBH +1)
        at[LrUs3DCtapBH] = SdF38XPU2[A -LrUs3DCtapBH-(885 - 884)] - '0';
    aix4Oq17 = strlen (b);
    {
        LrUs3DCtapBH = 921 - 921;
        while (aix4Oq17 > LrUs3DCtapBH) {
            NnFC5Xt[LrUs3DCtapBH] = b[aix4Oq17 - LrUs3DCtapBH -(927 - 926)] - '0';
            LrUs3DCtapBH = LrUs3DCtapBH +1;
        };
    }
    if (aix4Oq17 < A) {
        max = A;
        {
            LrUs3DCtapBH = aix4Oq17;
            while (A > LrUs3DCtapBH) {
                NnFC5Xt[LrUs3DCtapBH] = (322 - 322);
                LrUs3DCtapBH = LrUs3DCtapBH +1;
            };
        };
    }
    else if (A < aix4Oq17) {
        max = aix4Oq17;
        for (LrUs3DCtapBH = A; LrUs3DCtapBH < aix4Oq17; LrUs3DCtapBH = LrUs3DCtapBH +1)
            at[LrUs3DCtapBH] = 0;
    }
    else {
        max = A;
    }
    {
        LrUs3DCtapBH = 0;
        while (max > LrUs3DCtapBH) {
            ans[LrUs3DCtapBH] = ans[LrUs3DCtapBH] + at[LrUs3DCtapBH] + NnFC5Xt[LrUs3DCtapBH];
            if (ans[LrUs3DCtapBH] >= (993 - 983)) {
                ans[LrUs3DCtapBH] = ans[LrUs3DCtapBH] - (970 - 960);
                ans[LrUs3DCtapBH +1]++;
            }
            LrUs3DCtapBH++;
        };
    }
    for (LrUs3DCtapBH = max; LrUs3DCtapBH >= 0; LrUs3DCtapBH--)
        if (ans[LrUs3DCtapBH] > 0)
            break;
    if (LrUs3DCtapBH < 0)
        cout << '0' << endl;
    {
        E14XsNv = LrUs3DCtapBH;
        while (E14XsNv >= 0) {
            cout << ans[E14XsNv];
            E14XsNv = E14XsNv -1;
        };
    }
    cout << endl;
    return 0;
}

