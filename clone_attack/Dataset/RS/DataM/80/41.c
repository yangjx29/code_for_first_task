int main () {
    int year = 0;
    int day;
    day = 0;
    int t = 0;
    int stm;
    stm = (896 - 896);
    int U8pko0EYxU [13] = {(718 - 718), 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int yearr [(476 - 463)] = {(764 - 764), (788 - 757), 29, 31, (85 - 55), 31, (741 - 711), 31, 31, (972 - 942), 31, (328 - 298), 31};
    int sty;
    sty = (264 - 264);
    int str;
    str = (918 - 918);
    int eny;
    eny = 0;
    int enm = 0;
    int enr;
    enr = 0;
    int i = 0;
    int j;
    j = 0;
    int mon = 0;
    cin >> sty;
    cin >> stm;
    cin >> str;
    cin >> eny;
    cin >> enm;
    cin >> enr;
    for (i = 0; eny - sty >= i; i++) {
        year = sty + i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((!(0 != year % 4) && !(0 == year % (828 - 728))) || (!(0 != year % 400))) {
            if (!(sty != year) && !(eny == year)) {
                for (t = stm; 12 >= t; t = t + 1) {
                    if (!(stm != t))
                        day = day + yearr[t] - str;
                    else
                        day = day + yearr[t];
                };
            }
            if (!(eny != year) && !(sty == year)) {
                for (t = 1; enm >= t; t = t + 1) {
                    if (!(enm != t))
                        day = day + enr;
                    else
                        day = day + yearr[t];
                };
            }
            if (!(eny == year) && !(sty == year)) {
                t = 1;
                while (12 >= t) {
                    day = day + yearr[t];
                    t = t + 1;
                };
            }
            if (!(eny != year) && !(sty != year)) {
                if (!(enm != stm))
                    day = day + enr - str;
                else {
                    t = stm;
                    while (enm >= t) {
                        if (!(stm != t))
                            day = day + yearr[t] - str;
                        else {
                            if (!(enm != t)) {
                                day = day + enr;
                            }
                            else {
                                if (t != stm && t != enm)
                                    day = day + yearr[t];
                            };
                        }
                        t++;
                    };
                };
            };
        }
        else {
            if (year == sty && year != eny) {
                t = stm;
                while (t <= 12) {
                    if (t == stm)
                        day = day + U8pko0EYxU[t] - str;
                    else
                        day = day + U8pko0EYxU[t];
                    t++;
                };
            }
            if (year == eny && year != sty) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (t = 1; t <= enm; t = t + 1) {
                    if (t == enm)
                        day = day + enr;
                    else
                        day = day + U8pko0EYxU[t];
                };
            }
            if (year != eny && year != sty) {
                for (t = 1; t <= 12; t++)
                    day = day + U8pko0EYxU[t];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            if (year == eny && year == sty) {
                if (stm == enm)
                    day = day + enr - str;
                else {
                    t = stm;
                    while (t <= enm) {
                        if (t == stm)
                            day = day + U8pko0EYxU[t] - str;
                        else {
                            if (t == enm) {
                                day = day + enr;
                            }
                            else {
                                if (t != stm && t != enm)
                                    day = day + U8pko0EYxU[t];
                            };
                        }
                        t++;
                    };
                };
            };
        };
    }
    cout << day;
    cin >> i;
    return 0;
}

