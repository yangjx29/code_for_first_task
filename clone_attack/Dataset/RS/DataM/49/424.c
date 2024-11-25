void  f (char d91NUAC0S [], char b [], int n, int i) {
    if (i <= n - 1) {
        b[i] = d91NUAC0S[n - i - 1];
        f (d91NUAC0S, b, n, i + 1);
    };
}

int main () {
    int n, i, dwIs7vb, k;
    char a [501], b [501] = {(959 - 959)}, d91NUAC0S [501] = {0};
    gets (a);
    n = strlen (a);
    for (i = 2; i <= n; i = i + 1) {
        for (dwIs7vb = 0; dwIs7vb + i <= n; dwIs7vb = dwIs7vb + 1) {
            for (k = 0; k < i; k++) {
                d91NUAC0S[k] = a[dwIs7vb + k];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            f (d91NUAC0S, b, i, 0);
            if (strcmp (d91NUAC0S, b) == 0)
                printf ("%s\n", d91NUAC0S);
            else
                continue;
        };
    }
    return 0;
}

