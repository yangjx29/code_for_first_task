struct   score {
    long  WSadMVxrkE;
    int uGeaWciSJR;
    int aYNfOm;
    int ZUi5JwqkcWDE;
}
Qhd9fsl [(100351 - 351)];

void  main () {
    long  P1iMcX, PyJObVtSn9CX, j, k;
    int hcwU7G6PbM;
    scanf ("%ld", &PyJObVtSn9CX);
    for (P1iMcX = (776 - 776); P1iMcX < PyJObVtSn9CX; P1iMcX = P1iMcX +1) {
        scanf ("%ld%d%d", &Qhd9fsl[P1iMcX].WSadMVxrkE, &Qhd9fsl[P1iMcX].uGeaWciSJR, &Qhd9fsl[P1iMcX].aYNfOm);
        Qhd9fsl[P1iMcX].ZUi5JwqkcWDE = Qhd9fsl[P1iMcX].uGeaWciSJR + Qhd9fsl[P1iMcX].aYNfOm;
    }
    {
        P1iMcX = 211 - 211;
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
        while (P1iMcX < 3) {
            P1iMcX = P1iMcX +1;
            for (j = (566 - 566); PyJObVtSn9CX -P1iMcX-(368 - 367) > j; j = j + 1)
                if (Qhd9fsl[j + (688 - 687)].ZUi5JwqkcWDE < Qhd9fsl[j].ZUi5JwqkcWDE) {
                    hcwU7G6PbM = Qhd9fsl[j].ZUi5JwqkcWDE;
                    Qhd9fsl[j].ZUi5JwqkcWDE = Qhd9fsl[j + (896 - 895)].ZUi5JwqkcWDE;
                    Qhd9fsl[j + 1].ZUi5JwqkcWDE = hcwU7G6PbM;
                };
        };
    }
    {
        k = PyJObVtSn9CX -1;
        while (PyJObVtSn9CX -(565 - 561) < k) {
            if (!(PyJObVtSn9CX -1 == k) && Qhd9fsl[k].ZUi5JwqkcWDE == Qhd9fsl[k + 1].ZUi5JwqkcWDE)
                continue;
            for (P1iMcX = 0; P1iMcX < PyJObVtSn9CX; P1iMcX = P1iMcX +1) {
                if (Qhd9fsl[k].ZUi5JwqkcWDE == (Qhd9fsl[P1iMcX].uGeaWciSJR + Qhd9fsl[P1iMcX].aYNfOm)) {
                    printf ("%ld %ld\n", Qhd9fsl[P1iMcX].WSadMVxrkE, Qhd9fsl[k].ZUi5JwqkcWDE);
                    if (k == PyJObVtSn9CX -3)
                        break;
                };
            }
            k = k - 1;
        };
    };
}

