int main () {
    int Wwg8ZuM;
    int IUuRZaJX;
    int wfXQIR;
    int yTd4l8VI;
    int Ya3mziuThl;
    int lvaBzOnSK;
    int Mbd34efchZ [(747 - 647)] [100];
    int AiL2ToqN;
    scanf ("%d", &lvaBzOnSK);
    {
        IUuRZaJX = 713 - 713;
        while (IUuRZaJX < lvaBzOnSK) {
            AiL2ToqN = (376 - 376);
            {
                Ya3mziuThl = 590 - 590;
                while (Ya3mziuThl < lvaBzOnSK) {
                    {
                        yTd4l8VI = 427 - 427;
                        for (; yTd4l8VI < lvaBzOnSK;) {
                            scanf ("%d", &Mbd34efchZ[Ya3mziuThl][yTd4l8VI]);
                            yTd4l8VI = yTd4l8VI + 1;
                        }
                    }
                    Ya3mziuThl = Ya3mziuThl +1;
                }
            }
            wfXQIR = lvaBzOnSK;
            for (; wfXQIR > (335 - 334);) {
                {
                    Ya3mziuThl = (640 - 640);
                    for (; Ya3mziuThl < wfXQIR;) {
                        Wwg8ZuM = 100000;
                        {
                            yTd4l8VI = 0;
                            for (; yTd4l8VI < wfXQIR;) {
                                if (Mbd34efchZ[Ya3mziuThl][yTd4l8VI] < Wwg8ZuM)
                                    Wwg8ZuM = Mbd34efchZ[Ya3mziuThl][yTd4l8VI];
                                yTd4l8VI = yTd4l8VI + 1;
                            }
                        }
                        {
                            yTd4l8VI = 0;
                            for (; yTd4l8VI < wfXQIR;) {
                                Mbd34efchZ[Ya3mziuThl][yTd4l8VI] -= Wwg8ZuM;
                                yTd4l8VI = yTd4l8VI + 1;
                            }
                        }
                        Ya3mziuThl = Ya3mziuThl +1;
                    }
                }
                {
                    yTd4l8VI = 0;
                    while (yTd4l8VI < lvaBzOnSK) {
                        Wwg8ZuM = 100000;
                        {
                            Ya3mziuThl = 0;
                            for (; Ya3mziuThl < wfXQIR;) {
                                if (Mbd34efchZ[Ya3mziuThl][yTd4l8VI] < Wwg8ZuM)
                                    Wwg8ZuM = Mbd34efchZ[Ya3mziuThl][yTd4l8VI];
                                Ya3mziuThl = Ya3mziuThl +1;
                            }
                        }
                        if (Wwg8ZuM == 0)
                            continue;
                        else {
                            Ya3mziuThl = 0;
                            for (; Ya3mziuThl < wfXQIR;) {
                                Mbd34efchZ[Ya3mziuThl][yTd4l8VI] -= Wwg8ZuM;
                                Ya3mziuThl = Ya3mziuThl +1;
                            }
                        }
                        yTd4l8VI = yTd4l8VI + 1;
                    }
                }
                AiL2ToqN += Mbd34efchZ[1][1];
                wfXQIR = wfXQIR - 1;
                {
                    Ya3mziuThl = 1;
                    for (; Ya3mziuThl < wfXQIR - 1;) {
                        Mbd34efchZ[Ya3mziuThl][0] = Mbd34efchZ[Ya3mziuThl +1][0];
                        Ya3mziuThl = Ya3mziuThl +1;
                    }
                }
                {
                    yTd4l8VI = 1;
                    for (; yTd4l8VI < wfXQIR - 1;) {
                        Mbd34efchZ[0][yTd4l8VI] = Mbd34efchZ[0][yTd4l8VI + 1];
                        yTd4l8VI = yTd4l8VI + 1;
                    }
                }
                {
                    Ya3mziuThl = 1;
                    for (; Ya3mziuThl < wfXQIR - 1;) {
                        {
                            yTd4l8VI = 1;
                            for (; yTd4l8VI < wfXQIR - 1;) {
                                Mbd34efchZ[Ya3mziuThl][yTd4l8VI] = Mbd34efchZ[Ya3mziuThl +1][yTd4l8VI + 1];
                                yTd4l8VI++;
                            }
                        }
                        Ya3mziuThl++;
                    }
                }
            }
            printf ("%d\n", AiL2ToqN);
            IUuRZaJX = IUuRZaJX +1;
        }
    }
    return 0;
}

