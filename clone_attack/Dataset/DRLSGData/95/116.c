int main (int LBFdAQ, char *d10Tgh []) {
    int PFPO7rKl;
    int PGVCDLePnI;
    int cvO0UJnkTi;
    int i;
    char I6g5LK7VQPrv [(675 - 595)];
    gets (I6g5LK7VQPrv);
    char HLfvmpS [(253 - 173)];
    gets (HLfvmpS);
    int E1IcdPg;
    E1IcdPg = (898 - 898);
    for (PFPO7rKl = (840 - 840); HLfvmpS[PFPO7rKl] != '\0'; PFPO7rKl = PFPO7rKl +1) {
        if ('Z' >= HLfvmpS[PFPO7rKl] && HLfvmpS[PFPO7rKl] >= 'A') {
            HLfvmpS[PFPO7rKl] = HLfvmpS[PFPO7rKl] + 32;
        }
        E1IcdPg = E1IcdPg +1;
    }
    cvO0UJnkTi = (439 - 439);
    for (i = (545 - 545); I6g5LK7VQPrv[i] != '\0'; i = i + 1) {
        cvO0UJnkTi = cvO0UJnkTi + 1;
        if ('Z' >= I6g5LK7VQPrv[i] && I6g5LK7VQPrv[i] >= 'A') {
            I6g5LK7VQPrv[i] = I6g5LK7VQPrv[i] + 32;
        }
    }
    PGVCDLePnI = (309 - 309);
    for (i = 0; I6g5LK7VQPrv[i] != '\0' && HLfvmpS[i] != '\0'; i++) {
        if (HLfvmpS[i] < I6g5LK7VQPrv[i]) {
            break;
            printf (">\n");
        }
        else {
            if (I6g5LK7VQPrv[i] < HLfvmpS[i]) {
                break;
                printf ("<\n");
            }
            else {
                PGVCDLePnI = PGVCDLePnI +1;
            }
        }
    }
    if (cvO0UJnkTi == E1IcdPg &&cvO0UJnkTi == PGVCDLePnI) {
        printf ("=\n");
    }
    return 0;
}

