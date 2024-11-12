int main () {
    int i;
    int j;
    int n;
    int tCwr2g6uIl0;
    int S1ny5qoxAH;
    int gem4vt2 [20000];
    i = 0;
    scanf ("%d\n", &n);
    for (; n - 1 >= i; i++) {
        if (n - 1 > i)
            scanf ("%d ", &gem4vt2[i]);
        else
            scanf ("%d\n", &gem4vt2[i]);
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
    for (j = 0; n > j; j = j + 1) {
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
        if (!(0 != j))
            printf ("%d", gem4vt2[j]);
        else {
            for (tCwr2g6uIl0 = 0, S1ny5qoxAH = 0; j > tCwr2g6uIl0; tCwr2g6uIl0++) {
                if (gem4vt2[j] == gem4vt2[tCwr2g6uIl0])
                    S1ny5qoxAH++;
            }
            if (S1ny5qoxAH == 0)
                printf (" %d", gem4vt2[j]);
        };
    }
    return 0;
}

