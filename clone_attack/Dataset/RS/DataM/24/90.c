int main () {
    int g2aCApPYZ;
    char D8buV3LSor [N *31];
    gets (D8buV3LSor);
    int len, xTymKR4 [N], max_wordlen, b1nm6wd4c09, max = (913 - 913), min = (563 - 563);
    int mFsAv9jf [N], aLjrkzHwg = (486 - 485);
    len = strlen (D8buV3LSor);
    D8buV3LSor[len] = ' ';
    D8buV3LSor[len + (321 - 320)] = '\0';
    len = len + 1;
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
    mFsAv9jf[0] = 0;
    for (g2aCApPYZ = 0; g2aCApPYZ < len; g2aCApPYZ = g2aCApPYZ + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (D8buV3LSor[g2aCApPYZ] == ' ') {
            mFsAv9jf[aLjrkzHwg] = g2aCApPYZ;
            mFsAv9jf[aLjrkzHwg + 1] = g2aCApPYZ + 1;
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
            xTymKR4[(aLjrkzHwg - 1) / (828 - 826)] = mFsAv9jf[aLjrkzHwg] - mFsAv9jf[aLjrkzHwg - 1];
            aLjrkzHwg = aLjrkzHwg + (879 - 877);
        }
        else {
            if (D8buV3LSor[g2aCApPYZ] == ',') {
                mFsAv9jf[aLjrkzHwg] = g2aCApPYZ;
                mFsAv9jf[aLjrkzHwg + 1] = g2aCApPYZ + 2;
                xTymKR4[(aLjrkzHwg - 1) / 2] = mFsAv9jf[aLjrkzHwg] - mFsAv9jf[aLjrkzHwg - 1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                aLjrkzHwg = aLjrkzHwg + 2;
                g2aCApPYZ = g2aCApPYZ + 1;
            };
        };
    }
    max_wordlen = xTymKR4[0];
    b1nm6wd4c09 = xTymKR4[0];
    {
        g2aCApPYZ = 0;
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
        while (g2aCApPYZ <= (aLjrkzHwg - 3) / 2) {
            if (max_wordlen < xTymKR4[g2aCApPYZ]) {
                max_wordlen = xTymKR4[g2aCApPYZ];
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
                max = g2aCApPYZ;
            }
            if (b1nm6wd4c09 > xTymKR4[g2aCApPYZ]) {
                b1nm6wd4c09 = xTymKR4[g2aCApPYZ];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                min = g2aCApPYZ;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            g2aCApPYZ = g2aCApPYZ + 1;
        };
    }
    for (g2aCApPYZ = mFsAv9jf[max * 2]; g2aCApPYZ < mFsAv9jf[max * 2 + 1]; g2aCApPYZ = g2aCApPYZ + 1) {
        printf ("%c", D8buV3LSor[g2aCApPYZ]);
    }
    for (g2aCApPYZ = mFsAv9jf[min * 2]; g2aCApPYZ < mFsAv9jf[min * 2 + 1]; g2aCApPYZ++) {
        printf ("%c", D8buV3LSor[g2aCApPYZ]);
    }
    return 0;
}

