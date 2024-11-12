int main () {
    char dw [(1402 - 402)] [41];
    int sum = (368 - 368);
    int i, n, len;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s", dw[i]);
        len = strlen (dw[i]);
        if (80 < sum + len + 1) {
            sum = 0;
            printf ("\n");
        }
        else if (i > 0) {
            sum++;
        }
        else
            ;
        sum = sum + len;
        printf ("%s", dw[i]);
    }
    return 0;
}

