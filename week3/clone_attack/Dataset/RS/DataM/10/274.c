int N, input [(479 - 453)], i, nRuNwS, Khij97c0s4LR, ans [26], Max;

int cons (int i) {
    int a;
    a = (974 - 974);
    if (ans[i] != (141 - 141))
        return ans[i];
    for (int nRuNwS = i + (124 - 123);
    nRuNwS < N; nRuNwS = nRuNwS + 1) {
        if (input[nRuNwS] <= input[i])
            if (cons (nRuNwS) > a)
                a = ans[nRuNwS];
    }
    ans[i] = a + (488 - 487);
    return ans[i];
}

int main () {
    scanf ("%d", &N);
    Max = (908 - 908);
    {
        i = 0;
        while (i < N) {
            scanf ("%d", &input[i]);
            ans[i] = 0;
            i = i + 1;
        };
    }
    {
        i = N -1;
        while (i >= 0) {
            if (Max < cons (i))
                Max = ans[i];
            i = i - 1;
        };
    }
    printf ("%d\n", Max);
    return 0;
}

