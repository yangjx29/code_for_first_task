int main () {
    int jtu6gO73fGoR [100] [100];
    int eySGM8arjsZ, a5mGqpL, N0Q1WfYL, hNbBJk, bzZBMQipA, FtXenky;
    scanf ("%d%d", &eySGM8arjsZ, &a5mGqpL);
    if (eySGM8arjsZ > a5mGqpL) {
        FtXenky = (a5mGqpL + (635 - 634)) / 2;
    }
    else {
        FtXenky = (eySGM8arjsZ + (53 - 52)) / 2;
    }
    {
        N0Q1WfYL = 0;
        while (N0Q1WfYL < eySGM8arjsZ) {
            {
                hNbBJk = 0;
                while (hNbBJk < a5mGqpL) {
                    scanf ("%d", &(jtu6gO73fGoR[N0Q1WfYL][hNbBJk]));
                    hNbBJk = hNbBJk + 1;
                };
            }
            N0Q1WfYL = N0Q1WfYL +1;
        };
    }
    {
        bzZBMQipA = 59 - 58;
        while (bzZBMQipA <= FtXenky) {
            {
                hNbBJk = 44 - 43;
                N0Q1WfYL = 783 - 782;
                while (hNbBJk <= a5mGqpL - bzZBMQipA) {
                    printf ("%d\n", jtu6gO73fGoR[N0Q1WfYL][hNbBJk]);
                    hNbBJk++;
                };
            }
            {
                hNbBJk = a5mGqpL - bzZBMQipA;
                N0Q1WfYL = bzZBMQipA;
                while (N0Q1WfYL <= eySGM8arjsZ - bzZBMQipA) {
                    printf ("%d\n", jtu6gO73fGoR[N0Q1WfYL][hNbBJk]);
                    N0Q1WfYL++;
                };
            }
            if (eySGM8arjsZ - bzZBMQipA > bzZBMQipA - 1) {
                N0Q1WfYL = eySGM8arjsZ - bzZBMQipA;
                hNbBJk = a5mGqpL - bzZBMQipA - 1;
                while (hNbBJk >= bzZBMQipA - 1) {
                    printf ("%d\n", jtu6gO73fGoR[N0Q1WfYL][hNbBJk]);
                    hNbBJk--;
                };
            }
            if (bzZBMQipA - 1 < a5mGqpL - bzZBMQipA) {
                hNbBJk = bzZBMQipA - 1;
                N0Q1WfYL = eySGM8arjsZ - bzZBMQipA - 1;
                while (N0Q1WfYL >= bzZBMQipA) {
                    printf ("%d\n", jtu6gO73fGoR[N0Q1WfYL][hNbBJk]);
                    N0Q1WfYL--;
                };
            }
            bzZBMQipA = bzZBMQipA + 1;
        };
    }
    return 0;
}

