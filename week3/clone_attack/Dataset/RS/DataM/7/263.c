int main () {
    char str [257 * 2];
    char N8Hb40N5KDql [257];
    char PzHyxGAEvt [257];
    int Z34Ee9dIU7mG, ZfLCGNbRB, P7Xfip1, y3w7WxoJ = (839 - 839), KwUTAnV3vKW = 0;
    gets (str);
    gets (N8Hb40N5KDql);
    gets (PzHyxGAEvt);
    {
        Z34Ee9dIU7mG = 0;
        while (!(0 == str[Z34Ee9dIU7mG])) {
            if (!(N8Hb40N5KDql[0] != str[Z34Ee9dIU7mG])) {
                {
                    ZfLCGNbRB = 1;
                    P7Xfip1 = 381 - 380;
                    while (!(0 == str[P7Xfip1]) && !(0 == N8Hb40N5KDql[ZfLCGNbRB])) {
                        if (!(N8Hb40N5KDql[ZfLCGNbRB] == str[P7Xfip1])) {
                            break;
                        }
                        ZfLCGNbRB = ZfLCGNbRB +1;
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
                        P7Xfip1++;
                    };
                }
                if (N8Hb40N5KDql[ZfLCGNbRB] == 0) {
                    KwUTAnV3vKW = P7Xfip1;
                    y3w7WxoJ = Z34Ee9dIU7mG;
                    break;
                };
            }
            Z34Ee9dIU7mG = Z34Ee9dIU7mG +1;
        };
    }
    if (y3w7WxoJ < KwUTAnV3vKW) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (strlen (N8Hb40N5KDql) <= strlen (PzHyxGAEvt)) {
            {
                ZfLCGNbRB = 0;
                Z34Ee9dIU7mG = y3w7WxoJ;
                while (PzHyxGAEvt[ZfLCGNbRB] != 0) {
                    str[Z34Ee9dIU7mG] = PzHyxGAEvt[ZfLCGNbRB];
                    ZfLCGNbRB = ZfLCGNbRB +1;
                    Z34Ee9dIU7mG = Z34Ee9dIU7mG +1;
                };
            }
            {
                P7Xfip1 = KwUTAnV3vKW;
                while (str[P7Xfip1] != 0) {
                    str[Z34Ee9dIU7mG] = str[P7Xfip1];
                    Z34Ee9dIU7mG++;
                    P7Xfip1++;
                };
            }
            str[Z34Ee9dIU7mG] = 0;
        }
        else {
            Z34Ee9dIU7mG = strlen (str) + strlen (PzHyxGAEvt) - strlen (N8Hb40N5KDql);
            {
                P7Xfip1 = str;
                while (P7Xfip1 >= KwUTAnV3vKW) {
                    P7Xfip1 = P7Xfip1 -1;
                    str[Z34Ee9dIU7mG] = PzHyxGAEvt[ZfLCGNbRB];
                    Z34Ee9dIU7mG = Z34Ee9dIU7mG -1;
                };
            };
        };
    }
    printf (str);
    return 0;
}

