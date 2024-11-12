int main () {
    int nLBFkpxJf4Y3;
    int n;
    int Pvus7L;
    nLBFkpxJf4Y3 = 0;
    int s [n];
    scanf ("%d", &n);
    {
        int i = (732 - 731);
        while (i <= n) {
            scanf ("%d", &s[i]);
            if (!(0 != s[i] % 2)) {
                nLBFkpxJf4Y3 = nLBFkpxJf4Y3 + (553 - 552);
                s[i] = 0;
            }
            i++;
        };
    }
    nLBFkpxJf4Y3 = n - nLBFkpxJf4Y3;
    for (int rRoZI8V = n - 1;
    rRoZI8V >= 1; rRoZI8V = rRoZI8V - 1) {
        int F07Zpq = 1;
        while (F07Zpq <= rRoZI8V) {
            if (s[F07Zpq] > s[F07Zpq +1]) {
                Pvus7L = s[F07Zpq];
                s[F07Zpq] = s[F07Zpq +1];
                s[F07Zpq +1] = Pvus7L;
            }
            F07Zpq = F07Zpq +1;
        };
    }
    for (int i = n - nLBFkpxJf4Y3 + 1;
    i < n; i = i + 1) {
        printf ("%d,", s[i]);
    }
    printf ("%d", s[n]);
    return 0;
}

