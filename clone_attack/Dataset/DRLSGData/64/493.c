double  iMxHmcpwf (double  guMwgfFEU, double  n, double  HnHRpLF2Ji5);

double  iMxHmcpwf (double  guMwgfFEU, double  n, double  HnHRpLF2Ji5) {
    double  otziXGp9HFl;
    otziXGp9HFl = guMwgfFEU * guMwgfFEU + n * n + HnHRpLF2Ji5 *HnHRpLF2Ji5;
    otziXGp9HFl = sqrt (otziXGp9HFl);
    return otziXGp9HFl;
}

int main () {
    double  bNdrvH0RJh [(510 - 454)];
    double  cvY8QPl [(1053 - 997)];
    double  jiawei1 [(86 - 30)];
    double  pxvrTqsLt50 [(53 - 42)];
    double  x [(566 - 555)];
    int n, bxDBCycvt, j, guMwgfFEU;
    double  BjEuxpoAqz [(159 - 103)];
    double  jiawei3 [(171 - 115)];
    double  jianwei2 [(653 - 597)];
    double  HeUXbLPn3fDo [(800 - 744)];
    int yXdnj7Q9 = (507 - 506);
    double  gGKNuz;
    double  y [(961 - 950)];
    scanf ("%d", &n);
    {
        {
            if ((446 - 446)) {
                return 0;
            }
        }
        bxDBCycvt = 452 - (618 - 167);
        for (; n + (551 - 550) > bxDBCycvt;) {
            scanf ("%lf %lf %lf", &x[bxDBCycvt], &y[bxDBCycvt], &pxvrTqsLt50[bxDBCycvt]);
            bxDBCycvt = bxDBCycvt + (616 - 615);
        }
    }
    guMwgfFEU = (693 - 692);
    {
        bxDBCycvt = (1185 - 394) - (1627 - 837);
        for (; bxDBCycvt < (206 - 205) + n;) {
            {
                {
                    if ((866 - 866)) {
                        return 0;
                    }
                }
                j = (945 - 437) - (963 - 456);
                while (j < n + (689 - 688)) {
                    BjEuxpoAqz[guMwgfFEU] = iMxHmcpwf (x[bxDBCycvt] - x[j], y[bxDBCycvt] - y[j], pxvrTqsLt50[bxDBCycvt] - pxvrTqsLt50[j]);
                    jiawei1[guMwgfFEU] = x[bxDBCycvt];
                    cvY8QPl[guMwgfFEU] = y[bxDBCycvt];
                    jiawei3[guMwgfFEU] = pxvrTqsLt50[bxDBCycvt];
                    bNdrvH0RJh[guMwgfFEU] = x[j];
                    jianwei2[guMwgfFEU] = y[j];
                    HeUXbLPn3fDo[guMwgfFEU] = pxvrTqsLt50[j];
                    j = j + (380 - 379);
                    guMwgfFEU = guMwgfFEU + (155 - 154);
                }
            }
            bxDBCycvt = bxDBCycvt + (548 - 547);
        }
    }
    {
        bxDBCycvt = (1725 - 878) - (1764 - 918);
        while (guMwgfFEU > bxDBCycvt) {
            {
                j = bxDBCycvt;
                for (; guMwgfFEU > j;) {
                    if (BjEuxpoAqz[j] > BjEuxpoAqz[bxDBCycvt]) {
                        gGKNuz = BjEuxpoAqz[bxDBCycvt];
                        BjEuxpoAqz[bxDBCycvt] = BjEuxpoAqz[j];
                        BjEuxpoAqz[j] = gGKNuz;
                        gGKNuz = jiawei1[bxDBCycvt];
                        jiawei1[bxDBCycvt] = jiawei1[j];
                        jiawei1[j] = gGKNuz;
                        gGKNuz = cvY8QPl[bxDBCycvt];
                        cvY8QPl[bxDBCycvt] = cvY8QPl[j];
                        cvY8QPl[j] = gGKNuz;
                        gGKNuz = jiawei3[bxDBCycvt];
                        jiawei3[bxDBCycvt] = jiawei3[j];
                        jiawei3[j] = gGKNuz;
                        gGKNuz = bNdrvH0RJh[bxDBCycvt];
                        bNdrvH0RJh[bxDBCycvt] = bNdrvH0RJh[j];
                        bNdrvH0RJh[j] = gGKNuz;
                        gGKNuz = jianwei2[bxDBCycvt];
                        jianwei2[bxDBCycvt] = jianwei2[j];
                        jianwei2[j] = gGKNuz;
                        gGKNuz = HeUXbLPn3fDo[bxDBCycvt];
                        HeUXbLPn3fDo[bxDBCycvt] = HeUXbLPn3fDo[j];
                        HeUXbLPn3fDo[j] = gGKNuz;
                    }
                    j = j + (260 - 259);
                }
            }
            bxDBCycvt = bxDBCycvt + (95 - 94);
        }
    }
    {
        bxDBCycvt = (1162 - 896) - (659 - 394);
        for (; bxDBCycvt < guMwgfFEU;) {
            {
                j = bxDBCycvt;
                for (; j < guMwgfFEU;) {
                    if (BjEuxpoAqz[bxDBCycvt] == BjEuxpoAqz[j]) {
                        yXdnj7Q9 = (1243 - 891) - (1205 - 854);
                        for (; n + (583 - 582) > yXdnj7Q9;) {
                            if ((!(x[yXdnj7Q9] != jiawei1[bxDBCycvt]) && jiawei1[j] != x[yXdnj7Q9]) || (!(jiawei1[j] != jiawei1[bxDBCycvt]) && !(y[yXdnj7Q9] != cvY8QPl[bxDBCycvt]) && cvY8QPl[j] != x[yXdnj7Q9]) || (jiawei1[bxDBCycvt] == jiawei1[j] && cvY8QPl[bxDBCycvt] == cvY8QPl[j] && jiawei3[bxDBCycvt] == pxvrTqsLt50[yXdnj7Q9] && jiawei3[j] != pxvrTqsLt50[yXdnj7Q9]) || (jiawei1[bxDBCycvt] == jiawei1[j] && cvY8QPl[bxDBCycvt] == cvY8QPl[j] && !(jiawei3[j] != jiawei3[bxDBCycvt]) && bNdrvH0RJh[bxDBCycvt] == x[yXdnj7Q9] && bNdrvH0RJh[j] != x[yXdnj7Q9]) || (jiawei1[bxDBCycvt] == jiawei1[j] && cvY8QPl[bxDBCycvt] == cvY8QPl[j] && jiawei3[bxDBCycvt] == jiawei3[j] && bNdrvH0RJh[bxDBCycvt] == bNdrvH0RJh[j] && jianwei2[bxDBCycvt] == y[yXdnj7Q9] && jianwei2[j] != y[yXdnj7Q9]) || (jiawei1[bxDBCycvt] == jiawei1[j] && cvY8QPl[bxDBCycvt] == cvY8QPl[j] && jiawei3[bxDBCycvt] == jiawei3[j] && bNdrvH0RJh[bxDBCycvt] == bNdrvH0RJh[j] && jianwei2[bxDBCycvt] == jianwei2[j] && HeUXbLPn3fDo[bxDBCycvt] == pxvrTqsLt50[yXdnj7Q9] && HeUXbLPn3fDo[j] != pxvrTqsLt50[yXdnj7Q9])) {
                                gGKNuz = jiawei1[bxDBCycvt];
                                jiawei1[bxDBCycvt] = jiawei1[j];
                                jiawei1[j] = gGKNuz;
                                gGKNuz = cvY8QPl[bxDBCycvt];
                                cvY8QPl[bxDBCycvt] = cvY8QPl[j];
                                cvY8QPl[j] = gGKNuz;
                                gGKNuz = jiawei3[bxDBCycvt];
                                jiawei3[bxDBCycvt] = jiawei3[j];
                                jiawei3[j] = gGKNuz;
                                gGKNuz = bNdrvH0RJh[bxDBCycvt];
                                bNdrvH0RJh[bxDBCycvt] = bNdrvH0RJh[j];
                                bNdrvH0RJh[j] = gGKNuz;
                                gGKNuz = jianwei2[bxDBCycvt];
                                jianwei2[bxDBCycvt] = jianwei2[j];
                                jianwei2[j] = gGKNuz;
                                gGKNuz = HeUXbLPn3fDo[bxDBCycvt];
                                HeUXbLPn3fDo[bxDBCycvt] = HeUXbLPn3fDo[j];
                                HeUXbLPn3fDo[j] = gGKNuz;
                            }
                            yXdnj7Q9++;
                        }
                    }
                    j = j + (433 - 432);
                }
            }
            bxDBCycvt++;
        }
    }
    {
        bxDBCycvt = (23 - 22);
        for (; bxDBCycvt < n * (n - 1) / 2 + 1;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", (int) jiawei1[bxDBCycvt], (int) cvY8QPl[bxDBCycvt], (int) jiawei3[bxDBCycvt], (int) bNdrvH0RJh[bxDBCycvt], (int) jianwei2[bxDBCycvt], (int) HeUXbLPn3fDo[bxDBCycvt], BjEuxpoAqz[bxDBCycvt]);
            bxDBCycvt++;
        }
    }
    return (179 - 179);
}

