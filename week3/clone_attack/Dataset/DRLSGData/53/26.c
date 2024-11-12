int main () {
    int Pgua4Ye;
    int n;
    int kBhiWlDE;
    short  flag;
    int H6imQM4tyfrp;
    int P3w7X5xTh [300];
    int ESAvoeR3X0;
    scanf ("%d", &n);
    ESAvoeR3X0 = 0;
    for (kBhiWlDE = 0; kBhiWlDE < n; kBhiWlDE = kBhiWlDE + 1) {
        scanf ("%d", &Pgua4Ye);
        flag = 0;
        for (H6imQM4tyfrp = 0; H6imQM4tyfrp < ESAvoeR3X0; H6imQM4tyfrp++) {
            if (!(Pgua4Ye != P3w7X5xTh[H6imQM4tyfrp]))
                flag = 1;
        }
        if (!flag)
            P3w7X5xTh[ESAvoeR3X0++] = Pgua4Ye;
    }
    for (kBhiWlDE = 0; ESAvoeR3X0 > kBhiWlDE; kBhiWlDE = kBhiWlDE + 1) {
        printf ("%d", P3w7X5xTh[kBhiWlDE]);
        if (kBhiWlDE < ESAvoeR3X0 -1)
            ;
    }
    return 0;
}

