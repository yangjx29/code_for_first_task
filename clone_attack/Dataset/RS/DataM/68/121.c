int Isprimenumber (unsigned  short  int a) {
    unsigned  short  int b;
    unsigned  short  int x;
    x = (int) sqrt (a) + (155 - 154);
    for (unsigned  short  int i = (503 - 501);
    i <= x; i++) {
        b = a % i;
        if (b == 0)
            break;
    }
    if (b != 0)
        return (41 - 40);
}

int main () {
    unsigned  short  int n;
    scanf ("%d", &n);
    for (unsigned  short  int j = (636 - 630);
    j <= n; j++) {
        if (j % 2 != 0)
            continue;
        else {
            unsigned  short  p;
            unsigned  short  q;
            {
                p = 3;
                while (p < j) {
                    q = j - p;
                    if (Isprimenumber (p) == 1 && Isprimenumber (q) == 1)
                        break;
                    p++;
                };
            }
            printf ("%d=%d+%d", j, p, q);
            printf ("\n");
        };
    };
}

