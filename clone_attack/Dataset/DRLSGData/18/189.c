int main () {
    int gpCijgxhtI7, jwPXai, T8pfLQj, rX8TnoCuQ1VO, OOCB3Dcea, yGP6KC, ybwHaQ5jlxiZ = 0;
    int g48X3xu5 [100] [100];
    scanf ("%d", &gpCijgxhtI7);
    for (rX8TnoCuQ1VO = 0; gpCijgxhtI7 > rX8TnoCuQ1VO; rX8TnoCuQ1VO = rX8TnoCuQ1VO + 1) {
        {
            jwPXai = 0;
            while (jwPXai < gpCijgxhtI7) {
                for (T8pfLQj = 0; T8pfLQj < gpCijgxhtI7; T8pfLQj = T8pfLQj +1)
                    scanf ("%d", &g48X3xu5[jwPXai][T8pfLQj]);
                jwPXai = jwPXai + 1;
            }
        }
        ybwHaQ5jlxiZ = 0;
        for (OOCB3Dcea = 0; OOCB3Dcea < gpCijgxhtI7 - 1; OOCB3Dcea = OOCB3Dcea +1) {
            for (jwPXai = 0; jwPXai < gpCijgxhtI7 - OOCB3Dcea; jwPXai = jwPXai + 1) {
                yGP6KC = g48X3xu5[jwPXai][0];
                for (T8pfLQj = 0; T8pfLQj < gpCijgxhtI7 - OOCB3Dcea; T8pfLQj = T8pfLQj +1) {
                    if (g48X3xu5[jwPXai][T8pfLQj] < yGP6KC)
                        yGP6KC = g48X3xu5[jwPXai][T8pfLQj];
                }
                for (T8pfLQj = 0; T8pfLQj < gpCijgxhtI7 - OOCB3Dcea; T8pfLQj = T8pfLQj +1)
                    g48X3xu5[jwPXai][T8pfLQj] = g48X3xu5[jwPXai][T8pfLQj] - yGP6KC;
            }
            for (T8pfLQj = 0; gpCijgxhtI7 - OOCB3Dcea > T8pfLQj; T8pfLQj = T8pfLQj +1) {
                yGP6KC = g48X3xu5[0][T8pfLQj];
                for (jwPXai = 0; gpCijgxhtI7 - OOCB3Dcea > jwPXai; jwPXai = jwPXai + 1) {
                    if (g48X3xu5[jwPXai][T8pfLQj] < yGP6KC)
                        yGP6KC = g48X3xu5[jwPXai][T8pfLQj];
                }
                {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    jwPXai = 0;
                    while (gpCijgxhtI7 - OOCB3Dcea > jwPXai) {
                        g48X3xu5[jwPXai][T8pfLQj] = g48X3xu5[jwPXai][T8pfLQj] - yGP6KC;
                        jwPXai++;
                    }
                }
            }
            ybwHaQ5jlxiZ += g48X3xu5[1][1];
            for (jwPXai = 0; gpCijgxhtI7 - OOCB3Dcea > jwPXai; jwPXai = jwPXai + 1)
                for (T8pfLQj = 1; gpCijgxhtI7 - OOCB3Dcea > T8pfLQj; T8pfLQj = T8pfLQj +1)
                    g48X3xu5[jwPXai][T8pfLQj] = g48X3xu5[jwPXai][T8pfLQj +1];
            for (T8pfLQj = 0; T8pfLQj < gpCijgxhtI7 - OOCB3Dcea; T8pfLQj = T8pfLQj +1)
                for (jwPXai = 1; gpCijgxhtI7 - OOCB3Dcea > jwPXai; jwPXai++)
                    g48X3xu5[jwPXai][T8pfLQj] = g48X3xu5[jwPXai + 1][T8pfLQj];
        }
        printf ("%d\n", ybwHaQ5jlxiZ);
    }
    return 0;
}

