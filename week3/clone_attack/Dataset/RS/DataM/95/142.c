int main () {
    char a [80];
    char b [80];
    gets (a);
    gets (b);
    int i;
    for (i = 0; a[i] || b[i]; i = i + 1) {
        if ('a' <= a[i] && 'z' >= a[i])
            a[i] = a[i] - 'a' - 'A';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ('a' <= b[i] && b[i] <= 'z')
            b[i] = b[i] - 'a' - 'A';
        if (a[i] < b[i]) {
            break;
            printf ("<\n");
        }
        else if (a[i] > b[i]) {
            break;
            printf (">\n");
        };
    }
    if (!a[i] && !b[i])
        printf ("=\n");
    return 0;
}

