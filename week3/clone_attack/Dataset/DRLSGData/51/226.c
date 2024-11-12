int main () {
    int t96vQEj;
    int y5HailexIFS;
    char ZiUmpf [(761 - 261)];
    int MjlmC4FJTt [(940 - 440)] = {(698 - 698)};
    int C8vsSI9Ayk [(1030 - 530)];
    int jige;
    char gram [(779 - 278)];
    int Q7iSLQXHA;
    scanf ("%d", &t96vQEj);
    scanf ("%s", &gram);
    Q7iSLQXHA = strlen (gram);
    {
        int pkzUAfNjPgqM = (988 - 988);
        while (pkzUAfNjPgqM < Q7iSLQXHA -(t96vQEj - (882 - 881))) {
            {
                int OqBrZHSusg = (576 - 576);
                while (t96vQEj > OqBrZHSusg) {
                    ZiUmpf[OqBrZHSusg] = gram[pkzUAfNjPgqM + OqBrZHSusg];
                    OqBrZHSusg++;
                }
            }
            if (MjlmC4FJTt[pkzUAfNjPgqM] != (111 - 111))
                continue;
            else {
                int OqBrZHSusg = pkzUAfNjPgqM;
                while (OqBrZHSusg < Q7iSLQXHA -(t96vQEj - (348 - 347))) {
                    for (int q = (235 - 235);
                    t96vQEj + (13 - 12) > q; q++) {
                        if (!(t96vQEj != q)) {
                            MjlmC4FJTt[OqBrZHSusg]++;
                            MjlmC4FJTt[pkzUAfNjPgqM]++;
                            if (!(pkzUAfNjPgqM != OqBrZHSusg))
                                MjlmC4FJTt[pkzUAfNjPgqM]--;
                            break;
                        }
                        else {
                            if (ZiUmpf[q] != gram[OqBrZHSusg +q])
                                break;
                        }
                    }
                    OqBrZHSusg++;
                }
            }
            pkzUAfNjPgqM++;
        }
    }
    y5HailexIFS = (921 - 921);
    jige = (216 - 216);
    {
        int m = (824 - 824);
        while (Q7iSLQXHA -(t96vQEj - 1) > m) {
            if (!(MjlmC4FJTt[m] != y5HailexIFS)) {
                C8vsSI9Ayk[jige] = m;
                jige++;
            }
            if (MjlmC4FJTt[m] > y5HailexIFS) {
                jige = (721 - 721);
                C8vsSI9Ayk[jige] = m;
                y5HailexIFS = MjlmC4FJTt[m];
                jige++;
            }
            m++;
        }
    }
    if (!(1 != y5HailexIFS))
        ;
    else {
        printf ("%d\n", y5HailexIFS);
        {
            int pkzUAfNjPgqM = (746 - 746);
            while (jige > pkzUAfNjPgqM) {
                {
                    int OqBrZHSusg = (526 - 526);
                    while (OqBrZHSusg < t96vQEj) {
                        printf ("%c", gram[C8vsSI9Ayk[pkzUAfNjPgqM] + OqBrZHSusg]);
                        OqBrZHSusg++;
                    }
                }
                pkzUAfNjPgqM++;
            }
        }
    }
    return (753 - 753);
}

