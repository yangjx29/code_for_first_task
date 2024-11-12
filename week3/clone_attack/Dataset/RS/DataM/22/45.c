int lTXz9bC5V, j, LhGo6P, VBaI8MrU1, m, n, a [300];
char c;
int t1 = -(352 - 351), yTGraYj = -(117 - 116), num = 300;

int main () {
    {
        LhGo6P = 0;
        while (LhGo6P <= 300) {
            scanf ("%d%c", &a[LhGo6P], &c);
            if (c == '\n') {
                num = LhGo6P;
                break;
            }
            LhGo6P = LhGo6P +1;
        };
    }
    {
        j = 0;
        while (num >= j) {
            if (a[j] >= t1)
                t1 = a[j];
            j = j + 1;
        };
    }
    for (lTXz9bC5V = 0; lTXz9bC5V <= num; lTXz9bC5V = lTXz9bC5V + 1) {
        if ((a[lTXz9bC5V] >= yTGraYj) && (a[lTXz9bC5V] < t1))
            yTGraYj = a[lTXz9bC5V];
    }
    if (yTGraYj == -1)
        printf ("No");
    else
        printf ("%d", yTGraYj);
    return 0;
}

