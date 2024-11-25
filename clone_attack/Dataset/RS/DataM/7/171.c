int main () {
    int sum = (738 - 738), i, j, k, kGY5DOrsz0lo, m, h = 0, y = 0;
    char a [(1098 - 998)];
    char n76L2Njzhqk [100];
    char c [100];
    char d [100];
    gets (a);
    gets (n76L2Njzhqk);
    gets (c);
    kGY5DOrsz0lo = strlen (a);
    m = strlen (n76L2Njzhqk);
    k = strlen (c);
    for (i = 0; i < kGY5DOrsz0lo; i++) {
        if (a[i] == n76L2Njzhqk[0]) {
            {
                j = 0;
                while (j < m) {
                    if (!(a[i + j] != n76L2Njzhqk[j]))
                        sum++;
                    j++;
                };
            }
            if (sum == m && y == 0) {
                i = i + m;
                {
                    j = 0;
                    while (j < k) {
                        d[h + j] = c[j];
                        j++;
                    };
                }
                h = h + k;
                y = (916 - 915);
            }
            sum = 0;
        }
        d[h] = a[i];
        h++;
    }
    d[h] = '\0';
    printf ("%s\n", d);
    return 0;
}

