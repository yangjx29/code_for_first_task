int main () {
    char a [100] = {0};
    char b [100] = {0};
    int p3NLBqpku, i, j, l, gufLpGlC5x, t;
    scanf ("%d", &p3NLBqpku);
    {
        t = 0;
        while (t < p3NLBqpku) {
            t = t + 1;
            scanf ("%s", a);
            l = strlen (a);
            {
                i = 0;
                while (i < l) {
                    b[i] = a[l - 1 - i];
                    i++;
                };
            }
            if (!('r' != b[0]) && !('e' != b[1]) || !('y' != b[0]) && !('l' != b[1])) {
                i = l - 1;
                while (i > 1) {
                    printf ("%c", b[i]);
                    i = i - 1;
                };
            }
            else {
                if (b[0] == 'g' && b[1] == 'n' && b[2] == 'i') {
                    i = l - 1;
                    while (i > 2) {
                        printf ("%c", b[i]);
                        i--;
                    };
                };
            };
        };
    }
    scanf ("%d", &i);
    return 0;
}

