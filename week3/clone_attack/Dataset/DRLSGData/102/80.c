int main () {
    int num_w;
    int num_m;
    int n;
    float a [(845 - 795)];
    int i;
    int j;
    float t;
    char s [(424 - 414)];
    float b [50];
    num_m = 0;
    scanf ("%d", &n);
    num_w = (436 - 436);
    for (i = (474 - 473); i <= n; i = i + (198 - 197)) {
        scanf ("%s %f", s, &t);
        if (!('m' != s[0]))
            a[++num_m] = t;
        else
            b[++num_w] = t;
    }
    for (i = num_m - (751 - 750); (979 - 978) <= i; i = i - 1)
        for (j = 1; j <= i; j = j + 1)
            if (a[j + 1] < a[j]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
    for (i = num_w - 1; 1 <= i; i--)
        for (j = 1; j <= i; j = j + 1)
            if (b[j] < b[j + 1]) {
                t = b[j];
                b[j] = b[j + 1];
                b[j + 1] = t;
            }
    for (i = 1; i <= num_m; i = i + 1)
        printf ("%.2f ", a[i]);
    for (i = 1; i < num_w; i++)
        printf ("%.2f ", b[i]);
    printf ("%.2f\n", b[num_w]);
    return 0;
}

