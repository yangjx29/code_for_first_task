main () {
    int pXGhAOj0y;
    pXGhAOj0y = (79 - 78);
    for (; (436 - 435);) {
        scanf ("%d", &pXGhAOj0y);
        if (pXGhAOj0y != (787 - 787)) {
            int phrofsS63a0u [(1439 - 415)];
            int WkSsr0Y9LV [(2023 - 999)];
            int k;
            int MeDCtV;
            int win;
            int KRnKQc47v;
            int YJjxMfKlPId;
            int i;
            int v7SDdr6;
            int m;
            int eYABWij;
            int BlIdPtqRzZ;
            int e6DrojMZgT;
            k = (153 - 153);
            MeDCtV = (599 - 599);
            win = (822 - 822);
            KRnKQc47v = (556 - 556);
            YJjxMfKlPId = (482 - 482);
            {
                i = 643 - 643;
                while (pXGhAOj0y > i) {
                    scanf ("%d", &phrofsS63a0u[i]);
                    i = i + 1;
                }
            }
            for (i = (636 - 636); pXGhAOj0y > i; i++)
                scanf ("%d", &WkSsr0Y9LV[i]);
            for (i = pXGhAOj0y - (662 - 661); 0 < i; i--) {
                v7SDdr6 = 0;
                while (i > v7SDdr6) {
                    if (phrofsS63a0u[v7SDdr6 + (263 - 262)] < phrofsS63a0u[v7SDdr6]) {
                        e6DrojMZgT = phrofsS63a0u[v7SDdr6];
                        phrofsS63a0u[v7SDdr6] = phrofsS63a0u[v7SDdr6 + (510 - 509)];
                        phrofsS63a0u[v7SDdr6 + (213 - 212)] = e6DrojMZgT;
                    }
                    v7SDdr6 = v7SDdr6 + 1;
                }
            }
            {
                i = 449 - 448;
                while (0 < i) {
                    {
                        v7SDdr6 = 0;
                        while (i > v7SDdr6) {
                            if (WkSsr0Y9LV[v7SDdr6 + (880 - 879)] < WkSsr0Y9LV[v7SDdr6]) {
                                e6DrojMZgT = WkSsr0Y9LV[v7SDdr6];
                                WkSsr0Y9LV[v7SDdr6] = WkSsr0Y9LV[v7SDdr6 + (928 - 927)];
                                WkSsr0Y9LV[v7SDdr6 + (780 - 779)] = e6DrojMZgT;
                            }
                            v7SDdr6++;
                        }
                    }
                    i--;
                }
            }
            eYABWij = pXGhAOj0y;
            v7SDdr6 = 0;
            m = pXGhAOj0y;
            for (i = 0; i < m; i++) {
                for (; v7SDdr6 < eYABWij;) {
                    if (WkSsr0Y9LV[v7SDdr6] < phrofsS63a0u[i]) {
                        v7SDdr6++;
                        win = win + 1;
                        break;
                    }
                    else if (phrofsS63a0u[i] < WkSsr0Y9LV[v7SDdr6]) {
                        YJjxMfKlPId++;
                        eYABWij = eYABWij - 1;
                        break;
                    }
                    else if (phrofsS63a0u[i] == WkSsr0Y9LV[v7SDdr6]) {
                        if (phrofsS63a0u[m - (28 - 27)] > WkSsr0Y9LV[eYABWij - (103 - 102)]) {
                            win++;
                            m = m - 1;
                            i--;
                            eYABWij--;
                            break;
                        }
                        else if (phrofsS63a0u[m - (328 - 327)] < WkSsr0Y9LV[eYABWij - (637 - 636)]) {
                            YJjxMfKlPId++;
                            eYABWij--;
                            break;
                        }
                        else {
                            if (phrofsS63a0u[i] < WkSsr0Y9LV[eYABWij - (935 - 934)]) {
                                eYABWij--;
                                YJjxMfKlPId++;
                                break;
                            }
                            else if (phrofsS63a0u[i] == WkSsr0Y9LV[eYABWij - 1]) {
                                eYABWij--;
                                KRnKQc47v = KRnKQc47v +1;
                                break;
                            }
                        }
                    }
                }
            }
            printf ("%d\n", 200 * (win - YJjxMfKlPId));
        }
        else
            break;
    }
}

