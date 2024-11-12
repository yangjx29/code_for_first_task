int QG98AZUsX0 (int unZ0aW1, int unUBWFXf) {
    if (unZ0aW1 > 4 || unZ0aW1 < (926 - 926) || unUBWFXf > 4 || unUBWFXf < 0)
        return 0;
    else
        return 1;
}

int main () {
    int unZ0aW1;
    int unUBWFXf;
    int LNH2yDnGW0S;
    int nyUJbnC;
    int C6MVrFJLg4B [(151 - 146)] [(374 - 369)];
    int qh5Xqico;
    int *DctAF0D = C6MVrFJLg4B[0];
    for (unZ0aW1 = 0; unZ0aW1 < 5; unZ0aW1 = unZ0aW1 + 1)
        for (unUBWFXf = 0; unUBWFXf < 5; unUBWFXf = unUBWFXf + 1)
            scanf ("%d", &C6MVrFJLg4B[unZ0aW1][unUBWFXf]);
    scanf ("%d%d", &LNH2yDnGW0S, &nyUJbnC);
    if (QG98AZUsX0 (LNH2yDnGW0S, nyUJbnC)) {
        for (unZ0aW1 = 0; unZ0aW1 < 5; unZ0aW1 = unZ0aW1 + 1) {
            qh5Xqico = *(DctAF0D +LNH2yDnGW0S*5 + unZ0aW1);
            *(DctAF0D +LNH2yDnGW0S*5 + unZ0aW1) = *(DctAF0D +nyUJbnC * 5 + unZ0aW1);
            *(DctAF0D +nyUJbnC * 5 + unZ0aW1) = qh5Xqico;
        }
        for (unZ0aW1 = 0; unZ0aW1 < 5; unZ0aW1 = unZ0aW1 + 1) {
            for (unUBWFXf = 0; unUBWFXf < 4; unUBWFXf++)
                printf ("%d ", C6MVrFJLg4B[unZ0aW1][unUBWFXf]);
            printf ("%d\n", C6MVrFJLg4B[unZ0aW1][4]);
        };
    }
    else
        ;
    return 0;
}

