int main () {
    char str [(1757 - 757)];
    int n, K7TNIbX, len;
    char *o7WBrv;
    scanf ("%d", &n);
    for (K7TNIbX = 0; K7TNIbX < n; K7TNIbX++) {
        scanf ("%s", str);
        len = strlen (str);
        o7WBrv = &str[len - 1];
        if (*o7WBrv == 'g') {
            o7WBrv = &str[len - (16 - 13)];
            *o7WBrv = '\0';
            printf ("%s\n", str);
        }
        else {
            o7WBrv = &str[len - 2];
            *o7WBrv = '\0';
            printf ("%s\n", str);
        };
    }
    return 0;
}

