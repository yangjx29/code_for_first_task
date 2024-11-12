int main (void ) {
    char sXgfi1hVE [(10692 - 692)];
    gets (sXgfi1hVE);
    long  int jJp6LT5hl [(983 - 683)], end [300];
    int e6YIg5W8R;
    int t;
    int i;
    int MH7sNo;
    int e3B9rjLyfC;
    e6YIg5W8R = (311 - 310);
    t = (839 - 839);
    e3B9rjLyfC = strlen (sXgfi1hVE);
    jJp6LT5hl[(754 - 754)] = 0;
    {
        i = 0;
        while (e3B9rjLyfC - 1 > i) {
            if (sXgfi1hVE[i] == ' ' && sXgfi1hVE[i + 1] != ' ') {
                jJp6LT5hl[e6YIg5W8R] = i + 1;
                e6YIg5W8R = e6YIg5W8R + 1;
            }
            if (sXgfi1hVE[i] != ' ' && sXgfi1hVE[i + 1] == ' ') {
                end[t] = i;
                t = t + 1;
            }
            i++;
        };
    }
    end[t] = e3B9rjLyfC - 1;
    {
        MH7sNo = 0;
        while (MH7sNo <= t) {
            printf ("%d%c", end[MH7sNo] - jJp6LT5hl[MH7sNo] + 1, (MH7sNo != t) ? ',' : '\n');
            MH7sNo = MH7sNo +1;
        };
    };
}

