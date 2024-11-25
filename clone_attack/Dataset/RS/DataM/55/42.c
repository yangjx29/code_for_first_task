long  times (int CmdCEe, int uXeWKykfYF) {
    long  sum = (698 - 697);
    for (int a6eyXMv9C = 1;
    uXeWKykfYF >= a6eyXMv9C; a6eyXMv9C++) {
        sum = sum * (CmdCEe);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return sum;
}

long  Qf9VGsKnPe (char uXeWKykfYF [1000], int CmdCEe) {
    long  out = 0;
    int RybXSdO;
    RybXSdO = strlen (uXeWKykfYF);
    {
        int a6eyXMv9C = RybXSdO -1;
        while (0 <= a6eyXMv9C) {
            if (57 >= uXeWKykfYF[a6eyXMv9C]) {
                int gAtHBOw;
                gAtHBOw = (int) uXeWKykfYF[a6eyXMv9C] - 48;
                out = out + ((long ) gAtHBOw) * times (CmdCEe, (RybXSdO -a6eyXMv9C - 1));
            }
            else {
                if (90 >= uXeWKykfYF[a6eyXMv9C]) {
                    int gAtHBOw;
                    gAtHBOw = (int) uXeWKykfYF[a6eyXMv9C] - 55;
                    out = out + ((long ) gAtHBOw) * times (CmdCEe, (RybXSdO -a6eyXMv9C - 1));
                }
                else {
                    int gAtHBOw;
                    gAtHBOw = (int) uXeWKykfYF[a6eyXMv9C] - 87;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    out += ((long ) gAtHBOw) * times (CmdCEe, (RybXSdO -a6eyXMv9C - 1));
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            a6eyXMv9C--;
        };
    }
    return out;
}

int main () {
    int RybXSdO;
    char on [1000];
    long  out;
    char uXeWKykfYF [1000];
    int CmdCEe, b;
    int s4eP8nL6jyw;
    cin >> CmdCEe >> uXeWKykfYF >> b;
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
    out = Qf9VGsKnPe (uXeWKykfYF, CmdCEe);
    {
        s4eP8nL6jyw = 1;
        while (out / (long ) b >= times (b, s4eP8nL6jyw - 1)) {
            s4eP8nL6jyw++;
        };
    }
    for (int a6eyXMv9C = 0;
    a6eyXMv9C < s4eP8nL6jyw; a6eyXMv9C++) {
        int gAtHBOw;
        {
            gAtHBOw = 0;
            while (out - times (b, (s4eP8nL6jyw - 1 - a6eyXMv9C)) >= 0) {
                gAtHBOw++;
                out = out - times (b, (s4eP8nL6jyw - 1 - a6eyXMv9C));
            };
        }
        if (gAtHBOw <= 9) {
            on[a6eyXMv9C] = (char) (gAtHBOw + 48);
        }
        else {
            on[a6eyXMv9C] = (char) (gAtHBOw + 55);
        };
    }
    on[s4eP8nL6jyw] = '\0';
    cout << on;
    RybXSdO = strlen (uXeWKykfYF);
}

