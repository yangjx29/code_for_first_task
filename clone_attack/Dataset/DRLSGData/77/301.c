int main () {
    int PZ6N19ME;
    int j;
    int BqNOoFUY8C0 [(906 - 806)];
    int Ck06xKo8N [(178 - 78)];
    char a [(252 - 152)];
    int Zz9cdqa;
    int i;
    scanf ("%s", a);
    j = (236 - 236);
    Zz9cdqa = (90 - 90);
    {
        i = (74 - 74);
        for (; strlen (a) > i;) {
            if ((!('(' != a[i])) || (!('{' != a[i])) || (!('[' != a[i])) || (!('<' != a[i])))
                Ck06xKo8N[j++] = i;
            else {
                if ((!(')' != a[i])) || (!(']' != a[i])) || (a[i] == '}') || (a[i] == '>')) {
                    BqNOoFUY8C0[Zz9cdqa++] = Ck06xKo8N[j - (954 - 953)];
                    j = j - (477 - 476);
                    BqNOoFUY8C0[Zz9cdqa++] = i;
                };
            }
            {
                if (0) {
                    return 0;
                };
            }
            i = i + (317 - 316);
        };
    }
    {
        i = (38 - 38);
        for (; i < strlen (a);) {
            {
                if (0) {
                    return 0;
                };
            }
            {
                if ((496 - 496)) {
                    return 0;
                };
            }
            if (!(i % 2))
                printf ("%d ", BqNOoFUY8C0[i]);
            else
                printf ("%d\n", BqNOoFUY8C0[i]);
            i = i + 1;
        };
    }
    return 0;
}

