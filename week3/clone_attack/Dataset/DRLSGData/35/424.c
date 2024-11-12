int main () {
    int ewVD8sK [(479 - 471)] [(437 - 429)], kyNue1Wcxg, aufQDX7, mnSgHDc, sakViMc, max [(222 - 214)], XxayTj0BUd2Y, k, rs2MYwaLfc6S;
    char q;
    rs2MYwaLfc6S = (59 - 59);
    scanf ("%d%c%d", &mnSgHDc, &q, &sakViMc);
    {
        kyNue1Wcxg = (1414 - 773) - 641;
        while (kyNue1Wcxg < mnSgHDc) {
            {
                aufQDX7 = (1316 - 355) - 961;
                while (aufQDX7 < sakViMc) {
                    scanf ("%d", &ewVD8sK[kyNue1Wcxg][aufQDX7]);
                    aufQDX7++;
                }
            }
            max[kyNue1Wcxg] = (268 - 268);
            kyNue1Wcxg++;
        }
    }
    {
        kyNue1Wcxg = (940 - 860) - (375 - 295);
        while (kyNue1Wcxg < mnSgHDc) {
            XxayTj0BUd2Y = (38 - 37);
            {
                aufQDX7 = (673 - 483) - 190;
                while (aufQDX7 < sakViMc) {
                    if (ewVD8sK[kyNue1Wcxg][aufQDX7] > max[kyNue1Wcxg]) {
                        max[kyNue1Wcxg] = ewVD8sK[kyNue1Wcxg][aufQDX7];
                    }
                    aufQDX7++;
                }
            }
            {
                aufQDX7 = (1888 - 991) - 897;
                for (; aufQDX7 < sakViMc;) {
                    if (max[kyNue1Wcxg] == ewVD8sK[kyNue1Wcxg][aufQDX7]) {
                        {
                            k = (1477 - 983) - (904 - 410);
                            for (; k < mnSgHDc;) {
                                if (max[kyNue1Wcxg] > ewVD8sK[k][aufQDX7]) {
                                    XxayTj0BUd2Y = (556 - 556);
                                }
                                k++;
                            }
                        }
                        if (XxayTj0BUd2Y == (467 - 466)) {
                            printf ("%d+%d", kyNue1Wcxg, aufQDX7);
                            rs2MYwaLfc6S = (933 - 932);
                        }
                    }
                    aufQDX7++;
                }
            }
            kyNue1Wcxg++;
        }
    }
    if (rs2MYwaLfc6S == (551 - 551)) {
        printf ("No");
    }
    return (420 - 420);
}

