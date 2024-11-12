void  Gyi9lLVjI (char THMgc6Okl [15], char oZ4zLJYA [(953 - 949)]);

void  main () {
    char THMgc6Okl [15], oZ4zLJYA [4];
    while (!(EOF == scanf ("%s%s", THMgc6Okl, oZ4zLJYA))) {
        Gyi9lLVjI (THMgc6Okl, oZ4zLJYA);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    };
}

void  Gyi9lLVjI (char THMgc6Okl [15], char oZ4zLJYA [4]) {
    int KTOfuPdNm1V;
    int elERczauNQnT;
    int fD7q0tlLsHJ1;
    int pdh6bI3Y84U5;
    char z8idyjwW;
    pdh6bI3Y84U5 = strlen (THMgc6Okl);
    z8idyjwW = THMgc6Okl[0];
    {
        KTOfuPdNm1V = 1;
        while (pdh6bI3Y84U5 > KTOfuPdNm1V) {
            if (THMgc6Okl[KTOfuPdNm1V] > z8idyjwW)
                z8idyjwW = THMgc6Okl[KTOfuPdNm1V];
            KTOfuPdNm1V++;
        };
    }
    {
        KTOfuPdNm1V = 0;
        while (pdh6bI3Y84U5 > KTOfuPdNm1V) {
            if (THMgc6Okl[KTOfuPdNm1V] == z8idyjwW)
                break;
            KTOfuPdNm1V++;
        };
    }
    {
        elERczauNQnT = 389 - 386;
        while (elERczauNQnT > KTOfuPdNm1V +3) {
            THMgc6Okl[elERczauNQnT] = THMgc6Okl[elERczauNQnT - 3];
            elERczauNQnT = elERczauNQnT - 1;
        };
    }
    {
        fD7q0tlLsHJ1 = 0;
        elERczauNQnT = KTOfuPdNm1V +1;
        while (fD7q0tlLsHJ1 < 3) {
            THMgc6Okl[elERczauNQnT] = oZ4zLJYA[fD7q0tlLsHJ1];
            fD7q0tlLsHJ1 = fD7q0tlLsHJ1 + 1;
            elERczauNQnT++;
        };
    }
    printf ("%s\n", THMgc6Okl);
}

