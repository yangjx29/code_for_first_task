void  KfCgmw0a (int *RbYGwZH5, int *b) {
    int temp;
    temp = *RbYGwZH5;
    *RbYGwZH5 = *b;
    *b = temp;
}

void  main () {
    int nPjtS4Bb5;
    int DJuaIVM2hd;
    int N;
    int RbYGwZH5 [(245 - 235)] [(52 - 49)];
    int k;
    int j;
    int b [50] [10];
    k = (950 - 950);
    scanf ("%d", &nPjtS4Bb5);
    {
        DJuaIVM2hd = 989 - 989;
        for (; DJuaIVM2hd < nPjtS4Bb5;) {
            {
                j = 0;
                for (; j < 3;) {
                    scanf ("%d", &RbYGwZH5[DJuaIVM2hd][j]);
                    j++;
                }
            }
            DJuaIVM2hd++;
        }
    }
    {
        DJuaIVM2hd = 0;
        for (; DJuaIVM2hd < nPjtS4Bb5;) {
            {
                j = 411 - 410;
                for (; j < nPjtS4Bb5;) {
                    b[k][0] = RbYGwZH5[DJuaIVM2hd][0];
                    b[k][(968 - 967)] = RbYGwZH5[DJuaIVM2hd][1];
                    b[k][(542 - 540)] = RbYGwZH5[DJuaIVM2hd][2];
                    b[k][3] = RbYGwZH5[j][0];
                    b[k][4] = RbYGwZH5[j][1];
                    b[k][(477 - 472)] = RbYGwZH5[j][2];
                    b[k++][(876 - 870)] = (RbYGwZH5[DJuaIVM2hd][0] - RbYGwZH5[j][0]) * (RbYGwZH5[DJuaIVM2hd][0] - RbYGwZH5[j][0]) + (RbYGwZH5[DJuaIVM2hd][1] - RbYGwZH5[j][1]) * (RbYGwZH5[DJuaIVM2hd][1] - RbYGwZH5[j][1]) + (RbYGwZH5[DJuaIVM2hd][2] - RbYGwZH5[j][2]) * (RbYGwZH5[DJuaIVM2hd][2] - RbYGwZH5[j][2]);
                    j++;
                }
            }
            DJuaIVM2hd++;
        }
    }
    N = k;
    {
        DJuaIVM2hd = 1;
        for (; DJuaIVM2hd < N;) {
            {
                j = 0;
                for (; j < N -DJuaIVM2hd;) {
                    if (b[j][6] < b[j + 1][6]) {
                        KfCgmw0a (&b[j][0], &b[j + 1][0]);
                        KfCgmw0a (&b[j][1], &b[j + 1][1]);
                        KfCgmw0a (&b[j][2], &b[j + 1][2]);
                        KfCgmw0a (&b[j][3], &b[j + 1][3]);
                        KfCgmw0a (&b[j][4], &b[j + 1][4]);
                        KfCgmw0a (&b[j][5], &b[j + 1][5]);
                        KfCgmw0a (&b[j][6], &b[j + 1][6]);
                    }
                    j++;
                }
            }
            DJuaIVM2hd++;
        }
    }
    {
        DJuaIVM2hd = 0;
        for (; DJuaIVM2hd < N;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", b[DJuaIVM2hd][0], b[DJuaIVM2hd][1], b[DJuaIVM2hd][2], b[DJuaIVM2hd][3], b[DJuaIVM2hd][4], b[DJuaIVM2hd][5], sqrt (b[DJuaIVM2hd][6]));
            DJuaIVM2hd++;
        }
    }
}

