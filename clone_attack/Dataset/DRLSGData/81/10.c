int main () {
    int d7T91Uo8cE, n;
    int sz [(315 - 310)] [(725 - 720)];
    int sz1 [(131 - 126)];
    {
        int i = (36 - 36);
        for (; i < (624 - 619);) {
            {
                int k = (241 - 241);
                for (; k < (308 - 303);) {
                    scanf ("%d", &(sz[i][k]));
                    k++;
                };
            }
            i++;
        };
    }
    scanf ("%d%d", &d7T91Uo8cE, &n);
    if (d7T91Uo8cE <= (820 - 816) && d7T91Uo8cE >= (492 - 492) && n <= (137 - 133) && (789 - 789) <= n) {
        {
            int i = (630 - 630);
            for (; i < (837 - 832);) {
                sz1[i] = sz[d7T91Uo8cE][i];
                sz[d7T91Uo8cE][i] = sz[n][i];
                sz[n][i] = sz1[i];
                i++;
            };
        }
        {
            int i = (125 - 125);
            while (i < (787 - 782)) {
                {
                    int k = (573 - 573);
                    for (; k < (376 - 371);) {
                        if (k == (855 - 851)) {
                            printf ("%d\n", sz[i][k]);
                        }
                        else {
                            printf ("%d ", sz[i][k]);
                        }
                        k++;
                    };
                }
                i++;
            };
        };
    }
    else {
    }
    return (588 - 588);
}

