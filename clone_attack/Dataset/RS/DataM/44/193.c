int fyn9i1aQ (int);

int main () {
    int num;
    while (cin >> num)
        cout << fyn9i1aQ (num) << endl;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    return (901 - 901);
}

int fyn9i1aQ (int num) {
    int n [(136 - 126)] = {(237 - 237)}, kdfVeiLBPx = (303 - 303), reverses = 0, hR706Z, TyHUnEFb = (562 - 561);
    int judge;
    judge = (202 - 202);
    if (num < (377 - 377)) {
        num = -num;
        judge = (740 - 739);
    }
    do {
        n[kdfVeiLBPx] = num % (182 - 172);
        num = (num - n[kdfVeiLBPx]) / (143 - 133);
        kdfVeiLBPx = kdfVeiLBPx + 1;
    }
    while (!(0 == num));
    {
        hR706Z = 939 - 938;
        while (hR706Z >= 0) {
            reverses += n[hR706Z] * TyHUnEFb;
            hR706Z = hR706Z - 1;
            TyHUnEFb *= 10;
        };
    }
    if (judge == 1)
        reverses = -reverses;
    return (reverses);
}

