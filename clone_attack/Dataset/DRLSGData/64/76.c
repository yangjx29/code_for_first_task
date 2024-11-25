int main () {
    double  ZYZzLKQqFc [50], iW9641T;
    int JxliYny [10], UFAB64qXkl [10], KzswFLy [10], z [50] [6];
    int W406kBHtF1u;
    int U563Lde2mMBP;
    int bpx42BERmX;
    int rpmgU0;
    int k0rX4gAJ;
    int J9ANd5E;
    int n;
    int m;
    rpmgU0 = 0;
    scanf ("%d", &n);
    {
        J9ANd5E = 0;
        for (; n > J9ANd5E;) {
            scanf ("%d%d%d", &(JxliYny[J9ANd5E]), &(UFAB64qXkl[J9ANd5E]), &(KzswFLy[J9ANd5E]));
            J9ANd5E = J9ANd5E +1;
        }
    }
    {
        J9ANd5E = 0;
        while (J9ANd5E < n) {
            {
                if (0) {
                    return 0;
                }
            }
            {
                k0rX4gAJ = J9ANd5E +1;
                while (k0rX4gAJ < n) {
                    ZYZzLKQqFc[rpmgU0] = sqrt ((JxliYny[J9ANd5E] - JxliYny[k0rX4gAJ]) * (JxliYny[J9ANd5E] - JxliYny[k0rX4gAJ]) + (UFAB64qXkl[J9ANd5E] - UFAB64qXkl[k0rX4gAJ]) * (UFAB64qXkl[J9ANd5E] - UFAB64qXkl[k0rX4gAJ]) + (KzswFLy[k0rX4gAJ] - KzswFLy[J9ANd5E]) * (KzswFLy[k0rX4gAJ] - KzswFLy[J9ANd5E]));
                    z[rpmgU0][0] = JxliYny[J9ANd5E];
                    z[rpmgU0][1] = UFAB64qXkl[J9ANd5E];
                    z[rpmgU0][2] = KzswFLy[J9ANd5E];
                    z[rpmgU0][3] = JxliYny[k0rX4gAJ];
                    z[rpmgU0][4] = UFAB64qXkl[k0rX4gAJ];
                    z[rpmgU0][5] = KzswFLy[k0rX4gAJ];
                    k0rX4gAJ = k0rX4gAJ + 1;
                    rpmgU0 = rpmgU0 + 1;
                }
            }
            J9ANd5E = J9ANd5E +1;
        }
    }
    W406kBHtF1u = 0;
    iW9641T = 0;
    {
        J9ANd5E = 1;
        for (; J9ANd5E <= rpmgU0;) {
            {
                k0rX4gAJ = 0;
                while (k0rX4gAJ < rpmgU0 - J9ANd5E) {
                    if (ZYZzLKQqFc[k0rX4gAJ + 1] > ZYZzLKQqFc[k0rX4gAJ]) {
                        iW9641T = ZYZzLKQqFc[k0rX4gAJ + 1];
                        ZYZzLKQqFc[k0rX4gAJ + 1] = ZYZzLKQqFc[k0rX4gAJ];
                        ZYZzLKQqFc[k0rX4gAJ] = iW9641T;
                        {
                            m = 0;
                            for (; m < 6;) {
                                W406kBHtF1u = z[k0rX4gAJ + 1][m];
                                z[k0rX4gAJ + 1][m] = z[k0rX4gAJ][m];
                                z[k0rX4gAJ][m] = W406kBHtF1u;
                                m = m + 1;
                            }
                        }
                    }
                    k0rX4gAJ = k0rX4gAJ + 1;
                }
            }
            J9ANd5E = J9ANd5E +1;
        }
    }
    {
        bpx42BERmX = 0;
        for (; bpx42BERmX < rpmgU0;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", z[bpx42BERmX][0], z[bpx42BERmX][1], z[bpx42BERmX][2], z[bpx42BERmX][3], z[bpx42BERmX][4], z[bpx42BERmX][5], ZYZzLKQqFc[bpx42BERmX]);
            bpx42BERmX = bpx42BERmX + 1;
        }
    }
    return 0;
}

