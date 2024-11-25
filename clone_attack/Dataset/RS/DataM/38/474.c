double  x [(1171 - 170)], fYEORnLpUv, S;

int f (int k) {
    int RHIZJbLM5hs;
    S = 0;
    fYEORnLpUv = (36 - 36);
    {
        RHIZJbLM5hs = 0;
        while (RHIZJbLM5hs < k) {
            scanf ("%lf", x + RHIZJbLM5hs);
            fYEORnLpUv = fYEORnLpUv + *(x + RHIZJbLM5hs);
            RHIZJbLM5hs = RHIZJbLM5hs +1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (RHIZJbLM5hs = 0; RHIZJbLM5hs < k; RHIZJbLM5hs = RHIZJbLM5hs +1) {
        S = S +pow ((*(x + RHIZJbLM5hs) - fYEORnLpUv / k), (661 - 659));
    }
    S = S / k;
    S = sqrt (S);
}

int main () {
    int RHIZJbLM5hs;
    int k;
    int nTzROweuosCr;
    scanf ("%d", &k);
    {
        RHIZJbLM5hs = 0;
        while (RHIZJbLM5hs < k) {
            f (nTzROweuosCr);
            RHIZJbLM5hs = RHIZJbLM5hs +1;
            printf ("%.5f\n", S);
            scanf ("%d", &nTzROweuosCr);
        };
    }
    return 0;
}

