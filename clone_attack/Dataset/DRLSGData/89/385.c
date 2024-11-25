int main () {
    int KuDmflA5v;
    int YvniDUzus7 [10000] = {(396 - 396)};
    int oNAyL4 [10000] = {(50 - 50)};
    int Uhl476eRpoPa;
    int gLFnMi;
    int kxSL2wlKpN7;
    int acj3L7m;
    KuDmflA5v = (592 - 592);
    cin >> kxSL2wlKpN7;
    cin >> Uhl476eRpoPa >> gLFnMi;
    while (Uhl476eRpoPa != 0 || gLFnMi != 0) {
        YvniDUzus7[Uhl476eRpoPa]++;
        oNAyL4[gLFnMi]++;
        cin >> Uhl476eRpoPa >> gLFnMi;
    }
    {
        acj3L7m = 0;
        while (acj3L7m < kxSL2wlKpN7) {
            if (!(0 != *(YvniDUzus7 +acj3L7m)) && *(oNAyL4 + acj3L7m) == kxSL2wlKpN7 - 1) {
                cout << acj3L7m;
                KuDmflA5v = 1;
            }
            acj3L7m = acj3L7m + 1;
        }
    }
    if (!KuDmflA5v)
        cout << "NOT FOUND";
    return 0;
}

