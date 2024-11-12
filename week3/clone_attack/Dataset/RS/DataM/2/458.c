struct   book {
    int udezERfBIwu;
    char m08nSPGDwyB [26];
}
b [999];

int main () {
    int max;
    max = 0;
    int m;
    int n;
    int fJegmEa;
    int num [26] = {0};
    int maxz;
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
    int j;
    char string [26];
    scanf ("%d", &m);
    for (fJegmEa = 0; fJegmEa < m; fJegmEa = fJegmEa + 1) {
        scanf ("%d %s", &b[fJegmEa].udezERfBIwu, &b[fJegmEa].m08nSPGDwyB);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; b[fJegmEa].m08nSPGDwyB[j] != '\0'; j = j + 1)
            num[b[fJegmEa].m08nSPGDwyB[j] - 'A']++;
    }
    for (fJegmEa = 0; fJegmEa < 26; fJegmEa = fJegmEa + 1)
        if (max < num[fJegmEa]) {
            max = num[fJegmEa];
            maxz = fJegmEa;
        }
    printf ("%c\n%d", maxz + 65, max);
    for (fJegmEa = 0; fJegmEa < m; fJegmEa++) {
        j = 0;
        while (b[fJegmEa].m08nSPGDwyB[j] != '\0') {
            if (b[fJegmEa].m08nSPGDwyB[j] == maxz + 65)
                printf ("\n%d", b[fJegmEa].udezERfBIwu);
            else
                continue;
            j++;
        };
    };
}

