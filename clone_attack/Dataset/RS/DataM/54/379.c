int amount (int, int, int);

int main () {
    int monkey;
    int discard;
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
    scanf ("%d%d", &monkey, &discard);
    printf ("%d\n", amount (monkey, monkey, discard));
    return 0;
}

int amount (int n, int mk, int dc) {
    int nAWU0BqvSIY, now = 0, i;
    int m;
    int judge;
    m = 0;
    judge = 0;
    while (judge == 0) {
        m = m + 1;
        nAWU0BqvSIY = mk * m + dc;
        for (i = 0; i < n - 1; i = i + 1) {
            if (nAWU0BqvSIY / (mk - 1) * (mk - 1) < nAWU0BqvSIY) {
                judge = 0;
                break;
            }
            else
                judge = 1;
            now = nAWU0BqvSIY / (mk - 1) * mk + dc;
            nAWU0BqvSIY = now;
        };
    }
    return now;
}

