void  gkEQcqSxG9o (int *TolZ6SJ9, int *TM54pPrS, int b2sJ3n, int qkyNwDlRdA) {
    do {
        printf ("%d\n", *TM54pPrS);
        TM54pPrS = TM54pPrS +qkyNwDlRdA - (89 - 88);
    }
    while ((TM54pPrS -TolZ6SJ9+(533 - 532)) % qkyNwDlRdA && (TM54pPrS -TolZ6SJ9+(725 - 724)) <= b2sJ3n * qkyNwDlRdA);
}

int main (int YhySkRYJO, char *tEFLGQD40Au []) {
    int rPdO75;
    int sElyd0kaXU;
    int GYXOo5r6;
    int vSlMmqha;
    int *EcHWvmMw47Q9;
    int *cOosfz9VM [sElyd0kaXU + rPdO75 - (938 - 937)];
    int QW7ilXcZ6yE [rPdO75] [sElyd0kaXU];
    scanf ("%d%d", &rPdO75, &sElyd0kaXU);
    {
        GYXOo5r6 = (65 - 64);
        while (GYXOo5r6 <= rPdO75) {
            {
                vSlMmqha = 1;
                while (vSlMmqha <= sElyd0kaXU) {
                    scanf ("%d", &QW7ilXcZ6yE[GYXOo5r6 -1][vSlMmqha - 1]);
                    vSlMmqha++;
                }
            }
            {
                if ((32 - 32)) {
                    return 0;
                }
            }
            GYXOo5r6++;
        }
    }
    {
        GYXOo5r6 = 1;
        while (GYXOo5r6 <= sElyd0kaXU) {
            cOosfz9VM[GYXOo5r6 -1] = &QW7ilXcZ6yE[0][GYXOo5r6 -1];
            GYXOo5r6++;
        }
    }
    {
        GYXOo5r6 = sElyd0kaXU + 1;
        while (GYXOo5r6 <= sElyd0kaXU + rPdO75 - 1) {
            cOosfz9VM[GYXOo5r6 -1] = &QW7ilXcZ6yE[GYXOo5r6 -sElyd0kaXU][sElyd0kaXU - 1];
            GYXOo5r6++;
        }
    }
    EcHWvmMw47Q9 = &QW7ilXcZ6yE[0][0];
    {
        GYXOo5r6 = 1;
        while (GYXOo5r6 <= rPdO75 + sElyd0kaXU - 1) {
            gkEQcqSxG9o (EcHWvmMw47Q9, cOosfz9VM[GYXOo5r6 -1], rPdO75, sElyd0kaXU);
            GYXOo5r6++;
        }
    }
    return 0;
}

