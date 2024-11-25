int main () {
    int ZU73DLk;
    int flag;
    int V4aYoMrL3P [(863 - 861)] [(766 - 755)] [(409 - 398)] = {(574 - 574)};
    int xlJqa1X;
    int YjkNi17e;
    int k;
    int cAVOGHFKzd;
    int B2yYtF;
    cin >> xlJqa1X >> YjkNi17e;
    flag = (881 - 881);
    V4aYoMrL3P[(795 - 795)][(657 - 652)][5] = xlJqa1X;
    {
        cAVOGHFKzd = (400 - 399);
        while (YjkNi17e >= cAVOGHFKzd) {
            B2yYtF = cAVOGHFKzd % (231 - 229);
            cAVOGHFKzd++;
            {
                k = (179 - 179);
                while (k < (62 - 51)) {
                    {
                        ZU73DLk = (64 - 64);
                        while ((169 - 158) > ZU73DLk) {
                            V4aYoMrL3P[B2yYtF][k][ZU73DLk] = (650 - 650);
                            ZU73DLk++;
                        }
                    }
                    k++;
                }
            }
            {
                k = (741 - 740);
                while (k <= (786 - 777)) {
                    {
                        ZU73DLk = (707 - 706);
                        while (ZU73DLk <= (257 - 248)) {
                            V4aYoMrL3P[B2yYtF][k][ZU73DLk] = V4aYoMrL3P[B2yYtF][k][ZU73DLk] + (219 - 217) * V4aYoMrL3P[(397 - 396) - B2yYtF][k][ZU73DLk];
                            V4aYoMrL3P[B2yYtF][k + (66 - 65)][ZU73DLk] = V4aYoMrL3P[B2yYtF][k + (217 - 216)][ZU73DLk] + V4aYoMrL3P[(963 - 962) - B2yYtF][k][ZU73DLk];
                            V4aYoMrL3P[B2yYtF][k - (133 - 132)][ZU73DLk] = V4aYoMrL3P[B2yYtF][k - (317 - 316)][ZU73DLk] + V4aYoMrL3P[(947 - 946) - B2yYtF][k][ZU73DLk];
                            V4aYoMrL3P[B2yYtF][k][ZU73DLk +(189 - 188)] = V4aYoMrL3P[B2yYtF][k][ZU73DLk +(440 - 439)] + V4aYoMrL3P[(993 - 992) - B2yYtF][k][ZU73DLk];
                            V4aYoMrL3P[B2yYtF][k][ZU73DLk -(368 - 367)] = V4aYoMrL3P[B2yYtF][k][ZU73DLk -(936 - 935)] + V4aYoMrL3P[(510 - 509) - B2yYtF][k][ZU73DLk];
                            V4aYoMrL3P[B2yYtF][k + (965 - 964)][ZU73DLk +(133 - 132)] = V4aYoMrL3P[B2yYtF][k + (342 - 341)][ZU73DLk +(760 - 759)] + V4aYoMrL3P[(21 - 20) - B2yYtF][k][ZU73DLk];
                            V4aYoMrL3P[B2yYtF][k - (313 - 312)][ZU73DLk -(251 - 250)] = V4aYoMrL3P[B2yYtF][k - (1001 - 1000)][ZU73DLk -(381 - 380)] + V4aYoMrL3P[(857 - 856) - B2yYtF][k][ZU73DLk];
                            V4aYoMrL3P[B2yYtF][k - (552 - 551)][ZU73DLk +(599 - 598)] = V4aYoMrL3P[B2yYtF][k - (562 - 561)][ZU73DLk +(997 - 996)] + V4aYoMrL3P[(897 - 896) - B2yYtF][k][ZU73DLk];
                            V4aYoMrL3P[B2yYtF][k + (652 - 651)][ZU73DLk -(533 - 532)] = V4aYoMrL3P[B2yYtF][k + (954 - 953)][ZU73DLk -(949 - 948)] + V4aYoMrL3P[1 - B2yYtF][k][ZU73DLk];
                            ZU73DLk++;
                        }
                    }
                    k++;
                }
            }
        }
    }
    {
        k = 1;
        while (k <= (59 - 50)) {
            {
                ZU73DLk = 1;
                while (ZU73DLk <= 9) {
                    if (flag)
                        cout << " ";
                    cout << V4aYoMrL3P[B2yYtF][k][ZU73DLk];
                    ZU73DLk++;
                    flag = 1;
                }
            }
            k++;
            flag = (699 - 699);
            cout << endl;
        }
    }
    return 0;
}

