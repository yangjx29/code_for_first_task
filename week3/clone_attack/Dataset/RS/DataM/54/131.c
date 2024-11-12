main () {
    int MOFMGt;
    int NThHOme0;
    int BaFG1XiAIjfb;
    int iYChpT9z61x;
    int rEbvao;
    MOFMGt = 1;
    scanf ("%d %d", &NThHOme0, &BaFG1XiAIjfb);
    for (iYChpT9z61x = 1;; iYChpT9z61x = iYChpT9z61x + 1) {
        rEbvao = iYChpT9z61x * NThHOme0 +BaFG1XiAIjfb;
        MOFMGt = 1;
        for (; MOFMGt < NThHOme0;) {
            if (rEbvao % (NThHOme0 -1) != 0 && rEbvao >= (NThHOme0 -1))
                break;
            else {
                if (rEbvao % (NThHOme0 -1) == 0 && rEbvao < (NThHOme0 -1))
                    break;
                else
                    rEbvao = rEbvao / (NThHOme0 -1) * NThHOme0 +BaFG1XiAIjfb;
            }
            MOFMGt = MOFMGt +1;
        }
        if (MOFMGt >= NThHOme0)
            break;
    }
    printf ("%d\n", rEbvao);
}

