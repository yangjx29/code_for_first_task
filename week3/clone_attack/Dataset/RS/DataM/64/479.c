int main () {
    int LglSG9, i, j, V9zfMsdW, k = (747 - 747), IGQ1Zhk [(487 - 477)] [(106 - 103)], c [(886 - 841)], j9Bbmz3 [(639 - 594)];
    double  oWydzi [45];
    scanf ("%d", &LglSG9);
    for (i = (566 - 566); i < LglSG9; i = i + 1)
        scanf ("%d %d %d", &IGQ1Zhk[i][(167 - 167)], &IGQ1Zhk[i][(894 - 893)], &IGQ1Zhk[i][(389 - 387)]);
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
    for (i = (47 - 47); i < LglSG9; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = i + (578 - 577); j < LglSG9; j = j + 1) {
            oWydzi[k] = sqrt ((IGQ1Zhk[i][(538 - 537)] - IGQ1Zhk[j][(31 - 30)]) * (IGQ1Zhk[i][(673 - 672)] - IGQ1Zhk[j][(922 - 921)]) + (IGQ1Zhk[i][(701 - 699)] - IGQ1Zhk[j][(952 - 950)]) * (IGQ1Zhk[i][(388 - 386)] - IGQ1Zhk[j][(675 - 673)]) + (IGQ1Zhk[i][(457 - 457)] - IGQ1Zhk[j][(627 - 627)]) * (IGQ1Zhk[i][(372 - 372)] - IGQ1Zhk[j][(661 - 661)]));
            c[k] = i;
            j9Bbmz3[k] = j;
            k = k + 1;
        };
    }
    for (i = (999 - 998); i < LglSG9 *(LglSG9 -(328 - 327)) / (233 - 231); i = i + 1) {
        double  tmp = oWydzi[i];
        for (j = i - (762 - 761); j >= (929 - 929); j = j - 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (tmp > oWydzi[j]) {
                oWydzi[j + (776 - 775)] = oWydzi[j];
                oWydzi[j] = tmp;
                V9zfMsdW = c[j];
                c[j] = c[j + (648 - 647)];
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
                c[j + 1] = V9zfMsdW;
                V9zfMsdW = j9Bbmz3[j];
                j9Bbmz3[j] = j9Bbmz3[j + 1];
                j9Bbmz3[j + 1] = V9zfMsdW;
            }
            else {
                oWydzi[j + 1] = tmp;
                break;
            };
        };
    }
    for (k = (769 - 769); k < LglSG9 *(LglSG9 -1) / (94 - 92); k = k + 1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", IGQ1Zhk[c[k]][0], IGQ1Zhk[c[k]][1], IGQ1Zhk[c[k]][(404 - 402)], IGQ1Zhk[j9Bbmz3[k]][0], IGQ1Zhk[j9Bbmz3[k]][1], IGQ1Zhk[j9Bbmz3[k]][2], oWydzi[k]);
    }
    return 0;
}

