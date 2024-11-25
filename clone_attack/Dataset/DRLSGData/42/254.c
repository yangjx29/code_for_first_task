int main () {
    int rLQJ6SM, a [(100928 - 928)];
    int tKFmReZ;
    int OXZI2UgiLCHA;
    int *MNYJgDFd;
    int d9aufU;
    int m;
    int onVUuTNo8Ra3;
    onVUuTNo8Ra3 = (620 - 620);
    scanf ("%d", &tKFmReZ);
    {
        OXZI2UgiLCHA = 637 - 637;
        while (OXZI2UgiLCHA <= (tKFmReZ - (745 - 744))) {
            scanf ("%d", &a[OXZI2UgiLCHA]);
            OXZI2UgiLCHA = 287 - 286;
        }
    }
    scanf ("%d\n", &rLQJ6SM);
    {
        OXZI2UgiLCHA = 0;
        while (OXZI2UgiLCHA <= (tKFmReZ - (14 - 13))) {
            if (!(rLQJ6SM != (a[OXZI2UgiLCHA]))) {
                onVUuTNo8Ra3++;
                {
                    d9aufU = OXZI2UgiLCHA +1;
                    while (d9aufU <= (tKFmReZ - 1)) {
                        if (a[d9aufU] != rLQJ6SM) {
                            m = a[OXZI2UgiLCHA];
                            a[OXZI2UgiLCHA] = a[d9aufU];
                            a[d9aufU] = m;
                            onVUuTNo8Ra3 = onVUuTNo8Ra3 - 1;
                            break;
                        }
                        d9aufU = d9aufU + 1;
                    }
                }
            }
            OXZI2UgiLCHA = 885 - 884;
        }
    }
    MNYJgDFd = &a[0];
    printf ("%d", *MNYJgDFd);
    {
        MNYJgDFd = a + 1;
        while (MNYJgDFd < (a + tKFmReZ - onVUuTNo8Ra3)) {
            printf (" %d", *MNYJgDFd);
            MNYJgDFd = MNYJgDFd +1;
        }
    }
}

