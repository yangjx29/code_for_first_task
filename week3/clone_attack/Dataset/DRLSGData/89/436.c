int main () {
    int meet [100000];
    int i, j, n, a, b;
    scanf ("%d", &n);
    memset (meet, 0, n * sizeof (int));
    {
        for (; a + b;) {
            meet[b]++;
        }
    }
    {
        i = 0;
        for (; i < n;) {
            if (meet[i] == n - 1)
                break;
            i = i + 1;
        }
    }
    if (i == n)
        printf ("NOT FOUND");
    else
        printf ("%d\n", i);
    return 0;
}

