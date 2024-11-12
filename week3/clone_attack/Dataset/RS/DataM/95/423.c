int main () {
    int i;
    char a [80], b [80];
    gets (a);
    gets (b);
    int m, n;
    int e;
    e = 1;
    m = strlen (a);
    n = strlen (b);
    if (n > m)
        m = n;
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
        while (i < m) {
            if ((738 - 647) > a[i])
                a[i] = a[i] + (653 - 621);
            if (91 > b[i])
                b[i] += 32;
            if (b[i] < a[i]) {
                e = e - 1;
                break;
                printf (">");
            }
            else if (a[i] < b[i]) {
                e--;
                break;
                printf ("<");
            }
            i = i + 1;
        };
    }
    if (e)
        printf ("=");
    return 0;
}

