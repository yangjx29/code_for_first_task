main () {
    int *juhQlKLEj = NULL;
    int *b = NULL;
    int *MMcGRjB3 = NULL;
    int i;
    int ksjOG0c;
    int mpLJZVC2;
    int kAPzFq3GMs2w;
    int JJFK4o;
    int Ik6JiXA;
    int TEfFlQZnL4;
    int OqJUN6PMuT;
    scanf ("%d %d", &kAPzFq3GMs2w, &JJFK4o);
    juhQlKLEj = (int *) malloc (kAPzFq3GMs2w * JJFK4o * sizeof (int));
    b = (int *) malloc (Ik6JiXA *TEfFlQZnL4* sizeof (int));
    for (i = 0; kAPzFq3GMs2w > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (ksjOG0c = 0; ksjOG0c < JJFK4o; ksjOG0c = ksjOG0c + 1) {
            scanf ("%d", &juhQlKLEj[i * JJFK4o +ksjOG0c]);
        };
    }
    MMcGRjB3 = (int *) malloc (kAPzFq3GMs2w * TEfFlQZnL4 * sizeof (int));
    scanf ("%d %d", &Ik6JiXA, &TEfFlQZnL4);
    for (i = 0; Ik6JiXA > i; i = i + 1) {
        for (ksjOG0c = 0; TEfFlQZnL4 > ksjOG0c; ksjOG0c = ksjOG0c + 1) {
            scanf ("%d", &b[i * TEfFlQZnL4 +ksjOG0c]);
        };
    }
    OqJUN6PMuT = 0;
    for (i = 0; kAPzFq3GMs2w > i; i = i + 1) {
        for (ksjOG0c = 0; ksjOG0c <= TEfFlQZnL4; ksjOG0c = ksjOG0c + 1) {
            OqJUN6PMuT = 0;
            for (mpLJZVC2 = 0; JJFK4o > mpLJZVC2; mpLJZVC2 = mpLJZVC2 + 1) {
                OqJUN6PMuT = OqJUN6PMuT +juhQlKLEj[i * JJFK4o +mpLJZVC2] * b[mpLJZVC2 * TEfFlQZnL4 +ksjOG0c];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            MMcGRjB3[i * TEfFlQZnL4 +ksjOG0c] = OqJUN6PMuT;
        };
    }
    for (i = 0; kAPzFq3GMs2w > i; i++) {
        for (ksjOG0c = 0; ksjOG0c < TEfFlQZnL4 -1; ksjOG0c = ksjOG0c + 1) {
            printf ("%d ", MMcGRjB3[i * TEfFlQZnL4 +ksjOG0c]);
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
            };
        }
        printf ("%d", MMcGRjB3[i * TEfFlQZnL4 +ksjOG0c]);
    };
}

