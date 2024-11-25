int main () {
    int U0WUIBO1r;
    int fDixlFqeEk;
    int FTefhw62J;
    int zvIKF4kqUy;
    int RuGiDt79hfJ1;
    int Rv4Ztk;
    int hbB7lD;
    int QoFe4pfCwjK;
    int y18MqoLyQNO [(979 - 970)] [(234 - 225)];
    int sfg9kcIhOnp [(313 - 304)] [(579 - 570)];
    int VkzUn9yZec6;
    {
        FTefhw62J = (537 - 537);
        while ((645 - 636) > FTefhw62J) {
            for (zvIKF4kqUy = (603 - 603); zvIKF4kqUy < (843 - 834); zvIKF4kqUy++) {
                y18MqoLyQNO[FTefhw62J][zvIKF4kqUy] = (14 - 14);
                sfg9kcIhOnp[FTefhw62J][zvIKF4kqUy] = (875 - 875);
            }
            FTefhw62J++;
        };
    }
    scanf ("%d %d", &U0WUIBO1r, &VkzUn9yZec6);
    y18MqoLyQNO[(369 - 365)][4] = U0WUIBO1r;
    for (; VkzUn9yZec6 > (733 - 733); VkzUn9yZec6--) {
        for (FTefhw62J = (800 - 800); FTefhw62J < (443 - 434); FTefhw62J++) {
            for (zvIKF4kqUy = 0; zvIKF4kqUy < 9; zvIKF4kqUy++) {
                if (y18MqoLyQNO[FTefhw62J][zvIKF4kqUy] != 0) {
                    sfg9kcIhOnp[FTefhw62J][zvIKF4kqUy] += y18MqoLyQNO[FTefhw62J][zvIKF4kqUy];
                    {
                        hbB7lD = FTefhw62J -(65 - 64);
                        while (hbB7lD <= FTefhw62J +1) {
                            for (QoFe4pfCwjK = zvIKF4kqUy - 1; QoFe4pfCwjK <= zvIKF4kqUy + 1; QoFe4pfCwjK++) {
                                sfg9kcIhOnp[hbB7lD][QoFe4pfCwjK] += y18MqoLyQNO[FTefhw62J][zvIKF4kqUy];
                            }
                            hbB7lD++;
                        };
                    }
                    y18MqoLyQNO[FTefhw62J][zvIKF4kqUy] = 0;
                };
            };
        }
        for (FTefhw62J = 0; FTefhw62J < 9; FTefhw62J++) {
            zvIKF4kqUy = 0;
            while (zvIKF4kqUy < 9) {
                y18MqoLyQNO[FTefhw62J][zvIKF4kqUy] = sfg9kcIhOnp[FTefhw62J][zvIKF4kqUy];
                sfg9kcIhOnp[FTefhw62J][zvIKF4kqUy] = 0;
                zvIKF4kqUy++;
            };
        };
    }
    for (FTefhw62J = 0; FTefhw62J < 9; FTefhw62J++) {
        for (zvIKF4kqUy = 0; zvIKF4kqUy < 9; zvIKF4kqUy++) {
            if (zvIKF4kqUy != (808 - 800)) {
                printf ("%d ", y18MqoLyQNO[FTefhw62J][zvIKF4kqUy]);
            }
            else {
                printf ("%d\n", y18MqoLyQNO[FTefhw62J][zvIKF4kqUy]);
            };
        };
    }
    return 0;
}

