int dkBcSC;

int R4VInBs (char fFMQBCs4ot [], int q6Pzuqghx5, int j) {
    int mO0smZBw;
    int xKAnPuikSRm;
    xKAnPuikSRm = 1;
    for (mO0smZBw = 0; dkBcSC > mO0smZBw; mO0smZBw = mO0smZBw + 1)
        if (fFMQBCs4ot[q6Pzuqghx5 + mO0smZBw] != fFMQBCs4ot[j + mO0smZBw]) {
            xKAnPuikSRm = 0;
            break;
        }
    return xKAnPuikSRm;
}

int main () {
    int G6ehXPIQp, xKAnPuikSRm, SXsy6GV [501] = {0}, q6Pzuqghx5, j, wmNlJ0X5gz = 0;
    char fFMQBCs4ot [501];
    gets (fFMQBCs4ot);
    scanf ("%d\n", &dkBcSC);
    G6ehXPIQp = strlen (fFMQBCs4ot);
    for (q6Pzuqghx5 = G6ehXPIQp -dkBcSC - 1; q6Pzuqghx5 >= 0; q6Pzuqghx5 = q6Pzuqghx5 - 1)
        for (j = q6Pzuqghx5 + 1; j <= G6ehXPIQp -dkBcSC; j = j + 1) {
            xKAnPuikSRm = R4VInBs (fFMQBCs4ot, q6Pzuqghx5, j);
            if (xKAnPuikSRm) {
                SXsy6GV[q6Pzuqghx5] = SXsy6GV[j] + 1;
                if (wmNlJ0X5gz < SXsy6GV[q6Pzuqghx5])
                    wmNlJ0X5gz = SXsy6GV[q6Pzuqghx5];
                break;
            }
        }
    if (!(0 != wmNlJ0X5gz))
        ;
    else {
        printf ("%d\n", wmNlJ0X5gz + 1);
        xKAnPuikSRm = 0;
        for (q6Pzuqghx5 = 0; G6ehXPIQp -dkBcSC > q6Pzuqghx5; q6Pzuqghx5 = q6Pzuqghx5 + 1) {
            if (SXsy6GV[q6Pzuqghx5] == wmNlJ0X5gz) {
                for (j = 0; j < dkBcSC; j = j + 1)
                    printf ("%c", fFMQBCs4ot[j + q6Pzuqghx5]);
                if (xKAnPuikSRm)
                    ;
                xKAnPuikSRm = xKAnPuikSRm + 1;
            }
        }
    }
    return 0;
}

