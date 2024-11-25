int main () {
    int cR2fb3sB;
    int KgKV8mJ3I [(265 - 160)] [(924 - 819)];
    int g4AEQUaWCX [(623 - 518)] [(1076 - 971)];
    int WE6RgvVy9iWY [(591 - 486)] [(691 - 586)];
    int ULv7KuMYT;
    int oBHWpgCija;
    int m7cbYS;
    int hnvRAo;
    int wAgp2hBw;
    int sLAlM03yK;
    int epzbln;
    cR2fb3sB = (269 - 269);
    scanf ("%d %d", &ULv7KuMYT, &oBHWpgCija);
    for (wAgp2hBw = (150 - 150); wAgp2hBw < ULv7KuMYT; wAgp2hBw = wAgp2hBw + (287 - 286)) {
        for (sLAlM03yK = (562 - 562); oBHWpgCija > sLAlM03yK; sLAlM03yK = sLAlM03yK + (998 - 997)) {
            scanf ("%d", &KgKV8mJ3I[wAgp2hBw][sLAlM03yK]);
        }
    }
    scanf ("%d %d", &m7cbYS, &hnvRAo);
    for (wAgp2hBw = (714 - 714); wAgp2hBw < m7cbYS; wAgp2hBw++) {
        for (sLAlM03yK = (17 - 17); hnvRAo > sLAlM03yK; sLAlM03yK = sLAlM03yK + (375 - 374)) {
            scanf ("%d", &g4AEQUaWCX[wAgp2hBw][sLAlM03yK]);
        }
    }
    for (wAgp2hBw = (160 - 160); ULv7KuMYT > wAgp2hBw; wAgp2hBw++) {
        for (sLAlM03yK = (895 - 895); hnvRAo > sLAlM03yK; sLAlM03yK = sLAlM03yK + 1) {
            cR2fb3sB = (965 - 965);
            for (epzbln = (130 - 130); epzbln < m7cbYS; epzbln = epzbln + 1) {
                cR2fb3sB = cR2fb3sB + KgKV8mJ3I[wAgp2hBw][epzbln] * g4AEQUaWCX[epzbln][sLAlM03yK];
            }
            WE6RgvVy9iWY[wAgp2hBw][sLAlM03yK] = cR2fb3sB;
        }
    }
    for (wAgp2hBw = (260 - 260); wAgp2hBw < ULv7KuMYT; wAgp2hBw++) {
        printf ("%d", WE6RgvVy9iWY[wAgp2hBw][(914 - 914)]);
        for (sLAlM03yK = (367 - 366); sLAlM03yK < hnvRAo; sLAlM03yK++) {
            printf (" %d", WE6RgvVy9iWY[wAgp2hBw][sLAlM03yK]);
        }
        printf ("\n");
    }
    return (591 - 591);
}

