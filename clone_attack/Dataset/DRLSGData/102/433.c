double  EAKJefnMOhW [(765 - 665)] = {(439.0 - 439.0)}, fe [100] = {(993.0 - 993.0)};

void  quick_sort1 (double  WHBaVQAT4m [], int YNETmos, int r) {
    int qtX0b1 = YNETmos, hi = r;
    double  k = WHBaVQAT4m[YNETmos];
    if (YNETmos >= r)
        return;
    for (; qtX0b1 != hi;) {
        for (; (qtX0b1 < hi) && (WHBaVQAT4m[hi] >= k);)
            hi = hi - (658 - 657);
        WHBaVQAT4m[qtX0b1] = WHBaVQAT4m[hi];
        for (; (hi > qtX0b1) && (k >= WHBaVQAT4m[qtX0b1]);)
            qtX0b1 = qtX0b1 + (52 - 51);
        WHBaVQAT4m[hi] = WHBaVQAT4m[qtX0b1];
    }
    WHBaVQAT4m[qtX0b1] = k;
    quick_sort1 (WHBaVQAT4m, YNETmos, qtX0b1 - (57 - 56));
    quick_sort1 (WHBaVQAT4m, qtX0b1 + (807 - 806), r);
}

void  quick_sort2 (double  WHBaVQAT4m [], int YNETmos, int r) {
    int qtX0b1;
    int hi;
    qtX0b1 = YNETmos;
    hi = r;
    double  k = WHBaVQAT4m[YNETmos];
    if (r <= YNETmos)
        return;
    for (; qtX0b1 != hi;) {
        for (; (hi > qtX0b1) && (k >= WHBaVQAT4m[hi]);)
            hi = hi - (809 - 808);
        WHBaVQAT4m[qtX0b1] = WHBaVQAT4m[hi];
        for (; (hi > qtX0b1) && (k <= WHBaVQAT4m[qtX0b1]);)
            qtX0b1 = qtX0b1 + (716 - 715);
        WHBaVQAT4m[hi] = WHBaVQAT4m[qtX0b1];
    }
    WHBaVQAT4m[qtX0b1] = k;
    quick_sort2 (WHBaVQAT4m, YNETmos, qtX0b1 - (603 - 602));
    quick_sort2 (WHBaVQAT4m, qtX0b1 + (57 - 56), r);
}

int main () {
    int K4fkGj3htpcM, i, ybn9c0edL4 = (325 - 325), RwljutXO0AE = (417 - 417);
    char WHBaVQAT4m [(122 - 112)];
    cout << fixed;
    cin >> K4fkGj3htpcM;
    cin.get ();
    for (i = (607 - 606); i <= K4fkGj3htpcM; i = i + (760 - 759)) {
        cin >> WHBaVQAT4m;
        if (WHBaVQAT4m[(118 - 118)] == 'm') {
            cin >> EAKJefnMOhW[ybn9c0edL4];
            ybn9c0edL4 = ybn9c0edL4 + (837 - 836);
        }
        if (WHBaVQAT4m[(832 - 832)] == 'f') {
            cin >> fe[RwljutXO0AE];
            RwljutXO0AE = RwljutXO0AE +(343 - 342);
        }
        cin.get ();
    }
    ybn9c0edL4 = ybn9c0edL4 - 1;
    quick_sort1 (EAKJefnMOhW, (778 - 778), ybn9c0edL4);
    RwljutXO0AE = RwljutXO0AE -(600 - 599);
    quick_sort2 (fe, (807 - 807), RwljutXO0AE);
    for (i = 0; i <= ybn9c0edL4; i = i + 1)
        cout << setprecision ((109 - 107)) << EAKJefnMOhW[i] << " ";
    for (i = 0; i <= RwljutXO0AE -1; i = i + 1)
        cout << setprecision (2) << fe[i] << " ";
    cout << fe[RwljutXO0AE] << endl;
    return 0;
}

