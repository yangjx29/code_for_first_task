int main () {
    char yjaDetT1Cw [100];
    int IL3VtUS, e3SgICy, zY4gv7twV0, s0gQabyR15wT = 0;
    int EN8Pft [51] [2];
    int F27Z0A;
    F27Z0A = 0;
    int T6uMPbRaO;
    cin.getline (yjaDetT1Cw, 101);
    for (; true;) {
        if (!('\0' != yjaDetT1Cw[F27Z0A]))
            break;
        F27Z0A++;
    }
    for (IL3VtUS = 0; F27Z0A -1 > IL3VtUS; IL3VtUS++) {
        if (yjaDetT1Cw[0] == '\0')
            break;
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
        if (yjaDetT1Cw[IL3VtUS] == yjaDetT1Cw[0]) {
            for (e3SgICy = IL3VtUS +1; F27Z0A > e3SgICy; e3SgICy++) {
                if (yjaDetT1Cw[e3SgICy] != yjaDetT1Cw[0]) {
                    for (zY4gv7twV0 = e3SgICy; 0 <= zY4gv7twV0; zY4gv7twV0--) {
                        if (yjaDetT1Cw[zY4gv7twV0] == yjaDetT1Cw[0])
                            break;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    yjaDetT1Cw[e3SgICy] = yjaDetT1Cw[zY4gv7twV0] = '\0';
                    EN8Pft[s0gQabyR15wT][0] = zY4gv7twV0;
                    EN8Pft[s0gQabyR15wT++][1] = e3SgICy;
                };
            };
        };
    }
    {
        IL3VtUS = 0;
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
        while (IL3VtUS < s0gQabyR15wT - 1) {
            for (e3SgICy = IL3VtUS +1; e3SgICy < s0gQabyR15wT; e3SgICy++) {
                if (EN8Pft[IL3VtUS][1] > EN8Pft[e3SgICy][1]) {
                    T6uMPbRaO = EN8Pft[IL3VtUS][1];
                    EN8Pft[e3SgICy][1] = EN8Pft[IL3VtUS][1];
                    EN8Pft[IL3VtUS][1] = T6uMPbRaO;
                    T6uMPbRaO = EN8Pft[IL3VtUS][0];
                    EN8Pft[e3SgICy][0] = EN8Pft[IL3VtUS][0];
                    EN8Pft[IL3VtUS][0] = T6uMPbRaO;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            IL3VtUS = IL3VtUS +1;
        };
    }
    for (IL3VtUS = 0; IL3VtUS < s0gQabyR15wT; IL3VtUS++) {
        cout << EN8Pft[IL3VtUS][0] << " " << EN8Pft[IL3VtUS][1] << endl;
    }
    return 0;
}

