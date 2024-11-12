int main () {
    char YhzU5aEGMcfF [200] [200];
    int JVvqk189;
    int mqf3lmwkEC5;
    int B48tTSyYC;
    int d45xiW8PraF6;
    int eGqdX5CvYrH;
    int LG2ZHz7;
    scanf ("%d", &B48tTSyYC);
    for (JVvqk189 = (243 - 243); B48tTSyYC > JVvqk189; JVvqk189 = JVvqk189 +1) {
        mqf3lmwkEC5 = (786 - 785);
        while (B48tTSyYC +2 > mqf3lmwkEC5) {
            scanf ("%c", &YhzU5aEGMcfF[JVvqk189][mqf3lmwkEC5]);
            mqf3lmwkEC5 = mqf3lmwkEC5 + 1;
        }
    }
    scanf ("%d", &d45xiW8PraF6);
    for (eGqdX5CvYrH = 1; d45xiW8PraF6 > eGqdX5CvYrH; eGqdX5CvYrH = eGqdX5CvYrH + 1) {
        {
            {
                if (0) {
                    return 0;
                }
            }
            JVvqk189 = 0;
            while (B48tTSyYC > JVvqk189) {
                for (mqf3lmwkEC5 = 1; B48tTSyYC +2 > mqf3lmwkEC5; mqf3lmwkEC5 = mqf3lmwkEC5 + 1) {
                    if (!('@' != YhzU5aEGMcfF[JVvqk189][mqf3lmwkEC5])) {
                        if (YhzU5aEGMcfF[JVvqk189 -1][mqf3lmwkEC5] == '.') {
                            YhzU5aEGMcfF[JVvqk189 -1][mqf3lmwkEC5] = '*';
                        }
                        if (!('.' != YhzU5aEGMcfF[JVvqk189 +1][mqf3lmwkEC5])) {
                            YhzU5aEGMcfF[JVvqk189 +1][mqf3lmwkEC5] = '*';
                        }
                        if (!('.' != YhzU5aEGMcfF[JVvqk189][mqf3lmwkEC5 - 1])) {
                            YhzU5aEGMcfF[JVvqk189][mqf3lmwkEC5 - 1] = '*';
                        }
                        if (YhzU5aEGMcfF[JVvqk189][mqf3lmwkEC5 + 1] == '.') {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            YhzU5aEGMcfF[JVvqk189][mqf3lmwkEC5 + 1] = '*';
                        }
                    }
                }
                JVvqk189 = JVvqk189 +1;
            }
        }
        for (JVvqk189 = 0; JVvqk189 < B48tTSyYC; JVvqk189++) {
            mqf3lmwkEC5 = 1;
            for (; mqf3lmwkEC5 < B48tTSyYC +2;) {
                if (YhzU5aEGMcfF[JVvqk189][mqf3lmwkEC5] == '*') {
                    YhzU5aEGMcfF[JVvqk189][mqf3lmwkEC5] = '@';
                }
                mqf3lmwkEC5 = mqf3lmwkEC5 + 1;
            }
        }
    }
    LG2ZHz7 = 0;
    {
        JVvqk189 = 0;
        for (; JVvqk189 < B48tTSyYC;) {
            for (mqf3lmwkEC5 = 1; mqf3lmwkEC5 < B48tTSyYC +2; mqf3lmwkEC5 = mqf3lmwkEC5 + 1) {
                if (YhzU5aEGMcfF[JVvqk189][mqf3lmwkEC5] == '@') {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    LG2ZHz7 = LG2ZHz7 +1;
                }
            }
            JVvqk189 = JVvqk189 +1;
        }
    }
    printf ("%d", LG2ZHz7);
    return 0;
}

