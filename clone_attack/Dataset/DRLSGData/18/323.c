int main () {
    int jzjwcTPX = (769 - 769), i = (470 - 470), UIqpDPKxEUC = (150 - 150), wylxG9c = (64 - 64), btFOT8VKxv7 = (199 - 199), n1 = 0, sum = 0;
    int s [jzjwcTPX + (125 - 124)] [jzjwcTPX + (51 - 50)];
    cin >> jzjwcTPX;
    {
        i = (643 - 642);
        for (; i <= jzjwcTPX;) {
            {
                wylxG9c = 0;
                while (jzjwcTPX > wylxG9c) {
                    {
                        btFOT8VKxv7 = 0;
                        while (btFOT8VKxv7 < jzjwcTPX) {
                            cin >> s[wylxG9c][btFOT8VKxv7];
                            btFOT8VKxv7 = btFOT8VKxv7 + 1;
                        }
                    }
                    wylxG9c = wylxG9c + 1;
                }
            }
            i = i + 1;
            sum = 0;
            {
                n1 = jzjwcTPX;
                for (; (660 - 658) <= n1;) {
                    {
                        UIqpDPKxEUC = 0;
                        for (; n1 - (937 - 936) >= UIqpDPKxEUC;) {
                            s[UIqpDPKxEUC][n1] = s[UIqpDPKxEUC][0];
                            {
                                btFOT8VKxv7 = 0;
                                for (; n1 - 1 >= btFOT8VKxv7;) {
                                    if (s[UIqpDPKxEUC][btFOT8VKxv7] < s[UIqpDPKxEUC][n1])
                                        s[UIqpDPKxEUC][n1] = s[UIqpDPKxEUC][btFOT8VKxv7];
                                    btFOT8VKxv7 = btFOT8VKxv7 + 1;
                                }
                            }
                            UIqpDPKxEUC = UIqpDPKxEUC +1;
                        }
                    }
                    {
                        UIqpDPKxEUC = 0;
                        for (; n1 - 1 >= UIqpDPKxEUC;) {
                            {
                                btFOT8VKxv7 = 0;
                                while (btFOT8VKxv7 <= n1 - 1) {
                                    s[UIqpDPKxEUC][btFOT8VKxv7] = s[UIqpDPKxEUC][btFOT8VKxv7] - s[UIqpDPKxEUC][n1];
                                    btFOT8VKxv7 = btFOT8VKxv7 + 1;
                                }
                            }
                            UIqpDPKxEUC = UIqpDPKxEUC +1;
                        }
                    }
                    {
                        UIqpDPKxEUC = 0;
                        while (UIqpDPKxEUC <= jzjwcTPX - 1) {
                            s[n1][UIqpDPKxEUC] = s[0][UIqpDPKxEUC];
                            {
                                btFOT8VKxv7 = 0;
                                while (btFOT8VKxv7 <= n1 - 1) {
                                    if (s[btFOT8VKxv7][UIqpDPKxEUC] < s[n1][UIqpDPKxEUC])
                                        s[n1][UIqpDPKxEUC] = s[btFOT8VKxv7][UIqpDPKxEUC];
                                    btFOT8VKxv7++;
                                }
                            }
                            UIqpDPKxEUC = UIqpDPKxEUC +1;
                        }
                    }
                    {
                        UIqpDPKxEUC = 0;
                        for (; UIqpDPKxEUC <= n1 - 1;) {
                            {
                                btFOT8VKxv7 = 0;
                                while (btFOT8VKxv7 <= n1 - 1) {
                                    s[btFOT8VKxv7][UIqpDPKxEUC] = s[btFOT8VKxv7][UIqpDPKxEUC] - s[n1][UIqpDPKxEUC];
                                    btFOT8VKxv7++;
                                }
                            }
                            UIqpDPKxEUC = UIqpDPKxEUC +1;
                        }
                    }
                    sum = sum + s[1][1];
                    if (n1 > 2) {
                        {
                            UIqpDPKxEUC = 2;
                            while (UIqpDPKxEUC <= n1 - 1) {
                                s[0][UIqpDPKxEUC -1] = s[0][UIqpDPKxEUC];
                                s[UIqpDPKxEUC -1][0] = s[UIqpDPKxEUC][0];
                                UIqpDPKxEUC++;
                            }
                        }
                        {
                            UIqpDPKxEUC = 1;
                            while (UIqpDPKxEUC <= n1 - 2) {
                                {
                                    btFOT8VKxv7 = 1;
                                    while (btFOT8VKxv7 <= n1 - 2) {
                                        s[UIqpDPKxEUC][btFOT8VKxv7] = s[UIqpDPKxEUC +1][btFOT8VKxv7 + 1];
                                        btFOT8VKxv7++;
                                    }
                                }
                                UIqpDPKxEUC++;
                            }
                        }
                    }
                    n1 = n1 - 1;
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}

