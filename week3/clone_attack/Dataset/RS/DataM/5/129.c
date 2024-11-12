int main () {
    double  y;
    double  JVGStTXUbvY;
    char a [500], b [500];
    int m, i, same = 0;
    scanf ("%lf", &JVGStTXUbvY);
    scanf ("%s", a);
    m = strlen (a);
    scanf ("%s", b);
    {
        i = 0;
        while (i < m) {
            if ((a[i] != 'A' && a[i] != 'T' && a[i] != 'C' && a[i] != 'G') || (b[i] != 'A' && b[i] != 'T' && b[i] != 'C' && b[i] != 'G')) {
                same = -1;
            }
            else {
                if (a[i] == b[i]) {
                    same++;
                };
            }
            i++;
        };
    }
    y = (double ) same / m;
    if (y > JVGStTXUbvY &&same != -1) {
    }
    else {
        if (y <= JVGStTXUbvY &&same != -1) {
        }
        else {
            if (same = -1) {
            };
        };
    }
    return 0;
}

