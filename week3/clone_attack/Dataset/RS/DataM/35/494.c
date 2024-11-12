int main () {
    int ZEz1P7 [(435 - 427)] [(262 - 254)];
    int MSL1v9Hn [(384 - 376)];
    int y9ioKzeh [8];
    int m;
    int n;
    int si5NJBhUKIXb;
    int InOrkd17NLM;
    int k;
    k = (387 - 387);
    scanf ("%d,%d", &m, &n);
    for (si5NJBhUKIXb = (250 - 250); m > si5NJBhUKIXb; si5NJBhUKIXb++) {
        scanf ("%d", &ZEz1P7[si5NJBhUKIXb][(910 - 910)]);
        MSL1v9Hn[si5NJBhUKIXb] = ZEz1P7[si5NJBhUKIXb][(987 - 987)], y9ioKzeh[si5NJBhUKIXb] = (191 - 191);
        for (InOrkd17NLM = (167 - 166); InOrkd17NLM < n; InOrkd17NLM = InOrkd17NLM +1) {
            scanf ("%d", &ZEz1P7[si5NJBhUKIXb][InOrkd17NLM]);
            if (MSL1v9Hn[si5NJBhUKIXb] < ZEz1P7[si5NJBhUKIXb][InOrkd17NLM]) {
                MSL1v9Hn[si5NJBhUKIXb] = ZEz1P7[si5NJBhUKIXb][InOrkd17NLM], y9ioKzeh[si5NJBhUKIXb] = InOrkd17NLM;
            };
        };
    }
    for (si5NJBhUKIXb = (812 - 812); m > si5NJBhUKIXb; si5NJBhUKIXb++) {
        InOrkd17NLM = (421 - 421);
        while (MSL1v9Hn[si5NJBhUKIXb] <= ZEz1P7[InOrkd17NLM][y9ioKzeh[si5NJBhUKIXb]] && m > InOrkd17NLM) {
            InOrkd17NLM++;
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
        if (InOrkd17NLM == m) {
            printf ("%d+%d\n", si5NJBhUKIXb, y9ioKzeh[si5NJBhUKIXb]), k = k + 1;
        };
    }
    if (k == 0) {
        printf ("No\n");
    }
    return 0;
}

