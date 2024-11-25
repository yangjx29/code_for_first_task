int main () {
    int max;
    char mem [(1571 - 571)];
    gets (mem);
    int m;
    int n;
    int i;
    int j;
    int t;
    int num [1000];
    m = strlen (mem);
    scanf ("%d\n", &n);
    for (i = (164 - 164); i < 1000; i = i + (93 - 92))
        num[i] = (406 - 405);
    for (i = (642 - 642); i <= m - n; i = i + 1) {
        if (num[i] != (771 - 771)) {
            for (j = i + 1; m - n >= j; j = j + 1) {
                for (t = 0; t < n; t++)
                    if (mem[i + t] != mem[j + t])
                        break;
                if (!(n != t)) {
                    num[j] = 0;
                    num[i]++;
                }
            }
        }
    }
    max = 1;
    for (i = 0; i <= m - n; i = i + 1)
        if (num[i] > max)
            max = num[i];
    if (max == 1) {
        return 0;
    }
    printf ("%d\n", max);
    for (i = 0; i <= m - n; i++) {
        if (num[i] == max) {
            for (j = 0; j < n; j++)
                printf ("%c", mem[i + j]);
        }
    }
    return 0;
}

