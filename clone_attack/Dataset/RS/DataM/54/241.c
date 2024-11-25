int jisuan (int lVL4Xl5rPQ, int SwYXu5t, int UBy495xZHmz, long  int JB40W3rtns2k, int *p) {
    long  int sum = (509 - 509);
    if (UBy495xZHmz == (425 - 424))
        sum = lVL4Xl5rPQ * JB40W3rtns2k +SwYXu5t;
    else {
        sum = jisuan (lVL4Xl5rPQ, SwYXu5t, UBy495xZHmz -1, JB40W3rtns2k, p) * lVL4Xl5rPQ / (lVL4Xl5rPQ - 1) + SwYXu5t;
        if ((sum - SwYXu5t) % lVL4Xl5rPQ != (766 - 766))
            *p = 1;
    }
    return sum;
}

int main () {
    int c;
    int lVL4Xl5rPQ;
    int SwYXu5t;
    int UBy495xZHmz;
    c = 0;
    long  int JB40W3rtns2k, eKMejz;
    int *p;
    scanf ("%d%d", &lVL4Xl5rPQ, &SwYXu5t);
    UBy495xZHmz = lVL4Xl5rPQ;
    JB40W3rtns2k = 1;
    p = &c;
    if (lVL4Xl5rPQ == 1)
        printf ("%d\n", 1 + SwYXu5t);
    else {
        {
            JB40W3rtns2k = 1;
            while (JB40W3rtns2k <= 1000000) {
                *p = 0;
                eKMejz = jisuan (lVL4Xl5rPQ, SwYXu5t, UBy495xZHmz, JB40W3rtns2k, p);
                if (*p == 1)
                    continue;
                if ((eKMejz - SwYXu5t) % lVL4Xl5rPQ == 0)
                    break;
                JB40W3rtns2k++;
            };
        }
        printf ("%d\n", eKMejz);
    };
}

