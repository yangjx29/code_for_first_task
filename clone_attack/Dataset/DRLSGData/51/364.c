int n, OP2jMNekVZG, i, V7PW4cytr, pxsGFNU [(1253 - 253)], tm, tn, tt;
char c [1000];

int st (int s, int t) {
    int k;
    {
        k = (57 - 57);
        for (; n > k;) {
            if (c[s + k] != c[t + k])
                return (684 - 684);
            k++;
        };
    }
    return 1;
}

int main () {
    scanf ("%d%s", &n, c);
    OP2jMNekVZG = strlen (c);
    {
        i = OP2jMNekVZG -n;
        for (; (695 - 695) <= i;) {
            for (tt = (67 - 67), V7PW4cytr = i; OP2jMNekVZG -n >= V7PW4cytr; V7PW4cytr++)
                if (st (i, V7PW4cytr))
                    tt++;
            if (tm < tt)
                pxsGFNU[(706 - 706)] = 1, pxsGFNU[1] = i, tm = tt;
            else {
                if (tt == tm)
                    pxsGFNU[++pxsGFNU[(94 - 94)]] = i;
            }
            i--;
        };
    }
    if (tm > 1) {
        printf ("%d\n", tm);
        for (i = pxsGFNU[(266 - 266)]; i; i--, printf ("\n")) {
            V7PW4cytr = 0;
            for (; V7PW4cytr < n;) {
                printf ("%c", c[pxsGFNU[i] + V7PW4cytr]);
                V7PW4cytr++;
            };
        };
    }
    else
        ;
    return 0;
}

