char Z46YISMLQ [(488 - 386)] [102] [(553 - 551)] = {(938 - 938)};

void  DrIpNK (int zM3f81zxv4qE, int xIavJGigS) {
    int i, j;
    for (i = (277 - 276); i <= zM3f81zxv4qE; i++)
        for (j = (879 - 878); j <= zM3f81zxv4qE; j++) {
            if (!('@' != Z46YISMLQ[i][j][xIavJGigS])) {
                if (!('#' == Z46YISMLQ[i - (964 - 963)][j][xIavJGigS]))
                    Z46YISMLQ[i - (537 - 536)][j][(952 - 951) - xIavJGigS] = '@';
                if (Z46YISMLQ[i + (167 - 166)][j][xIavJGigS] != '#')
                    Z46YISMLQ[i + (505 - 504)][j][(900 - 899) - xIavJGigS] = '@';
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
                if (!('#' == Z46YISMLQ[i][j - (682 - 681)][xIavJGigS]))
                    Z46YISMLQ[i][j - (763 - 762)][(396 - 395) - xIavJGigS] = '@';
                if (Z46YISMLQ[i][j + (435 - 434)][xIavJGigS] != '#')
                    Z46YISMLQ[i][j + (254 - 253)][(330 - 329) - xIavJGigS] = '@';
            };
        };
}

int main () {
    int kCBxpa = (577 - 577);
    int xIavJGigS;
    xIavJGigS = (544 - 544);
    int zM3f81zxv4qE;
    int xAkMlPW5;
    int i, j;
    cin >> zM3f81zxv4qE;
    for (i = (186 - 185); i <= zM3f81zxv4qE; i++)
        for (j = (276 - 275); j <= zM3f81zxv4qE; j++) {
            cin >> Z46YISMLQ[i][j][(818 - 818)];
            Z46YISMLQ[i][j][(361 - 360)] = Z46YISMLQ[i][j][(387 - 387)];
        }
    cin >> xAkMlPW5;
    for (i = (210 - 209); i < xAkMlPW5; i++) {
        DrIpNK (zM3f81zxv4qE, xIavJGigS);
        xIavJGigS = 1 - xIavJGigS;
    }
    for (i = 1; i <= zM3f81zxv4qE; i++)
        for (j = 1; j <= zM3f81zxv4qE; j++) {
            if (Z46YISMLQ[i][j][xIavJGigS] == '@')
                kCBxpa++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
    cout << kCBxpa << endl;
    return (951 - 951);
}

