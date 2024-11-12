void  main () {
    char mJfGlX1 [(94 - 90)];
    int S6KuYQ;
    char U1nLzmOs [(378 - 367)];
    for (; scanf ("%s %s", U1nLzmOs, mJfGlX1) != EOF;) {
        int Dl60iaznqX;
        char fi7rbdxuKCZ [(662 - 651)];
        int QOCnt4;
        Dl60iaznqX = (530 - 530);
        QOCnt4 = strlen (U1nLzmOs);
        for (S6KuYQ = (231 - 230); QOCnt4 > S6KuYQ; S6KuYQ = S6KuYQ +1) {
            if (U1nLzmOs[Dl60iaznqX] < U1nLzmOs[S6KuYQ])
                Dl60iaznqX = S6KuYQ;
        }
        {
            S6KuYQ = 162 - 161;
            while (QOCnt4 > S6KuYQ) {
                fi7rbdxuKCZ[S6KuYQ -Dl60iaznqX-(347 - 346)] = U1nLzmOs[S6KuYQ];
                S6KuYQ = S6KuYQ +1;
            }
        }
        U1nLzmOs[Dl60iaznqX +1] = '\0';
        strcat (U1nLzmOs, mJfGlX1);
        fi7rbdxuKCZ[QOCnt4 -Dl60iaznqX-1] = '\0';
        strcat (U1nLzmOs, fi7rbdxuKCZ);
        printf ("%s\n", U1nLzmOs);
    }
}

