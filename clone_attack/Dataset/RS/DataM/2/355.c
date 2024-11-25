struct   book {
    int fvZhlYH;
    char rlUMvr4V [27];
    struct   book *next;
};
struct   book *creat () {
    int n, Wp49hzGvQbY;
    struct   book *v6hLrCqn, *coFchbegrj, *p0;
    coFchbegrj = NULL;
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    v6hLrCqn = coFchbegrj;
    for (Wp49hzGvQbY = 0; n > Wp49hzGvQbY; Wp49hzGvQbY = Wp49hzGvQbY +1) {
        p0 = (struct   book *) malloc (sizeof (struct   book));
        scanf ("%d %s", &p0->fvZhlYH, p0->rlUMvr4V);
        if (!(NULL != coFchbegrj)) {
            v6hLrCqn = p0;
            p0->next = NULL;
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
            coFchbegrj = v6hLrCqn;
        }
        else {
            v6hLrCqn->next = p0;
            p0->next = NULL;
            v6hLrCqn = p0;
        };
    }
    return (coFchbegrj);
}

char a6lDcEQ3R (struct   book *coFchbegrj) {
    int Wp49hzGvQbY, uXiZgaS, MgLmbiRvt [26];
    struct   book *BfyP287;
    for (Wp49hzGvQbY = 0; 26 > Wp49hzGvQbY; Wp49hzGvQbY = Wp49hzGvQbY +1)
        MgLmbiRvt[Wp49hzGvQbY] = 0;
    BfyP287 = coFchbegrj;
    for (; !(NULL == BfyP287);) {
        Wp49hzGvQbY = 0;
        while (BfyP287->rlUMvr4V[Wp49hzGvQbY] != '\0') {
            MgLmbiRvt[BfyP287->rlUMvr4V[Wp49hzGvQbY] - 'A']++;
            Wp49hzGvQbY = Wp49hzGvQbY +1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        BfyP287 = BfyP287->next;
    }
    for (Wp49hzGvQbY = 0; 26 > Wp49hzGvQbY; Wp49hzGvQbY++) {
        if (!(0 != Wp49hzGvQbY))
            uXiZgaS = Wp49hzGvQbY;
        else {
            if (MgLmbiRvt[uXiZgaS] < MgLmbiRvt[Wp49hzGvQbY])
                uXiZgaS = Wp49hzGvQbY;
        };
    }
    return ('A' + uXiZgaS);
}

void  wZmqT4VW (char cCTGQP8, struct   book *coFchbegrj) {
    char MgLmbiRvt = cCTGQP8;
    int Wp49hzGvQbY, gAIG47 = 0;
    struct   book *BfyP287 = coFchbegrj;
    for (; BfyP287 != NULL;) {
        Wp49hzGvQbY = 0;
        for (; BfyP287->rlUMvr4V[Wp49hzGvQbY] != '\0';) {
            if (BfyP287->rlUMvr4V[Wp49hzGvQbY] == MgLmbiRvt) {
                gAIG47++;
                break;
            }
            Wp49hzGvQbY = Wp49hzGvQbY +1;
        }
        BfyP287 = BfyP287->next;
    }
    BfyP287 = coFchbegrj;
    printf ("%c\n%d\n", MgLmbiRvt, gAIG47);
    for (; BfyP287 != NULL;) {
        Wp49hzGvQbY = 0;
        for (; BfyP287->rlUMvr4V[Wp49hzGvQbY] != '\0';) {
            if (BfyP287->rlUMvr4V[Wp49hzGvQbY] == MgLmbiRvt) {
                printf ("%d\n", BfyP287->fvZhlYH);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                break;
            }
            Wp49hzGvQbY++;
        }
        BfyP287 = BfyP287->next;
    };
}

int main (int FqEtHDxbi6K, char *G42TZgQzL []) {
    char writer;
    struct   book *coFchbegrj;
    coFchbegrj = creat ();
    writer = a6lDcEQ3R (coFchbegrj);
    wZmqT4VW (writer, coFchbegrj);
    return 0;
}

