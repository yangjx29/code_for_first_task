int main () {
    int tZn2cJHdB [13] = {0, (626 - 595), 0, (147 - 116), 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int RT8A6OWGK;
    int ph6fZvciE, gKCxcMGnift, QUTiKSIx, kWIY0Pp, txH3EOCj, d2, TgEjJ5oh = 0;
    cin >> ph6fZvciE >> gKCxcMGnift >> QUTiKSIx;
    cin >> kWIY0Pp >> txH3EOCj >> d2;
    if (kWIY0Pp > ph6fZvciE) {
        cout << TgEjJ5oh +1 + 30;
        if ((!(0 != ph6fZvciE % 4) && !(0 == ph6fZvciE % (326 - 226))) || (!(0 != ph6fZvciE % 400))) {
            tZn2cJHdB[2] = 29;
        }
        else
            tZn2cJHdB[2] = (816 - 788);
        {
            RT8A6OWGK = gKCxcMGnift + 1;
            while (12 > RT8A6OWGK) {
                TgEjJ5oh = TgEjJ5oh +tZn2cJHdB[RT8A6OWGK];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                RT8A6OWGK = RT8A6OWGK +1;
            };
        }
        TgEjJ5oh = TgEjJ5oh +tZn2cJHdB[gKCxcMGnift] - QUTiKSIx;
        if ((!(0 != kWIY0Pp % 4) && !(0 == kWIY0Pp % (1092 - 992))) || (!(0 != kWIY0Pp % 400))) {
            tZn2cJHdB[2] = 29;
        }
        else
            tZn2cJHdB[2] = 28;
        {
            RT8A6OWGK = 1;
            while (txH3EOCj > RT8A6OWGK) {
                TgEjJ5oh = TgEjJ5oh +tZn2cJHdB[RT8A6OWGK];
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
                RT8A6OWGK = RT8A6OWGK +1;
            };
        }
        TgEjJ5oh = TgEjJ5oh +d2;
        for (RT8A6OWGK = ph6fZvciE + 1; kWIY0Pp > RT8A6OWGK; RT8A6OWGK = RT8A6OWGK +1) {
            if ((!(0 != RT8A6OWGK % 4) && RT8A6OWGK % 100 != 0) || (RT8A6OWGK % 400 == 0))
                TgEjJ5oh = TgEjJ5oh +366;
            else
                TgEjJ5oh = TgEjJ5oh +365;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    if (ph6fZvciE == kWIY0Pp) {
        if ((kWIY0Pp % 4 == 0 && kWIY0Pp % 100 != 0) || (kWIY0Pp % 400 == 0)) {
            tZn2cJHdB[2] = 29;
        }
        else
            tZn2cJHdB[2] = 28;
        if (gKCxcMGnift == txH3EOCj) {
            TgEjJ5oh = d2 - QUTiKSIx;
            cout << TgEjJ5oh;
        }
        else {
            {
                RT8A6OWGK = gKCxcMGnift + 1;
                while (RT8A6OWGK < txH3EOCj) {
                    TgEjJ5oh = TgEjJ5oh +tZn2cJHdB[RT8A6OWGK];
                    RT8A6OWGK = RT8A6OWGK +1;
                };
            }
            TgEjJ5oh = TgEjJ5oh +tZn2cJHdB[gKCxcMGnift] - QUTiKSIx +d2;
            cout << TgEjJ5oh;
        };
    }
    return 0;
}

