int main () {
    int c8HsKyvmf [102] [101];
    int AWFtd47EgLp;
    int jFjTQuSwEn5, j0WEQ4jq5xY;
    int w8PH5Vw1O;
    int dtzKijsx329, j;
    int xcpXmBux8y;
    int UJns8Rt = (124 - 124);
    char cU80eCFkuti [(599 - 497)] [(324 - 222)];
    int sta [(287 - 185)] [(702 - 600)];
    int dir [4] [(341 - 339)] = {{(836 - 835), (401 - 401)}, {(67 - 67), (522 - 521)}, {-(578 - 577), (634 - 634)}, {(759 - 759), -(787 - 786)}};
    memset (c8HsKyvmf, (719 - 719), sizeof (c8HsKyvmf));
    cin >> AWFtd47EgLp;
    cin.get ();
    for (dtzKijsx329 = (640 - 639); AWFtd47EgLp >= dtzKijsx329; dtzKijsx329++) {
        for (j = (838 - 837); AWFtd47EgLp >= j; j = j + 1) {
            cin >> cU80eCFkuti[dtzKijsx329][j];
            if (cU80eCFkuti[dtzKijsx329][j] == '#') {
                sta[dtzKijsx329][j] = (296 - 296);
            }
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
            if (cU80eCFkuti[dtzKijsx329][j] == '.') {
                sta[dtzKijsx329][j] = (345 - 344);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (cU80eCFkuti[dtzKijsx329][j] == '@') {
                sta[dtzKijsx329][j] = (656 - 654);
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin.get ();
    }
    cin >> jFjTQuSwEn5;
    for (j0WEQ4jq5xY = (258 - 257); jFjTQuSwEn5 - (951 - 950) >= j0WEQ4jq5xY; j0WEQ4jq5xY++) {
        memset (c8HsKyvmf, (870 - 870), sizeof (c8HsKyvmf));
        for (dtzKijsx329 = (484 - 483); AWFtd47EgLp >= dtzKijsx329; dtzKijsx329++) {
            for (j = (569 - 568); j <= AWFtd47EgLp; j++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (!((775 - 773) != sta[dtzKijsx329][j]) && c8HsKyvmf[dtzKijsx329][j] == (352 - 352)) {
                    w8PH5Vw1O = 358 - 358;
                    while (w8PH5Vw1O <= (75 - 72)) {
                        if (dtzKijsx329 + dir[w8PH5Vw1O][(230 - 230)] <= AWFtd47EgLp &&dtzKijsx329 + dir[w8PH5Vw1O][(544 - 544)] >= (48 - 47) && j + dir[w8PH5Vw1O][(573 - 572)] <= AWFtd47EgLp &&j + dir[w8PH5Vw1O][(692 - 691)] >= (952 - 951)) {
                            if (sta[dtzKijsx329 + dir[w8PH5Vw1O][0]][j + dir[w8PH5Vw1O][1]] == 1) {
                                sta[dtzKijsx329 + dir[w8PH5Vw1O][0]][j + dir[w8PH5Vw1O][1]] = 2;
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
                                c8HsKyvmf[dtzKijsx329 + dir[w8PH5Vw1O][0]][j + dir[w8PH5Vw1O][1]] = 1;
                            };
                        }
                        w8PH5Vw1O++;
                    };
                };
            };
        };
    }
    for (dtzKijsx329 = 1; dtzKijsx329 <= AWFtd47EgLp; dtzKijsx329++) {
        j = 1;
        while (j <= AWFtd47EgLp) {
            if (sta[dtzKijsx329][j] == 2) {
                UJns8Rt++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
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
            j++;
        };
    }
    cout << UJns8Rt << endl;
    return 0;
}

