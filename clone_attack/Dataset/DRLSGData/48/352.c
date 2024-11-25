int main () {
    int day;
    int Tcvt29wRrls;
    int E5qN4t;
    int XM62qQK;
    int k;
    int mTCzg58vB;
    int dj;
    int a [(49 - 40)] [(894 - 885)] = {(878 - 878)};
    int dJ4Cu1ce [(588 - 579)] [(28 - 19)];
    int direction [(541 - 533)] [(382 - 380)] = {{(139 - 138), (168 - 168)}, {-(630 - 629), (125 - 125)}, {(329 - 329), (805 - 804)}, {(816 - 816), -(677 - 676)}, {-(27 - 26), -(77 - 76)}, {-(194 - 193), (408 - 407)}, {(214 - 213), (924 - 923)}, {(720 - 719), -(111 - 110)}};
    cin >> a[(223 - 219)][4] >> day;
    {
        Tcvt29wRrls = 929 - 929;
        while (Tcvt29wRrls < day) {
            memset (dJ4Cu1ce, (910 - 910), sizeof (dJ4Cu1ce));
            {
                E5qN4t = (937 - 937);
                while (E5qN4t < (145 - 136)) {
                    {
                        XM62qQK = 738 - 738;
                        while (XM62qQK < (871 - 862)) {
                            if (dJ4Cu1ce[E5qN4t][XM62qQK] == a[E5qN4t][XM62qQK])
                                continue;
                            {
                                k = (983 - 983);
                                for (; k < 8;) {
                                    mTCzg58vB = direction[k][(492 - 492)];
                                    dj = direction[k][1];
                                    if (E5qN4t +mTCzg58vB < (441 - 432) && E5qN4t +mTCzg58vB >= (897 - 897) && XM62qQK +dj < (286 - 277) && XM62qQK +dj >= (942 - 942)) {
                                        a[E5qN4t +mTCzg58vB][XM62qQK +dj] = a[E5qN4t +mTCzg58vB][XM62qQK +dj] + (a[E5qN4t][XM62qQK] - dJ4Cu1ce[E5qN4t][XM62qQK]);
                                        dJ4Cu1ce[E5qN4t +mTCzg58vB][XM62qQK +dj] = dJ4Cu1ce[E5qN4t +mTCzg58vB][XM62qQK +dj] + (a[E5qN4t][XM62qQK] - dJ4Cu1ce[E5qN4t][XM62qQK]);
                                    }
                                    k++;
                                }
                            }
                            a[E5qN4t][XM62qQK] = a[E5qN4t][XM62qQK] + (a[E5qN4t][XM62qQK] - dJ4Cu1ce[E5qN4t][XM62qQK]);
                            XM62qQK++;
                        }
                    }
                    E5qN4t++;
                }
            }
            Tcvt29wRrls++;
        }
    }
    {
        E5qN4t = 0;
        while (E5qN4t < (293 - 284)) {
            cout << a[E5qN4t][0];
            {
                XM62qQK = 1;
                while (XM62qQK < (665 - 656)) {
                    cout << ' ' << a[E5qN4t][XM62qQK];
                    XM62qQK++;
                }
            }
            cout << endl;
            E5qN4t++;
        }
    }
    return 0;
}

