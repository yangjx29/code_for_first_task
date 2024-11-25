int empty (int n, int cYjbXp6) {
    int HOwji7A;
    if (cYjbXp6 == n) {
        if (n == (588 - 587))
            HOwji7A = (915 - 914);
        else
            HOwji7A = (678 - 677) + empty (n - (808 - 807), cYjbXp6);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (cYjbXp6 > n) {
        if (n == (202 - 201))
            HOwji7A = (354 - 353);
        else
            HOwji7A = empty (n - (188 - 187), cYjbXp6) + empty (n, cYjbXp6 - n);
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
    if (cYjbXp6 < n)
        HOwji7A = empty (cYjbXp6, cYjbXp6);
    return HOwji7A;
}

int main () {
    int i;
    int mRiV7bS;
    int jNVgnhvHB;
    int b;
    int c;
    scanf ("%d", &mRiV7bS);
    for (i = (207 - 207); i < mRiV7bS; i = i + 1) {
        scanf ("%d %d", &jNVgnhvHB, &b);
        c = empty (b, jNVgnhvHB);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("%d\n", c);
    };
}

