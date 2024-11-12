int main () {
    int UKI5pyb1f2, x3QFyHOz, MF7TGeK9hn, LlV3nZ5i = 0, I7Uzjmx, lEpTw6JjBVQ, tXQK0gzh [100], UFvEmw [100], QC9ANx [100];
    double  iP4rypsxA935, EdKCTs [100] [100] = {-1}, NdWoXUck [500] = {-1}, v6Hy9o [500];
    scanf ("%d", &UKI5pyb1f2);
    {
        x3QFyHOz = 0;
        while (x3QFyHOz < UKI5pyb1f2) {
            scanf ("%d%d%d", &tXQK0gzh[x3QFyHOz], &UFvEmw[x3QFyHOz], &QC9ANx[x3QFyHOz]);
            x3QFyHOz = x3QFyHOz + 1;
        }
    }
    {
        x3QFyHOz = 0;
        while (x3QFyHOz < UKI5pyb1f2 -1) {
            {
                MF7TGeK9hn = x3QFyHOz + 1;
                while (MF7TGeK9hn < UKI5pyb1f2) {
                    EdKCTs[x3QFyHOz][MF7TGeK9hn] = sqrt ((tXQK0gzh[x3QFyHOz] - tXQK0gzh[MF7TGeK9hn]) * (tXQK0gzh[x3QFyHOz] - tXQK0gzh[MF7TGeK9hn]) + (UFvEmw[x3QFyHOz] - UFvEmw[MF7TGeK9hn]) * (UFvEmw[x3QFyHOz] - UFvEmw[MF7TGeK9hn]) + (QC9ANx[x3QFyHOz] - QC9ANx[MF7TGeK9hn]) * (QC9ANx[x3QFyHOz] - QC9ANx[MF7TGeK9hn]));
                    NdWoXUck[LlV3nZ5i] = EdKCTs[x3QFyHOz][MF7TGeK9hn];
                    LlV3nZ5i = LlV3nZ5i +1;
                    MF7TGeK9hn = MF7TGeK9hn +1;
                }
            }
            x3QFyHOz = x3QFyHOz + 1;
        }
    }
    for (x3QFyHOz = 0; x3QFyHOz < LlV3nZ5i -1; x3QFyHOz++) {
        MF7TGeK9hn = 0;
        while (MF7TGeK9hn < LlV3nZ5i -x3QFyHOz - 1) {
            if (NdWoXUck[MF7TGeK9hn] < NdWoXUck[MF7TGeK9hn +1]) {
                iP4rypsxA935 = NdWoXUck[MF7TGeK9hn];
                NdWoXUck[MF7TGeK9hn] = NdWoXUck[MF7TGeK9hn +1];
                NdWoXUck[MF7TGeK9hn +1] = iP4rypsxA935;
            }
            MF7TGeK9hn = MF7TGeK9hn +1;
        }
    }
    lEpTw6JjBVQ = 1;
    {
        x3QFyHOz = 0;
        while (x3QFyHOz < LlV3nZ5i -1) {
            if (NdWoXUck[x3QFyHOz] == NdWoXUck[x3QFyHOz + lEpTw6JjBVQ]) {
                for (lEpTw6JjBVQ = 1; 1; lEpTw6JjBVQ = lEpTw6JjBVQ + 1) {
                    if (NdWoXUck[x3QFyHOz] == NdWoXUck[x3QFyHOz + lEpTw6JjBVQ])
                        NdWoXUck[x3QFyHOz + lEpTw6JjBVQ] = -1;
                    else
                        break;
                }
            }
            x3QFyHOz = x3QFyHOz + 1;
        }
    }
    MF7TGeK9hn = 0;
    {
        x3QFyHOz = 0;
        while (x3QFyHOz < LlV3nZ5i) {
            if (NdWoXUck[x3QFyHOz] != -1) {
                v6Hy9o[MF7TGeK9hn] = NdWoXUck[x3QFyHOz];
                MF7TGeK9hn++;
            }
            x3QFyHOz = x3QFyHOz + 1;
        }
    }
    {
        x3QFyHOz = 0;
        while (x3QFyHOz < MF7TGeK9hn) {
            {
                LlV3nZ5i = 0;
                while (LlV3nZ5i < UKI5pyb1f2 -1) {
                    {
                        I7Uzjmx = LlV3nZ5i +1;
                        while (I7Uzjmx < UKI5pyb1f2) {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            if (EdKCTs[LlV3nZ5i][I7Uzjmx] == v6Hy9o[x3QFyHOz])
                                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", tXQK0gzh[LlV3nZ5i], UFvEmw[LlV3nZ5i], QC9ANx[LlV3nZ5i], tXQK0gzh[I7Uzjmx], UFvEmw[I7Uzjmx], QC9ANx[I7Uzjmx], v6Hy9o[x3QFyHOz]);
                            I7Uzjmx = I7Uzjmx +1;
                        }
                    }
                    LlV3nZ5i++;
                }
            }
            x3QFyHOz++;
        }
    }
    return 0;
}

