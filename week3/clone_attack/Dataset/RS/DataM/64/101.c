int main () {
    double  d [46];
    double  rFTYlO14;
    int qMV9hLNp [(972 - 871)], s8lxgiGvoQE [101], z [101], F4ntVuhDHeb [(253 - 207)], rW5QPOCTv [46];
    int n, gGRWkjpNZ, pivYMb0, XI9a0Qe4xXi, FcuofhMQ0;
    XI9a0Qe4xXi = 0;
    scanf ("%d", &n);
    for (gGRWkjpNZ = (552 - 551); gGRWkjpNZ <= n; gGRWkjpNZ = gGRWkjpNZ + 1)
        scanf ("%d%d%d", &qMV9hLNp[gGRWkjpNZ], &s8lxgiGvoQE[gGRWkjpNZ], &z[gGRWkjpNZ]);
    for (gGRWkjpNZ = 1; n - 1 >= gGRWkjpNZ; gGRWkjpNZ++)
        for (pivYMb0 = gGRWkjpNZ + 1; n >= pivYMb0; pivYMb0 = pivYMb0 + 1) {
            XI9a0Qe4xXi = XI9a0Qe4xXi +1;
            d[XI9a0Qe4xXi] = sqrt ((559.0 - 558.0) * (qMV9hLNp[gGRWkjpNZ] - qMV9hLNp[pivYMb0]) * (qMV9hLNp[gGRWkjpNZ] - qMV9hLNp[pivYMb0]) + 1.0 * (s8lxgiGvoQE[gGRWkjpNZ] - s8lxgiGvoQE[pivYMb0]) * (s8lxgiGvoQE[gGRWkjpNZ] - s8lxgiGvoQE[pivYMb0]) + 1.0 * (z[gGRWkjpNZ] - z[pivYMb0]) * (z[gGRWkjpNZ] - z[pivYMb0]));
            F4ntVuhDHeb[XI9a0Qe4xXi] = gGRWkjpNZ;
            rW5QPOCTv[XI9a0Qe4xXi] = pivYMb0;
        }
    for (gGRWkjpNZ = 1; gGRWkjpNZ <= XI9a0Qe4xXi; gGRWkjpNZ++)
        for (pivYMb0 = 1; pivYMb0 <= XI9a0Qe4xXi -gGRWkjpNZ; pivYMb0 = pivYMb0 + 1)
            if (d[pivYMb0] < d[pivYMb0 + 1]) {
                rFTYlO14 = d[pivYMb0];
                d[pivYMb0] = d[pivYMb0 + 1];
                d[pivYMb0 + 1] = rFTYlO14;
                FcuofhMQ0 = F4ntVuhDHeb[pivYMb0];
                F4ntVuhDHeb[pivYMb0] = F4ntVuhDHeb[pivYMb0 + 1];
                F4ntVuhDHeb[pivYMb0 + 1] = FcuofhMQ0;
                FcuofhMQ0 = rW5QPOCTv[pivYMb0];
                rW5QPOCTv[pivYMb0] = rW5QPOCTv[pivYMb0 + 1];
                rW5QPOCTv[pivYMb0 + 1] = FcuofhMQ0;
            }
    for (gGRWkjpNZ = 1; gGRWkjpNZ <= XI9a0Qe4xXi; gGRWkjpNZ++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", qMV9hLNp[F4ntVuhDHeb[gGRWkjpNZ]], s8lxgiGvoQE[F4ntVuhDHeb[gGRWkjpNZ]], z[F4ntVuhDHeb[gGRWkjpNZ]], qMV9hLNp[rW5QPOCTv[gGRWkjpNZ]], s8lxgiGvoQE[rW5QPOCTv[gGRWkjpNZ]], z[rW5QPOCTv[gGRWkjpNZ]], d[gGRWkjpNZ]);
    return 0;
}

