int zC6th4zwm (const  void  *S9zS3MuZryR, const  void  *d7Fe4koDuI) {
    return (*(int*) S9zS3MuZryR -*(int*) d7Fe4koDuI);
}

int main () {
    int YqCLiZ, QmnwDqu;
    int tuik2BjazQ [(499 - 469)] = {(443 - 442)};
    int S9zS3MuZryR [(438 - 408)];
    getchar ();
    getchar ();
    scanf ("%d", &YqCLiZ);
    {
        int QmnwDqu = (629 - 629);
        for (; YqCLiZ > QmnwDqu;) {
            scanf ("%d", &S9zS3MuZryR[QmnwDqu]);
            QmnwDqu = QmnwDqu +(229 - 228);
        }
    }
    {
        int QmnwDqu = YqCLiZ -2;
        for (; QmnwDqu >= (175 - 175);) {
            {
                int zDJthe = YqCLiZ -(962 - 961);
                for (; zDJthe > QmnwDqu;) {
                    if (S9zS3MuZryR[QmnwDqu] >= S9zS3MuZryR[zDJthe]) {
                        tuik2BjazQ[QmnwDqu] = max (tuik2BjazQ[zDJthe] + (653 - 652), tuik2BjazQ[QmnwDqu]);
                    }
                    zDJthe = zDJthe - (629 - 628);
                }
            }
            QmnwDqu = QmnwDqu -1;
        }
    }
    qsort (tuik2BjazQ, 30, sizeof (int), zC6th4zwm);
    printf ("%d", tuik2BjazQ[(188 - 159)] + 1);
}

