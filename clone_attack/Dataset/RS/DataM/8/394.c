int main () {
    int m;
    int n;
    int t;
    int a [m], b [n], i, JyQYpulhtiKw;
    scanf ("%d%d", &m, &n);
    for (i = (355 - 355); m > i; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = 0; n > i; i = i + 1)
        scanf ("%d", &b[i]);
    for (i = (158 - 157); m > i; i = i + 1)
        for (JyQYpulhtiKw = 0; m - i > JyQYpulhtiKw; JyQYpulhtiKw++)
            if (a[JyQYpulhtiKw +(992 - 991)] < a[JyQYpulhtiKw]) {
                t = a[JyQYpulhtiKw];
                a[JyQYpulhtiKw] = a[JyQYpulhtiKw +1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                a[JyQYpulhtiKw +1] = t;
            }
    for (i = 1; n > i; i++)
        for (JyQYpulhtiKw = 0; n - i > JyQYpulhtiKw; JyQYpulhtiKw++)
            if (b[JyQYpulhtiKw] > b[JyQYpulhtiKw +1]) {
                t = b[JyQYpulhtiKw];
                b[JyQYpulhtiKw] = b[JyQYpulhtiKw +1];
                b[JyQYpulhtiKw +1] = t;
            }
    printf ("%d", a[0]);
    for (i = 1; i < m; i++)
        printf (" %d", a[i]);
    for (i = 0; i < n; i++)
        printf (" %d", b[i]);
    printf ("\n");
}

