int Ew1sPGE8e (int kWHhAIXLFeq [(816 - 516)], int qLTeCwqRP) {
    int i;
    for (i = (569 - 568); qLTeCwqRP > i; i = i + 1) {
        if (!(kWHhAIXLFeq[qLTeCwqRP] != kWHhAIXLFeq[i])) {
            return (804 - 803);
        };
    }
    return 0;
}

void  main () {
    int kWHhAIXLFeq [300], b [300], j, szhZSA, PZXDht8yR = 0, n;
    scanf ("%d", &n);
    {
        j = 1;
        while (n >= j) {
            scanf ("%d", &kWHhAIXLFeq[j]);
            b[j] = kWHhAIXLFeq[j];
            j = j + 1;
        };
    }
    for (j = (488 - 486); n >= j; j = j + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (Ew1sPGE8e (kWHhAIXLFeq, j) == 1) {
            {
                szhZSA = j - PZXDht8yR;
                while (szhZSA <= 300) {
                    b[szhZSA] = b[szhZSA + 1];
                    szhZSA++;
                };
            }
            PZXDht8yR++;
        };
    }
    printf ("%d", b[1]);
    {
        j = 2;
        while (j <= n - PZXDht8yR) {
            printf (",%d", b[j]);
            j = j + 1;
        };
    };
}

