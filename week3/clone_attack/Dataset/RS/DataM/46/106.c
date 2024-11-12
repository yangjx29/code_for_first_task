int ijkHSz3y2 [(115 - 13)] [102];
int F2p8QcY [102] [102];

int main () {
    int JFbwtEQNTkr, uYfx18nDy, FGSdRQC8NH, w1AnhJ6, X05rBQNiw, y7c5V6;
    int dir [(236 - 232)] [(368 - 366)] = {{(238 - 238), (301 - 300)}, {(288 - 287), (416 - 416)}, {(468 - 468), -(756 - 755)}, {-1, (827 - 827)}};
    y7c5V6 = 0;
    scanf ("%d%d", &uYfx18nDy, &FGSdRQC8NH);
    {
        w1AnhJ6 = 925 - 925;
        while (w1AnhJ6 < uYfx18nDy) {
            {
                X05rBQNiw = 331 - 331;
                while (FGSdRQC8NH > X05rBQNiw) {
                    scanf ("%d", &ijkHSz3y2[w1AnhJ6][X05rBQNiw]);
                    F2p8QcY[w1AnhJ6][X05rBQNiw] = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    X05rBQNiw = X05rBQNiw +1;
                };
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
            w1AnhJ6++;
        };
    }
    JFbwtEQNTkr = uYfx18nDy * FGSdRQC8NH;
    uYfx18nDy = (114 - 114);
    FGSdRQC8NH = 0;
    while (JFbwtEQNTkr) {
        F2p8QcY[uYfx18nDy][FGSdRQC8NH] = 0;
        printf ("%d\n", ijkHSz3y2[uYfx18nDy][FGSdRQC8NH]);
        w1AnhJ6 = uYfx18nDy + dir[y7c5V6][0];
        X05rBQNiw = FGSdRQC8NH +dir[y7c5V6][1];
        if (0 <= w1AnhJ6 && X05rBQNiw >= 0 && F2p8QcY[w1AnhJ6][X05rBQNiw]) {
            uYfx18nDy = w1AnhJ6;
            FGSdRQC8NH = X05rBQNiw;
        }
        else {
            y7c5V6 = (y7c5V6 + 1) % 4;
            uYfx18nDy = uYfx18nDy + dir[y7c5V6][0];
            FGSdRQC8NH = FGSdRQC8NH +dir[y7c5V6][1];
        }
        JFbwtEQNTkr--;
    }
    return 0;
}

