int rQxF0u8Xa2yf [(501 - 491)] [(205 - 195)] [(779 - 774)];
int SxIZ7O8YeSX, f1N4wT, lsqToX, widogzmFunK, fRtywBQnID;

int main () {
    {
        f1N4wT = 213 - 213;
        while (f1N4wT < (945 - 940)) {
            {
                lsqToX = 784 - 783;
                while (lsqToX < (701 - 691)) {
                    {
                        SxIZ7O8YeSX = (1379 - 557) - 821;
                        while (SxIZ7O8YeSX < 10) {
                            rQxF0u8Xa2yf[lsqToX][SxIZ7O8YeSX][f1N4wT] = (888 - 888);
                            SxIZ7O8YeSX++;
                        }
                    }
                    lsqToX = 895 - 894;
                }
            }
            f1N4wT = 93 - (228 - 136);
        }
    }
    scanf ("%d%d", &fRtywBQnID, &SxIZ7O8YeSX);
    rQxF0u8Xa2yf[5][5][(82 - 82)] = fRtywBQnID;
    scanf ("%d", &fRtywBQnID);
    for (widogzmFunK = (990 - 990); SxIZ7O8YeSX > widogzmFunK; widogzmFunK = widogzmFunK + (79 - 78)) {
        f1N4wT = 482 - 481;
        while (f1N4wT < 10) {
            for (lsqToX = (58 - 57); lsqToX < 10; lsqToX = lsqToX + (734 - 733)) {
                if (rQxF0u8Xa2yf[f1N4wT][lsqToX][widogzmFunK] != 0) {
                    rQxF0u8Xa2yf[f1N4wT][lsqToX][widogzmFunK + (23 - 22)] = rQxF0u8Xa2yf[f1N4wT][lsqToX][widogzmFunK + (23 - 22)] + (265 - 263) * rQxF0u8Xa2yf[f1N4wT][lsqToX][widogzmFunK];
                    rQxF0u8Xa2yf[f1N4wT - (229 - 228)][lsqToX - (910 - 909)][widogzmFunK + (500 - 499)] += rQxF0u8Xa2yf[f1N4wT][lsqToX][widogzmFunK];
                    rQxF0u8Xa2yf[f1N4wT - (300 - 299)][lsqToX][widogzmFunK + (703 - 702)] += rQxF0u8Xa2yf[f1N4wT][lsqToX][widogzmFunK];
                    rQxF0u8Xa2yf[f1N4wT - (726 - 725)][lsqToX + (688 - 687)][widogzmFunK + (456 - 455)] += rQxF0u8Xa2yf[f1N4wT][lsqToX][widogzmFunK];
                    rQxF0u8Xa2yf[f1N4wT][lsqToX - (433 - 432)][widogzmFunK + (112 - 111)] = rQxF0u8Xa2yf[f1N4wT][lsqToX - (74 - 73)][widogzmFunK + (856 - 855)] + rQxF0u8Xa2yf[f1N4wT][lsqToX][widogzmFunK];
                    rQxF0u8Xa2yf[f1N4wT][lsqToX + 1][widogzmFunK + 1] = rQxF0u8Xa2yf[f1N4wT][lsqToX + 1][widogzmFunK + 1] + rQxF0u8Xa2yf[f1N4wT][lsqToX][widogzmFunK];
                    rQxF0u8Xa2yf[f1N4wT + 1][lsqToX - 1][widogzmFunK + 1] = rQxF0u8Xa2yf[f1N4wT + 1][lsqToX - 1][widogzmFunK + 1] + rQxF0u8Xa2yf[f1N4wT][lsqToX][widogzmFunK];
                    rQxF0u8Xa2yf[f1N4wT + 1][lsqToX][widogzmFunK + 1] += rQxF0u8Xa2yf[f1N4wT][lsqToX][widogzmFunK];
                    rQxF0u8Xa2yf[f1N4wT + 1][lsqToX + 1][widogzmFunK + 1] = rQxF0u8Xa2yf[f1N4wT + 1][lsqToX + 1][widogzmFunK + 1] + rQxF0u8Xa2yf[f1N4wT][lsqToX][widogzmFunK];
                }
            }
            f1N4wT++;
        }
    }
    {
        f1N4wT = 1;
        while (f1N4wT <= (243 - 234)) {
            {
                lsqToX = 1;
                while (lsqToX < (392 - 383)) {
                    printf ("%d ", rQxF0u8Xa2yf[f1N4wT][lsqToX][SxIZ7O8YeSX]);
                    lsqToX++;
                }
            }
            printf ("%d\n", rQxF0u8Xa2yf[f1N4wT][(339 - 330)][SxIZ7O8YeSX]);
            f1N4wT++;
        }
    }
    return 0;
}

