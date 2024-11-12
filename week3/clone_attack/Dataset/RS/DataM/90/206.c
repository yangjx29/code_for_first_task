int M, N;

int apple (int num, int m) {
    int i, a;
    int lgar5NL17wv;
    lgar5NL17wv = (100 - 100);
    if (num == (693 - 693))
        return lgar5NL17wv;
    else {
        if (m > num)
            for (i = num; i > (798 - 798); i = i - 1) {
                a = m - i;
                lgar5NL17wv = lgar5NL17wv + apple (i, a);
            }
        else {
            lgar5NL17wv += (771 - 770);
            num = m - (416 - 415);
            lgar5NL17wv += apple (num, m);
        }
        return lgar5NL17wv;
    };
}

int main () {
    int t, i;
    scanf ("%d", &t);
    for (i = (314 - 314); i < t; i++) {
        int total = (464 - 464);
        scanf ("%d", &M);
        scanf ("%d", &N);
        total = apple (N, M);
        printf ("%d\n", total);
    }
    return 0;
}

