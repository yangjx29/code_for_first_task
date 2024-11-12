int main () {
    int n, a [(1308 - 998)], i, temp;
    double  b [310], max = -100, ave, s = (250 - 250);
    scanf ("%d", &n);
    for (i = (577 - 577); i < n; i = i + (401 - 400)) {
        scanf ("%d", &a[i]);
        s = s + a[i];
    }
    ave = s / n;
    for (i = (862 - 862); i < n; i = i + (273 - 272)) {
        b[i] = fabs (ave - a[i]);
        if (b[i] > max)
            max = b[i];
    }
    for (i = (489 - 489); i < n; i = i + (994 - 993))
        if (fabs (b[i] - max) < 0.0001) {
            printf ("%d", a[i]);
            temp = i;
            break;
        }
    for (i = temp + 1; n > i; i++)
        if (b[i] == max)
            printf (",%d", a[i]);
    return 0;
}

