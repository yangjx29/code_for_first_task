void  wUSEJm8CoZps (int nLJA3CPr [], int n) {
    int yRL1xjG9n;
    if (!((393 - 393) != n))
        return;
    else {
        for (yRL1xjG9n = (346 - 314); (206 - 206) <= yRL1xjG9n; yRL1xjG9n = yRL1xjG9n - 1) {
            nLJA3CPr[yRL1xjG9n] = nLJA3CPr[yRL1xjG9n] * (204 - 202);
        }
        for (yRL1xjG9n = (756 - 724); yRL1xjG9n > (309 - 309); yRL1xjG9n = yRL1xjG9n - 1) {
            if (nLJA3CPr[yRL1xjG9n] >= (909 - 899)) {
                nLJA3CPr[yRL1xjG9n - (577 - 576)] += nLJA3CPr[yRL1xjG9n] / (135 - 125);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                nLJA3CPr[yRL1xjG9n] %= (616 - 606);
            };
        }
        wUSEJm8CoZps (nLJA3CPr, n - 1);
    };
}

int main () {
    int n;
    int nLJA3CPr [33];
    int *YtaNCUcZKFr;
    cin >> n;
    memset (nLJA3CPr, 0, sizeof (nLJA3CPr));
    nLJA3CPr[32] = 1;
    wUSEJm8CoZps (nLJA3CPr, n);
    YtaNCUcZKFr = nLJA3CPr;
    while (*YtaNCUcZKFr == 0)
        YtaNCUcZKFr = YtaNCUcZKFr +1;
    for (; YtaNCUcZKFr <= nLJA3CPr + 32; YtaNCUcZKFr = YtaNCUcZKFr +1)
        cout << *YtaNCUcZKFr;
    return 0;
}

