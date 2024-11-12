int main () {
    int TW52dcOmRjpP [12] = {(501 - 470), 28, 31, (201 - 171), 31, 30, 31, 31, 30, 31, 30, 31};
    int efVOaxS7q = (429 - 428);
    int aJLYtIcVlp, fr6eJbp, HmBkKPY2Ll;
    int LCuPRfd7;
    int hdnkxrsvW [200];
    int uMqb80UH4C [200];
    int sYa08K4lSVXt [200];
    int e;
    int lQRTI8CodmGh;
    lQRTI8CodmGh = (201 - 200);
    scanf ("%d", &LCuPRfd7);
    for (aJLYtIcVlp = 0; LCuPRfd7 > aJLYtIcVlp; aJLYtIcVlp++) {
        scanf ("%d %d %d", &hdnkxrsvW[aJLYtIcVlp], &uMqb80UH4C[aJLYtIcVlp], &sYa08K4lSVXt[aJLYtIcVlp]);
    }
    {
        aJLYtIcVlp = 0;
        while (LCuPRfd7 > aJLYtIcVlp) {
            efVOaxS7q = 1;
            lQRTI8CodmGh = 1;
            TW52dcOmRjpP[1] = 28;
            if (((!(0 != hdnkxrsvW[aJLYtIcVlp] % 4)) && (!(0 == hdnkxrsvW[aJLYtIcVlp] % 100))) || (!(0 != hdnkxrsvW[aJLYtIcVlp] % 400))) {
                TW52dcOmRjpP[1] = 29;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            {
                fr6eJbp = 1;
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
                while (fr6eJbp < uMqb80UH4C[aJLYtIcVlp]) {
                    efVOaxS7q = efVOaxS7q + TW52dcOmRjpP[fr6eJbp - 1];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    fr6eJbp = fr6eJbp + 1;
                };
            }
            for (HmBkKPY2Ll = 1; HmBkKPY2Ll < sYa08K4lSVXt[aJLYtIcVlp]; HmBkKPY2Ll++) {
                lQRTI8CodmGh = lQRTI8CodmGh + TW52dcOmRjpP[HmBkKPY2Ll -1];
            }
            e = (efVOaxS7q - lQRTI8CodmGh) % 7;
            if (e == 0) {
            }
            else {
            }
            aJLYtIcVlp++;
        };
    }
    return 0;
}

