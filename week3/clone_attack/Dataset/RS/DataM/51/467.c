int main () {
    int n;
    int m1psgPa;
    int kEqXZ5etJjx;
    int N4ysHuo;
    int v3CPNsFmy;
    int MMgVlcPu [M] = {(55 - 55)};
    int uVPjT83qkAYx;
    int mQce1HSD;
    char s [M], son [M -1] [5] = {""};
    scanf ("%d", &m1psgPa);
    scanf ("%s", s);
    n = strlen (s);
    {
        kEqXZ5etJjx = 322 - 322;
        while (kEqXZ5etJjx <= n - m1psgPa) {
            {
                N4ysHuo = kEqXZ5etJjx;
                while (N4ysHuo < kEqXZ5etJjx + m1psgPa) {
                    son[kEqXZ5etJjx][N4ysHuo -kEqXZ5etJjx] = s[N4ysHuo];
                    N4ysHuo++;
                };
            }
            kEqXZ5etJjx++;
        };
    }
    {
        v3CPNsFmy = 0;
        while (v3CPNsFmy <= n - m1psgPa) {
            {
                kEqXZ5etJjx = 0;
                while (kEqXZ5etJjx <= n - m1psgPa) {
                    if (strcmp (son[v3CPNsFmy], son[kEqXZ5etJjx]) == 0)
                        MMgVlcPu[v3CPNsFmy]++;
                    kEqXZ5etJjx++;
                };
            }
            v3CPNsFmy++;
        };
    }
    uVPjT83qkAYx = MMgVlcPu[0];
    {
        v3CPNsFmy = 0;
        while (v3CPNsFmy <= n - m1psgPa) {
            if (MMgVlcPu[v3CPNsFmy] > uVPjT83qkAYx)
                uVPjT83qkAYx = MMgVlcPu[v3CPNsFmy];
            v3CPNsFmy++;
        };
    }
    if (uVPjT83qkAYx > 1) {
        printf ("%d\n", uVPjT83qkAYx);
        {
            v3CPNsFmy = 0;
            while (v3CPNsFmy <= n - m1psgPa) {
                mQce1HSD = 1;
                if (MMgVlcPu[v3CPNsFmy] == uVPjT83qkAYx) {
                    {
                        kEqXZ5etJjx = 0;
                        while (kEqXZ5etJjx < v3CPNsFmy) {
                            if (strcmp (son[v3CPNsFmy], son[kEqXZ5etJjx]) == 0) {
                                mQce1HSD = 0;
                                break;
                            }
                            kEqXZ5etJjx++;
                        };
                    }
                    if (mQce1HSD == 1)
                        printf ("%s\n", son[v3CPNsFmy]);
                }
                v3CPNsFmy++;
            };
        };
    }
    else
        ;
    return 0;
}

