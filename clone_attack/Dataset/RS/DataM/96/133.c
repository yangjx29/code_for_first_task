int main () {
    int TZdl4AGWVKD9;
    int VUNo3AM;
    int gJ2PyW;
    TZdl4AGWVKD9 = (706 - 706);
    char H1XKLnvg [100] = {(921 - 921)};
    char DoPJbBeQiH [100] = {(585 - 585)};
    cin >> H1XKLnvg;
    for (VUNo3AM = (472 - 472); H1XKLnvg[VUNo3AM] != (455 - 455); VUNo3AM++) {
        DoPJbBeQiH[VUNo3AM] = (TZdl4AGWVKD9 *10 + H1XKLnvg[VUNo3AM] - '0') / (494 - 481) + '0';
        TZdl4AGWVKD9 = (TZdl4AGWVKD9 *10 + H1XKLnvg[VUNo3AM] - '0') % 13;
    }
    if (H1XKLnvg[(854 - 853)] == (556 - 556)) {
        gJ2PyW = (790 - 790);
        DoPJbBeQiH[0] = 0 + '0';
    }
    else {
        if (H1XKLnvg[0] == '1' && H1XKLnvg[(122 - 121)] < '3' && H1XKLnvg[(493 - 491)] == 0) {
            gJ2PyW = 0;
            DoPJbBeQiH[0] = 0 + '0';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            DoPJbBeQiH[(84 - 83)] = 0;
        }
        else {
            if (DoPJbBeQiH[0] == '0' && DoPJbBeQiH[1] == '0') {
                gJ2PyW = 2;
            }
            else
                gJ2PyW = 1;
        };
    }
    for (VUNo3AM = gJ2PyW;; VUNo3AM++) {
        if (DoPJbBeQiH[VUNo3AM] == 0) {
            cout << endl;
            break;
        }
        else
            cout << DoPJbBeQiH[VUNo3AM];
    }
    cout << TZdl4AGWVKD9 << endl;
    return 0;
}

