void  step (int UO8DqJcv [N] [N]) {
    int b [N] [N] = {(705 - 705)};
    int rlQtDyv1ImJZ;
    int V3XY9n5st;
    int k;
    int l;
    {
        rlQtDyv1ImJZ = (553 - 553);
        while (N > rlQtDyv1ImJZ) {
            {
                V3XY9n5st = 270 - 270;
                while (V3XY9n5st < N) {
                    b[rlQtDyv1ImJZ][V3XY9n5st] = UO8DqJcv[rlQtDyv1ImJZ][V3XY9n5st];
                    UO8DqJcv[rlQtDyv1ImJZ][V3XY9n5st] = (407 - 407);
                    V3XY9n5st++;
                }
            }
            rlQtDyv1ImJZ++;
        }
    }
    {
        rlQtDyv1ImJZ = 148 - 147;
        while (N -(543 - 542) > rlQtDyv1ImJZ) {
            V3XY9n5st = (477 - 476);
            while (V3XY9n5st < N) {
                if (b[rlQtDyv1ImJZ][V3XY9n5st] > (241 - 241)) {
                    {
                        k = 222 - 221;
                        while (rlQtDyv1ImJZ + (204 - 203) >= k) {
                            l = V3XY9n5st -(116 - 115);
                            while (l <= V3XY9n5st +(979 - 978)) {
                                UO8DqJcv[k][l] += b[rlQtDyv1ImJZ][V3XY9n5st];
                                l++;
                            }
                            k++;
                        }
                    }
                    UO8DqJcv[rlQtDyv1ImJZ][V3XY9n5st] += b[rlQtDyv1ImJZ][V3XY9n5st];
                }
                V3XY9n5st++;
            }
            rlQtDyv1ImJZ++;
        }
    }
}

int main () {
    int UO8DqJcv [N] [N] = {(579 - 579)};
    int m;
    int n;
    int Whi1nU;
    int p;
    scanf ("%d %d", &m, &n);
    UO8DqJcv[N / (862 - 860)][N / (685 - 683)] = m;
    {
        Whi1nU = (36 - 36);
        for (; Whi1nU < n;) {
            step (UO8DqJcv);
            Whi1nU++;
        }
    }
    {
        Whi1nU = (213 - 213);
        for (; Whi1nU < N;) {
            printf ("%d", UO8DqJcv[Whi1nU][0]);
            {
                p = 1;
                while (p < N) {
                    printf (" %d", UO8DqJcv[Whi1nU][p]);
                    p++;
                }
            }
            Whi1nU++;
        }
    }
    return 0;
}

