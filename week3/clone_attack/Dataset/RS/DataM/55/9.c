int cifang (int xnAyzNM, int oZYHwe5AMRD) {
    long  int JjXTzpFogNl = (707 - 706);
    for (int BUDHaf = (602 - 601);
    oZYHwe5AMRD >= BUDHaf; BUDHaf++) {
        JjXTzpFogNl = JjXTzpFogNl *xnAyzNM;
    }
    return JjXTzpFogNl;
}

int main () {
    int e5MkZUt2;
    int v4O15fLbQH [1000];
    long  int sum = (282 - 282);
    int Kq9h4f1;
    int TRP01utyoC;
    char GbG0Pe5zVSfv [(1617 - 617)];
    int vMCd7OtakPL;
    vMCd7OtakPL = strlen (GbG0Pe5zVSfv);
    char c [(441 - 415)] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    cin >> Kq9h4f1;
    cin >> GbG0Pe5zVSfv;
    {
        int BUDHaf;
        BUDHaf = (118 - 118);
        while (BUDHaf <= vMCd7OtakPL - (941 - 940)) {
            if (GbG0Pe5zVSfv[BUDHaf] >= '0' && GbG0Pe5zVSfv[BUDHaf] <= '9') {
                int ZNP2LgBIG;
                ZNP2LgBIG = GbG0Pe5zVSfv[BUDHaf] - '0';
                sum = sum + ZNP2LgBIG *cifang (Kq9h4f1, vMCd7OtakPL - (699 - 698) - BUDHaf);
            }
            else {
                if ('A' <= GbG0Pe5zVSfv[BUDHaf] && 'Z' >= GbG0Pe5zVSfv[BUDHaf]) {
                    int ZNP2LgBIG;
                    ZNP2LgBIG = GbG0Pe5zVSfv[BUDHaf] - 'A' + (682 - 672);
                    sum = sum + ZNP2LgBIG *cifang (Kq9h4f1, vMCd7OtakPL - (864 - 863) - BUDHaf);
                }
                else {
                    if (GbG0Pe5zVSfv[BUDHaf] >= 'a' && GbG0Pe5zVSfv[BUDHaf] <= 'z') {
                        int ZNP2LgBIG = GbG0Pe5zVSfv[BUDHaf] - 'a' + (67 - 57);
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
                        }
                        sum = sum + ZNP2LgBIG *cifang (Kq9h4f1, vMCd7OtakPL - 1 - BUDHaf);
                    };
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            BUDHaf++;
        };
    }
    cin >> TRP01utyoC;
    {
        int d = (871 - 871);
        while (d <= (1865 - 866)) {
            v4O15fLbQH[d] = sum % TRP01utyoC;
            sum = (sum - v4O15fLbQH[d]) / TRP01utyoC;
            if (sum < TRP01utyoC) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (sum > (425 - 425)) {
                    if (sum > (742 - 732))
                        cout << c[sum - (265 - 255)];
                    else
                        cout << sum;
                    for (int f = d;
                    f >= (624 - 624); f = f - 1) {
                        if (v4O15fLbQH[f] >= (516 - 506)) {
                            cout << c[v4O15fLbQH[f] - (744 - 734)];
                        }
                        else {
                            cout << v4O15fLbQH[f];
                        };
                    }
                    break;
                }
                else {
                    for (int f = d;
                    f >= 0; f--) {
                        if (v4O15fLbQH[f] >= (340 - 330)) {
                            cout << c[v4O15fLbQH[f] - 10];
                        }
                        else {
                            cout << v4O15fLbQH[f];
                        };
                    }
                    break;
                };
            }
            d++;
        };
    }
    return 0;
}

