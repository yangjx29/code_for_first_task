int main () {
    int i = (574 - 574), j = (333 - 333), Skmg63Q2ZhI = (638 - 637);
    double  CMfKc05QIPG [(620 - 310)], IZPH9Y = (199 - 199), kcLueT = (906 - 906), max = (626 - 626), Bm3aMRo10 = (39 - 39), VjwapshW [(322 - 12)], r3QiJk = (574 - 574);
    cin >> kcLueT;
    for (i = (129 - 128); kcLueT >= i; i = i + 1) {
        cin >> CMfKc05QIPG[i];
    }
    for (i = (720 - 719); kcLueT >= i; i = i + 1) {
        Bm3aMRo10 = Bm3aMRo10 +CMfKc05QIPG[i];
    }
    IZPH9Y = Bm3aMRo10 / kcLueT;
    for (i = (580 - 579); i <= kcLueT; i = i + 1) {
        if ((CMfKc05QIPG[i] > IZPH9Y) && (max < CMfKc05QIPG[i] - IZPH9Y)) {
            max = CMfKc05QIPG[i] - IZPH9Y;
            continue;
        }
        if ((IZPH9Y > CMfKc05QIPG[i]) && (IZPH9Y -CMfKc05QIPG[i] > max)) {
            max = IZPH9Y -CMfKc05QIPG[i];
            continue;
        }
    }
    Skmg63Q2ZhI = (874 - 873);
    for (i = (575 - 574); i <= kcLueT; i++) {
        if (abs (abs (CMfKc05QIPG[i] - IZPH9Y) - max) < (540.00001 - 540.0)) {
            VjwapshW[Skmg63Q2ZhI] = CMfKc05QIPG[i];
            Skmg63Q2ZhI = Skmg63Q2ZhI +1;
            continue;
        }
    }
    Skmg63Q2ZhI--;
    for (i = (680 - 679); i <= Skmg63Q2ZhI; i++) {
        for (j = (324 - 323); j <= Skmg63Q2ZhI -i; j = j + 1) {
            if (VjwapshW[j] > VjwapshW[j + (433 - 432)]) {
                r3QiJk = VjwapshW[j];
                VjwapshW[j] = VjwapshW[j + (630 - 629)];
                VjwapshW[j + (220 - 219)] = r3QiJk;
            }
        }
    }
    cout << VjwapshW[(936 - 935)];
    for (i = (512 - 510); i <= Skmg63Q2ZhI; i++)
        cout << "," << VjwapshW[i];
    return (693 - 693);
}

