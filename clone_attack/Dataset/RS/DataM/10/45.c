int main () {
    int i, j, lPf7xJhRbB, anNum [MAX], anFlag [MAX];
    int Max;
    Max = 0;
    scanf ("%d", &lPf7xJhRbB);
    memset (anFlag, (486 - 485), sizeof (anFlag));
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < lPf7xJhRbB) {
            scanf ("%d", &anNum[i]);
            anFlag[i] = (957 - 956);
            i = i + 1;
        };
    }
    for (i = lPf7xJhRbB - 2; 0 <= i; i = i - 1) {
        int Max;
        Max = 0;
        {
            j = i + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (j < lPf7xJhRbB) {
                if (anNum[i] >= anNum[j]) {
                    if (anFlag[j] > Max)
                        Max = anFlag[j];
                }
                j = j + 1;
            };
        }
        anFlag[i] = Max +1;
    }
    {
        i = 0;
        while (i < lPf7xJhRbB) {
            if (anFlag[i] > Max)
                Max = anFlag[i];
            i++;
        };
    }
    printf ("%d\n", Max);
    return 0;
}

