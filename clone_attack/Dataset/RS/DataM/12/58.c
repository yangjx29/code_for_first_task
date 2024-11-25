void  main () {
    int hqb1YXc;
    int BJknI3xYl;
    int A1ao0PdG;
    int t;
    int pAyqgv;
    int ahJpXZB [50];
    int Ojx8VWYM2Bb [20];
    char LLxdVk2uBsX;
    for (hqb1YXc = 0; hqb1YXc < 50; hqb1YXc++) {
        for (BJknI3xYl = 0; BJknI3xYl < 20; BJknI3xYl = BJknI3xYl +1) {
            scanf ("%d", &Ojx8VWYM2Bb[BJknI3xYl]);
            if (Ojx8VWYM2Bb[0] == -1)
                goto lalala;
            scanf ("%c", &LLxdVk2uBsX);
            if (LLxdVk2uBsX == '\n')
                break;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ahJpXZB[hqb1YXc] = 0;
        for (A1ao0PdG = 0; A1ao0PdG < BJknI3xYl; A1ao0PdG++) {
            t = 0;
            while (t < BJknI3xYl) {
                if ((Ojx8VWYM2Bb[A1ao0PdG] - 2 * Ojx8VWYM2Bb[t]) == 0)
                    ahJpXZB[hqb1YXc] = ahJpXZB[hqb1YXc] + 1;
                t++;
            };
        };
    }
lalala :
    for (pAyqgv = 0; pAyqgv < hqb1YXc; pAyqgv++) {
        printf ("%d", ahJpXZB[pAyqgv]);
        if (pAyqgv != hqb1YXc - 1)
            ;
    };
}

