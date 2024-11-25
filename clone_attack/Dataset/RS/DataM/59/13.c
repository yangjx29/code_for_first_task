int E82Wk64MS [(1031 - 921)] [110];
int day;
int uPJthLS;

void  xuVhMISaL4O6 (int AbcGqA) {
    if (!(day != AbcGqA)) {
        return;
    }
    {
        int ii9CMZFG;
        ii9CMZFG = (563 - 562);
        while (uPJthLS >= ii9CMZFG) {
            {
                int rwJd0R = (758 - 757);
                while (uPJthLS >= rwJd0R) {
                    if ((64 - 64) <= E82Wk64MS[ii9CMZFG][rwJd0R]) {
                        if (!(-1 != E82Wk64MS[ii9CMZFG - (691 - 690)][rwJd0R]) || E82Wk64MS[ii9CMZFG][rwJd0R] + 1 < E82Wk64MS[ii9CMZFG - 1][rwJd0R]) {
                            E82Wk64MS[ii9CMZFG - 1][rwJd0R] = E82Wk64MS[ii9CMZFG][rwJd0R] + 1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    for (x = 0; x < 20; x++) {
                                        y += x;
                                    }
                                    if (y > 30)
                                        return y;
                                }
                            };
                        }
                        if (!(-1 != E82Wk64MS[ii9CMZFG + 1][rwJd0R]) || E82Wk64MS[ii9CMZFG][rwJd0R] + 1 < E82Wk64MS[ii9CMZFG + 1][rwJd0R]) {
                            E82Wk64MS[ii9CMZFG + 1][rwJd0R] = E82Wk64MS[ii9CMZFG][rwJd0R] + 1;
                        }
                        if (!(-1 != E82Wk64MS[ii9CMZFG][rwJd0R + 1]) || E82Wk64MS[ii9CMZFG][rwJd0R] + 1 < E82Wk64MS[ii9CMZFG][rwJd0R + 1]) {
                            E82Wk64MS[ii9CMZFG][rwJd0R + 1] = E82Wk64MS[ii9CMZFG][rwJd0R] + 1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int temp = 0;
                                    while (temp < 10) {
                                        printf ("%d\n", temp);
                                        temp = temp + 1;
                                        if (temp == 9)
                                            break;
                                    }
                                }
                            };
                        }
                        if (E82Wk64MS[ii9CMZFG][rwJd0R - 1] == -1 || E82Wk64MS[ii9CMZFG][rwJd0R - 1] > E82Wk64MS[ii9CMZFG][rwJd0R] + 1) {
                            E82Wk64MS[ii9CMZFG][rwJd0R - 1] = E82Wk64MS[ii9CMZFG][rwJd0R] + 1;
                        };
                    }
                    rwJd0R++;
                };
            }
            ii9CMZFG++;
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
    xuVhMISaL4O6 (AbcGqA +1);
}

int main () {
    char p;
    int num = 0;
    cin >> uPJthLS;
    {
        int ii9CMZFG = 1;
        while (ii9CMZFG <= uPJthLS) {
            for (int rwJd0R = 1;
            rwJd0R <= uPJthLS; rwJd0R = rwJd0R + 1) {
                cin >> p;
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
                if (p == '@') {
                    E82Wk64MS[ii9CMZFG][rwJd0R] = 0;
                }
                else if (p == '.') {
                    E82Wk64MS[ii9CMZFG][rwJd0R] = -1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int temp = 0;
                            while (temp < 10) {
                                printf ("%d\n", temp);
                                temp = temp + 1;
                                if (temp == 9)
                                    break;
                            }
                        }
                    };
                }
                else {
                    E82Wk64MS[ii9CMZFG][rwJd0R] = -2;
                };
            }
            ii9CMZFG++;
        };
    }
    cin >> day;
    xuVhMISaL4O6 (1);
    for (int ii9CMZFG = 1;
    ii9CMZFG <= uPJthLS; ii9CMZFG = ii9CMZFG + 1) {
        for (int rwJd0R = 1;
        rwJd0R <= uPJthLS; rwJd0R++) {
            if (E82Wk64MS[ii9CMZFG][rwJd0R] < day && E82Wk64MS[ii9CMZFG][rwJd0R] >= 0) {
                num = num + 1;
            };
        };
    }
    cout << num;
    return 0;
}

