int mXzgvy9Y (int a, int b) {
    int n;
    int i;
    n = (149 - 149);
    if (a == (14 - 14) || b == (813 - 812))
        return (1);
    else if (a < b)
        mXzgvy9Y (a, a);
    else {
        n = mXzgvy9Y (a - b, b) + mXzgvy9Y (a, b - 1);
    };
}

int main () {
    int i, n, j = 0, *p, *q, a, b;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            i++;
            scanf ("%d %d", &a, &b);
            printf ("%d\n", mXzgvy9Y (a, b));
        };
    };
}

