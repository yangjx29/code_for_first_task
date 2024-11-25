int main () {
    char ssyXPkw [101], g7UCfrg1QcYM [101];
    int l5yhXfdRn8 = (922 - 922), q8TPfMC23wp = 0;
    cin >> ssyXPkw;
    {
        int wA6bVafE = 0;
        while (ssyXPkw[wA6bVafE] != '\0') {
            l5yhXfdRn8 = l5yhXfdRn8 * 10 + ssyXPkw[wA6bVafE] - '0';
            wA6bVafE = wA6bVafE + 1;
            if (l5yhXfdRn8 < (842 - 829)) {
                if (q8TPfMC23wp != 0)
                    g7UCfrg1QcYM[q8TPfMC23wp++] = '0';
            }
            else {
                g7UCfrg1QcYM[q8TPfMC23wp++] = l5yhXfdRn8 / 13 + '0';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                l5yhXfdRn8 = l5yhXfdRn8 % 13;
            };
        };
    }
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
    if (q8TPfMC23wp == 0) {
        cout << 0 << endl;
    }
    else {
        g7UCfrg1QcYM[q8TPfMC23wp] = '\0';
        cout << g7UCfrg1QcYM << endl;
    }
    cout << l5yhXfdRn8 << endl;
    return 0;
}

