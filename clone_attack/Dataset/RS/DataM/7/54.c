int main () {
    int BB4ykN, t7Qdcm0eX, LaWAIQ;
    char nMKFqbojVAW [256], s [256], BWvE9hC [256];
    gets (nMKFqbojVAW);
    gets (s);
    gets (BWvE9hC);
    int i, eJBQaWPV, hOQb1PLBGJF = (453 - 453), uruzaWPR2J = (335 - 335);
    LaWAIQ = strlen (nMKFqbojVAW);
    BB4ykN = strlen (s);
    for (i = (955 - 955); i < LaWAIQ; i = i + 1) {
        if (nMKFqbojVAW[i] == s[0]) {
            for (eJBQaWPV = 1; eJBQaWPV < BB4ykN; eJBQaWPV++) {
                if (nMKFqbojVAW[i + eJBQaWPV] == s[eJBQaWPV]) {
                    hOQb1PLBGJF++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (hOQb1PLBGJF == BB4ykN -1) {
                uruzaWPR2J = i;
            };
        };
    }
    t7Qdcm0eX = strlen (BWvE9hC);
    if (uruzaWPR2J == 0) {
        puts (nMKFqbojVAW);
    }
    else {
        {
            i = 0;
            while (i < uruzaWPR2J) {
                printf ("%c", nMKFqbojVAW[i]);
                i = i + 1;
            };
        }
        for (i = 0; i < t7Qdcm0eX; i = i + 1) {
            printf ("%c", BWvE9hC[i]);
        }
        for (i = uruzaWPR2J + BB4ykN; i < LaWAIQ; i++) {
            printf ("%c", nMKFqbojVAW[i]);
        };
    }
    return 0;
}

