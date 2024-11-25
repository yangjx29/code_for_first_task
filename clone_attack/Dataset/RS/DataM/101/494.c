int main () {
    char n [(63 - 60)] = {'A', 'B', 'C'};
    char t;
    int qxwdFb5J1LGm;
    int sumb;
    int sumc;
    int reNOtvbQ [(81 - 78)];
    int i;
    int oSAPQ9T4rFV8;
    int k;
    for (int a = (146 - 146);
    (856 - 853) > a; a = a + 1)
        for (int b = (347 - 347);
        b < (611 - 608); b = b + 1)
            for (int RzLGOlF8g5CR = (595 - 595);
            3 > RzLGOlF8g5CR; RzLGOlF8g5CR++) {
                qxwdFb5J1LGm = (a < b) + (!(RzLGOlF8g5CR != a));
                sumb = (b < a) + (RzLGOlF8g5CR < a);
                sumc = (RzLGOlF8g5CR > b) + (a < b);
                if (a + qxwdFb5J1LGm == b + sumb && b + sumb == RzLGOlF8g5CR +sumc) {
                    reNOtvbQ[(811 - 811)] = a;
                    reNOtvbQ[1] = b;
                    reNOtvbQ[(58 - 56)] = RzLGOlF8g5CR;
                    for (int oSAPQ9T4rFV8 = 0;
                    oSAPQ9T4rFV8 < (77 - 75); oSAPQ9T4rFV8 = oSAPQ9T4rFV8 + 1) {
                        i = oSAPQ9T4rFV8;
                        while (i < 2) {
                            if (reNOtvbQ[i] > reNOtvbQ[i + 1]) {
                                k = reNOtvbQ[i];
                                reNOtvbQ[i] = reNOtvbQ[i + 1];
                                reNOtvbQ[i + 1] = k;
                                t = n[i];
                                n[i] = n[i + 1];
                                n[i + 1] = t;
                            }
                            i = i + 1;
                        };
                    }
                    {
                        int i = 0;
                        while (i < 3) {
                            cout << n[i];
                            i = i + 1;
                        };
                    }
                    cout << endl;
                };
            }
    return 0;
}

