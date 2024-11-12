int main () {
    int HgfmGj, qvgZnWPBLwJ [(442 - 242)], MOSXibd [(319 - 119)], xqvLmF [200], i, us2uzbnGdDO, h [200], R2tzBG [200], bcv0abeIwzn = (757 - 756), uUQlzMFaDHA, VVEF0wnR;
    double  t42SuD [200], RXTJZz;
    cin >> HgfmGj;
    {
        i = 220 - 219;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (HgfmGj >= i) {
            cin >> qvgZnWPBLwJ[i] >> MOSXibd[i] >> xqvLmF[i];
            i = i + 1;
        };
    }
    for (i = (431 - 430); HgfmGj -(103 - 102) >= i; i++) {
        us2uzbnGdDO = 781 - 780;
        while (HgfmGj >= us2uzbnGdDO) {
            t42SuD[bcv0abeIwzn] = sqrt ((qvgZnWPBLwJ[i] - qvgZnWPBLwJ[us2uzbnGdDO]) * (qvgZnWPBLwJ[i] - qvgZnWPBLwJ[us2uzbnGdDO]) + (MOSXibd[i] - MOSXibd[us2uzbnGdDO]) * (MOSXibd[i] - MOSXibd[us2uzbnGdDO]) + (xqvLmF[i] - xqvLmF[us2uzbnGdDO]) * (xqvLmF[i] - xqvLmF[us2uzbnGdDO]));
            h[bcv0abeIwzn] = i;
            R2tzBG[bcv0abeIwzn] = us2uzbnGdDO;
            us2uzbnGdDO++;
            bcv0abeIwzn++;
        };
    }
    {
        i = 98 - 97;
        while (i <= HgfmGj *(HgfmGj -1) / (942 - 940) - 1) {
            {
                us2uzbnGdDO = 1;
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
                while (us2uzbnGdDO <= HgfmGj *(HgfmGj -1) / 2 - i) {
                    if (t42SuD[us2uzbnGdDO] < t42SuD[us2uzbnGdDO + 1]) {
                        RXTJZz = t42SuD[us2uzbnGdDO];
                        t42SuD[us2uzbnGdDO] = t42SuD[us2uzbnGdDO + 1];
                        t42SuD[us2uzbnGdDO + 1] = RXTJZz;
                        VVEF0wnR = h[us2uzbnGdDO];
                        h[us2uzbnGdDO] = h[us2uzbnGdDO + 1];
                        h[us2uzbnGdDO + 1] = VVEF0wnR;
                        VVEF0wnR = R2tzBG[us2uzbnGdDO];
                        R2tzBG[us2uzbnGdDO] = R2tzBG[us2uzbnGdDO + 1];
                        R2tzBG[us2uzbnGdDO + 1] = VVEF0wnR;
                    }
                    us2uzbnGdDO++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= HgfmGj *(HgfmGj -1) / 2) {
            cout << "(" << qvgZnWPBLwJ[h[i]] << "," << MOSXibd[h[i]] << "," << xqvLmF[h[i]] << ")-(" << qvgZnWPBLwJ[R2tzBG[i]] << "," << MOSXibd[R2tzBG[i]] << "," << xqvLmF[R2tzBG[i]] << ")=";
            printf ("%.2f\n", t42SuD[i]);
            i++;
        };
    }
    cin >> uUQlzMFaDHA;
    return 0;
}

