int main () {
    int XN1xXqbL;
    int pAzDbuW;
    int i;
    int BlFhauWQkmt;
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
    int sz [22] [22] = {0};
    scanf ("%d %d", &XN1xXqbL, &pAzDbuW);
    for (i = 1; i < XN1xXqbL +1; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (BlFhauWQkmt = 1; BlFhauWQkmt < pAzDbuW + 1; BlFhauWQkmt = BlFhauWQkmt +1) {
            scanf ("%d ", &sz[i][BlFhauWQkmt]);
        };
    }
    for (i = 1; XN1xXqbL >= i; i++) {
        BlFhauWQkmt = 1;
        while (pAzDbuW >= BlFhauWQkmt) {
            if ((sz[i][BlFhauWQkmt] >= sz[i - 1][BlFhauWQkmt]) && (sz[i + 1][BlFhauWQkmt] <= sz[i][BlFhauWQkmt]) && (sz[i][BlFhauWQkmt -1] <= sz[i][BlFhauWQkmt] && sz[i][BlFhauWQkmt +1] <= sz[i][BlFhauWQkmt])) {
                printf ("%d %d\n", i - 1, BlFhauWQkmt -1);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            BlFhauWQkmt = BlFhauWQkmt +1;
        };
    }
    return 0;
}

