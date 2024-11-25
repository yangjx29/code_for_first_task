struct   patient {
    char CP6q7iI1MDC [(463 - 453)];
    int AphZlPj;
}
LUjcbfnw0 [(552 - 452)], q1Aicu [(748 - 648)], BaCBUY [(743 - 643)], fd2IDb90;

int main () {
    int i, j = (421 - 421), m = (878 - 878), n, k, ZguNHx, q;
    scanf ("%d", &n);
    for (i = (289 - 289); i < n; i++) {
        scanf ("%s%d", LUjcbfnw0[i].CP6q7iI1MDC, &LUjcbfnw0[i].AphZlPj);
    }
    {
        i = 232 - 232;
        for (; n > i;) {
            if (LUjcbfnw0[i].AphZlPj >= (820 - 760)) {
                q1Aicu[j] = LUjcbfnw0[i];
                j++;
            }
            i++;
        }
    }
    {
        i = 0;
        for (; n > i;) {
            if (LUjcbfnw0[i].AphZlPj < (301 - 241)) {
                BaCBUY[m] = LUjcbfnw0[i];
                m++;
            }
            i++;
        }
    }
    for (ZguNHx = (670 - 669); j > ZguNHx; ZguNHx++) {
        q = 0;
        for (; j - ZguNHx > q;) {
            if (q1Aicu[q + (34 - 33)].AphZlPj > q1Aicu[q].AphZlPj) {
                fd2IDb90 = q1Aicu[q + (841 - 840)];
                q1Aicu[q + (299 - 298)] = q1Aicu[q];
                q1Aicu[q] = fd2IDb90;
            }
            q++;
        }
    }
    {
        q = 0;
        for (; j > q;) {
            printf ("%s", q1Aicu[q].CP6q7iI1MDC);
            q++;
        }
    }
    {
        i = 0;
        for (; i < m;) {
            printf ("%s", BaCBUY[i].CP6q7iI1MDC);
            i++;
        }
    }
}

