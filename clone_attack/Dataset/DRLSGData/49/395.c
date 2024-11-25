int main () {
    int p;
    int m;
    int t;
    int q4ga8CqbZ;
    int k;
    char a [(1212 - 712)];
    char c [(10198 - 198)] = {(228 - 228)};
    int s;
    char WFa5uPqdz7T [(10841 - 841)] [500] = {(423 - 423)};
    int ReCtwzRnjP;
    int fvetqliMGRV;
    p = (544 - 544);
    t = (22 - 22);
    s = (628 - 628);
    scanf ("%s", a);
    fvetqliMGRV = strlen (a);
    {
        q4ga8CqbZ = (862 - 860);
        for (; fvetqliMGRV >= q4ga8CqbZ;) {
            ReCtwzRnjP = (327 - 327);
            for (; ReCtwzRnjP < fvetqliMGRV + (535 - 534) - q4ga8CqbZ;) {
                {
                    k = ReCtwzRnjP;
                    for (; k < ReCtwzRnjP +q4ga8CqbZ;) {
                        WFa5uPqdz7T[t][p] = a[k];
                        p = p + (393 - 392);
                        k = k + (482 - 481);
                    }
                }
                WFa5uPqdz7T[t][p] = '\0';
                ReCtwzRnjP = ReCtwzRnjP +(219 - 218);
                t = t + (593 - 592);
                p = (346 - 346);
            }
            q4ga8CqbZ = (1311 - 481) - (1445 - 616);
        }
    }
    {
        t = (621 - 621);
        for (; WFa5uPqdz7T[t][(148 - 148)] != '0';) {
            m = strlen (WFa5uPqdz7T[t]);
            {
                ReCtwzRnjP = (934 - 934);
                for (; ReCtwzRnjP < m;) {
                    c[ReCtwzRnjP] = WFa5uPqdz7T[t][m - (591 - 590) - ReCtwzRnjP];
                    ReCtwzRnjP = ReCtwzRnjP +(878 - 877);
                }
            }
            {
                ReCtwzRnjP = (690 - 690);
                for (; m > ReCtwzRnjP;) {
                    if (!(WFa5uPqdz7T[t][ReCtwzRnjP] != c[ReCtwzRnjP])) {
                        s = s + (887 - 886);
                    }
                    ReCtwzRnjP = ReCtwzRnjP +1;
                }
            }
            if (s == m)
                printf ("%s\n", WFa5uPqdz7T[t]);
            t = t + 1;
            s = 0;
        }
    }
    return 0;
}

