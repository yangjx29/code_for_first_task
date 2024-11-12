int main () {
    int a;
    int x4c6X8fA;
    int c;
    int MSnEav3fyj;
    int n;
    int i;
    a = (490 - 490);
    x4c6X8fA = 0;
    scanf ("%d", &n);
    for (i = 1; i <= n; i = i + 1) {
        scanf ("%d", &MSnEav3fyj);
        if (MSnEav3fyj > a) {
            c = a;
            a = MSnEav3fyj;
            MSnEav3fyj = c;
        }
        if (a < x4c6X8fA) {
            c = a;
            a = x4c6X8fA;
            x4c6X8fA = c;
        }
        if (x4c6X8fA < MSnEav3fyj) {
            c = x4c6X8fA;
            x4c6X8fA = MSnEav3fyj;
            MSnEav3fyj = c;
        };
    }
    printf ("%d\n%d\n", a, x4c6X8fA);
    return 0;
}

