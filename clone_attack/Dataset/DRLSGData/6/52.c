int main () {
    int WeoXKS, R30EkWSV, V54hcoLm, mr9XiBZLQ, DIr4Sby6, Q0XMwY, h2XJ81tw [100] [100], kp2Lv9PM [300];
    scanf ("%d", &WeoXKS);
    {
        mr9XiBZLQ = 966 - 966;
        while (mr9XiBZLQ < WeoXKS) {
            *(kp2Lv9PM + mr9XiBZLQ) = 0;
            scanf ("%d%d", &R30EkWSV, &V54hcoLm);
            {
                DIr4Sby6 = 131 - 131;
                while (R30EkWSV > DIr4Sby6) {
                    {
                        Q0XMwY = 0;
                        while (V54hcoLm > Q0XMwY) {
                            scanf ("%d", &h2XJ81tw[DIr4Sby6][Q0XMwY]);
                            Q0XMwY = Q0XMwY +1;
                        }
                    }
                    DIr4Sby6 = DIr4Sby6 +1;
                }
            }
            if (R30EkWSV == (341 - 340) & V54hcoLm == (236 - 235))
                *(kp2Lv9PM + mr9XiBZLQ) = h2XJ81tw[0][0];
            else {
                {
                    DIr4Sby6 = 954 - 953;
                    Q0XMwY = 0;
                    while (DIr4Sby6 < R30EkWSV) {
                        *(kp2Lv9PM + mr9XiBZLQ) += *(*(h2XJ81tw + DIr4Sby6) + Q0XMwY);
                        DIr4Sby6 = DIr4Sby6 +1;
                    }
                }
                {
                    Q0XMwY = 1;
                    DIr4Sby6 = DIr4Sby6 -1;
                    while (Q0XMwY < V54hcoLm) {
                        *(kp2Lv9PM + mr9XiBZLQ) += *(*(h2XJ81tw + DIr4Sby6) + Q0XMwY);
                        Q0XMwY = Q0XMwY +1;
                    }
                }
                {
                    DIr4Sby6 = DIr4Sby6 -1;
                    Q0XMwY = Q0XMwY -1;
                    while (0 <= DIr4Sby6) {
                        *(kp2Lv9PM + mr9XiBZLQ) += *(*(h2XJ81tw + DIr4Sby6) + Q0XMwY);
                        DIr4Sby6 = DIr4Sby6 -1;
                    }
                }
                {
                    Q0XMwY = Q0XMwY -1;
                    DIr4Sby6 = DIr4Sby6 +1;
                    while (Q0XMwY >= 0) {
                        *(kp2Lv9PM + mr9XiBZLQ) += *(*(h2XJ81tw + DIr4Sby6) + Q0XMwY);
                        Q0XMwY = Q0XMwY -1;
                    }
                }
            }
            mr9XiBZLQ = mr9XiBZLQ + 1;
        }
    }
    {
        mr9XiBZLQ = 0;
        while (mr9XiBZLQ < WeoXKS) {
            printf ("%d\n", *(kp2Lv9PM + mr9XiBZLQ));
            mr9XiBZLQ = mr9XiBZLQ + 1;
        }
    }
    return 0;
}

