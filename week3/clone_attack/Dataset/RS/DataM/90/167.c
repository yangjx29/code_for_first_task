int f (int Bwt4lNA, int n) {
    int krqHb2v9e, s = 0;
    for (krqHb2v9e = 0; Bwt4lNA > krqHb2v9e; krqHb2v9e = krqHb2v9e + 1) {
        if (Bwt4lNA -krqHb2v9e <= n)
            s = s + f (Bwt4lNA -krqHb2v9e, n - Bwt4lNA +krqHb2v9e);
    }
    if (n == 0)
        s = 1;
    return s;
}

int main () {
    int Bwt4lNA;
    int n;
    int s;
    scanf ("%d", &s);
    for (; s > 1; s--) {
        scanf ("%d%d", &Bwt4lNA, &n);
        printf ("%d\n", f (n, Bwt4lNA));
    }
    scanf ("%d%d", &Bwt4lNA, &n);
    printf ("%d", f (n, Bwt4lNA));
}

