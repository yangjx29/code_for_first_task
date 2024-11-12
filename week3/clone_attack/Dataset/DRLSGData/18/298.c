int main () {
    int wjf3eiry;
    int G8wTbcYk6DVS;
    int GHj3P402TJ;
    int i;
    int sbTO6gM;
    cin >> sbTO6gM;
    GHj3P402TJ = 0;
    {
        int EfUX0HLov;
        EfUX0HLov = 1;
        while (EfUX0HLov <= sbTO6gM) {
            int a [sbTO6gM + 1] [sbTO6gM + 1];
            {
                i = 0;
                for (; sbTO6gM > i;) {
                    {
                        G8wTbcYk6DVS = 0;
                        for (; G8wTbcYk6DVS < sbTO6gM;) {
                            cin >> a[i][G8wTbcYk6DVS];
                            G8wTbcYk6DVS = G8wTbcYk6DVS +1;
                        }
                    }
                    i = i + 1;
                }
            }
            a[sbTO6gM][sbTO6gM] = a[0][0];
            {
                i = 1;
                while (i < sbTO6gM) {
                    a[i][sbTO6gM] = a[i][0];
                    i = i + 1;
                }
            }
            {
                G8wTbcYk6DVS = 1;
                while (G8wTbcYk6DVS < sbTO6gM) {
                    a[sbTO6gM][G8wTbcYk6DVS] = a[0][G8wTbcYk6DVS];
                    G8wTbcYk6DVS++;
                }
            }
            EfUX0HLov++;
            GHj3P402TJ = 0;
            {
                int bHwJfyu7;
                bHwJfyu7 = 1;
                while (bHwJfyu7 < sbTO6gM) {
                    {
                        i = bHwJfyu7;
                        while (sbTO6gM >= i) {
                            wjf3eiry = a[i][bHwJfyu7];
                            {
                                G8wTbcYk6DVS = bHwJfyu7 + 1;
                                for (; sbTO6gM >= G8wTbcYk6DVS;) {
                                    if (a[i][G8wTbcYk6DVS] < wjf3eiry)
                                        wjf3eiry = a[i][G8wTbcYk6DVS];
                                    G8wTbcYk6DVS++;
                                }
                            }
                            {
                                G8wTbcYk6DVS = bHwJfyu7;
                                while (G8wTbcYk6DVS <= sbTO6gM) {
                                    a[i][G8wTbcYk6DVS] -= wjf3eiry;
                                    G8wTbcYk6DVS++;
                                }
                            }
                            i = i + 1;
                        }
                    }
                    {
                        G8wTbcYk6DVS = bHwJfyu7;
                        while (G8wTbcYk6DVS <= sbTO6gM) {
                            wjf3eiry = a[bHwJfyu7][G8wTbcYk6DVS];
                            {
                                i = bHwJfyu7 + 1;
                                while (i <= sbTO6gM) {
                                    if (wjf3eiry > a[i][G8wTbcYk6DVS])
                                        wjf3eiry = a[i][G8wTbcYk6DVS];
                                    i = i + 1;
                                }
                            }
                            {
                                i = bHwJfyu7;
                                while (i <= sbTO6gM) {
                                    a[i][G8wTbcYk6DVS] -= wjf3eiry;
                                    i = i + 1;
                                }
                            }
                            G8wTbcYk6DVS++;
                        }
                    }
                    GHj3P402TJ += a[bHwJfyu7][bHwJfyu7];
                    bHwJfyu7++;
                }
            }
            cout << GHj3P402TJ << endl;
        }
    }
    cin >> i;
    return 0;
}

