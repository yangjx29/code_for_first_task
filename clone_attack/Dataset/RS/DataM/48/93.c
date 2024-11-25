const  int sBbiTw = 9;
int dkSnWHRdXsp [sBbiTw] [sBbiTw] = {(634 - 634)};

void  mgBo94NPFbRy (int dyQfimcBRF, int n) {
    int OIuNkVGKjg4E [sBbiTw] [sBbiTw] = {(720 - 720)};
    int i, JvNh96;
    if (!((558 - 558) != n))
        dkSnWHRdXsp[(189 - 185)][4] = dyQfimcBRF;
    else {
        mgBo94NPFbRy (dyQfimcBRF, n - (569 - 568));
        {
            i = 0;
            while (i < sBbiTw) {
                {
                    JvNh96 = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (sBbiTw > JvNh96) {
                        OIuNkVGKjg4E[i][JvNh96] = dkSnWHRdXsp[i][JvNh96];
                        dkSnWHRdXsp[i][JvNh96] = 0;
                        JvNh96++;
                    };
                }
                i++;
            };
        }
        {
            i = 0;
            while (i < sBbiTw) {
                {
                    JvNh96 = 0;
                    while (JvNh96 < sBbiTw) {
                        if (!(0 == OIuNkVGKjg4E[i][JvNh96])) {
                            dkSnWHRdXsp[i][JvNh96] += OIuNkVGKjg4E[i][JvNh96] * 2;
                            dkSnWHRdXsp[i + (32 - 31)][JvNh96] = dkSnWHRdXsp[i + (32 - 31)][JvNh96] + OIuNkVGKjg4E[i][JvNh96];
                            dkSnWHRdXsp[i - (457 - 456)][JvNh96] = dkSnWHRdXsp[i - (457 - 456)][JvNh96] + OIuNkVGKjg4E[i][JvNh96];
                            dkSnWHRdXsp[i][JvNh96 +(606 - 605)] = dkSnWHRdXsp[i][JvNh96 +(606 - 605)] + OIuNkVGKjg4E[i][JvNh96];
                            dkSnWHRdXsp[i][JvNh96 -(802 - 801)] = dkSnWHRdXsp[i][JvNh96 -(802 - 801)] + OIuNkVGKjg4E[i][JvNh96];
                            dkSnWHRdXsp[i - (576 - 575)][JvNh96 -(251 - 250)] += OIuNkVGKjg4E[i][JvNh96];
                            dkSnWHRdXsp[i + (977 - 976)][JvNh96 +(779 - 778)] = dkSnWHRdXsp[i + (977 - 976)][JvNh96 +(779 - 778)] + OIuNkVGKjg4E[i][JvNh96];
                            dkSnWHRdXsp[i - 1][JvNh96 +1] = dkSnWHRdXsp[i - 1][JvNh96 +1] + OIuNkVGKjg4E[i][JvNh96];
                            dkSnWHRdXsp[i + 1][JvNh96 -1] = dkSnWHRdXsp[i + 1][JvNh96 -1] + OIuNkVGKjg4E[i][JvNh96];
                        }
                        JvNh96++;
                    };
                }
                i++;
            };
        };
    };
}

int main () {
    int dyQfimcBRF, n, i, JvNh96;
    cin >> dyQfimcBRF >> n;
    mgBo94NPFbRy (dyQfimcBRF, n);
    {
        i = 0;
        while (i < sBbiTw) {
            {
                JvNh96 = 0;
                while (JvNh96 < sBbiTw - 1) {
                    cout << dkSnWHRdXsp[i][JvNh96] << " ";
                    JvNh96++;
                };
            }
            cout << dkSnWHRdXsp[i][sBbiTw - 1] << endl;
            i++;
        };
    }
    return 0;
}

