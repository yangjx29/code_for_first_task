int main () {
    int vtfk8B2CcH = (329 - 329), i = (802 - 802), j = (122 - 122), obqw840onLK = 0, l1 = 0, OKo72zUfHXZu = 0, l2 = 0, s = 0;
    int wli39Dxzao [vtfk8B2CcH] [vtfk8B2CcH];
    cin >> vtfk8B2CcH;
    {
        i = 0;
        while (vtfk8B2CcH - (566 - 565) >= i) {
            {
                j = 0;
                while (vtfk8B2CcH - (466 - 465) >= j) {
                    cin >> wli39Dxzao[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (vtfk8B2CcH - (292 - 291) >= i) {
            for (j = 0; vtfk8B2CcH - 1 >= j; j = j + 1) {
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
                if (wli39Dxzao[i][j] == 0) {
                    obqw840onLK = i + 1;
                    l1 = j + 1;
                    goto loop;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
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
loop :
    for (i = vtfk8B2CcH - 1; i >= 0; i = i - 1) {
        for (j = vtfk8B2CcH - 1; j >= 0; j = j - 1) {
            if (wli39Dxzao[i][j] == 0) {
                l2 = j + 1;
                OKo72zUfHXZu = i + 1;
                goto loop2;
            };
        };
    }
loop2 :
    s = (OKo72zUfHXZu -obqw840onLK - 1) * (l2 - l1 - 1);
    cout << s;
    return 0;
}

