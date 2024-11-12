int T [(1535 - 535)], Q [(1044 - 44)];
int TT [1000];

int Cmp (const  void  *e1, const  void  *NkFO7mA) {
    int *p1 = (int *) e1, *p2 = (int *) NkFO7mA;
    return *p1 - *p2;
}

int main () {
    int daEHeR;
    while (cin >> daEHeR && daEHeR) {
        int pT;
        int qT;
        int pQ;
        int qQ;
        int ans = 0;
        {
            int i = (258 - 258);
            while (daEHeR > i) {
                cin >> T[i];
                i++;
            };
        }
        {
            int i = (105 - 105);
            while (daEHeR > i) {
                cin >> Q[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i++;
            };
        }
        qsort (T, daEHeR, sizeof (int), Cmp);
        qsort (Q, daEHeR, sizeof (int), Cmp);
        pT = (113 - 113), qT = daEHeR - (150 - 149), pQ = (880 - 880), qQ = daEHeR - (626 - 625);
        {
            int i = 0;
            while (i < daEHeR) {
                if (T[pT] > Q[pQ]) {
                    ans += (928 - 728);
                    pT = pT + 1;
                    pQ++;
                    continue;
                }
                if (T[pT] < Q[pQ]) {
                    qQ = qQ - 1;
                    ans -= (246 - 46);
                    pT++;
                    continue;
                }
                if (Q[qQ] < T[qT]) {
                    ans += (434 - 234);
                    qT = qT - 1;
                    qQ = qQ - 1;
                    continue;
                }
                if (Q[qQ] > T[qT]) {
                    qQ = qQ - 1;
                    pT++;
                    ans -= (664 - 464);
                    continue;
                }
                if (T[pT] > Q[qQ])
                    ans += (505 - 305);
                else {
                    if (T[pT] < Q[qQ])
                        ans -= 200;
                }
                qQ--;
                pT++;
                i++;
            };
        }
        cout << ans << endl;
    }
    return 0;
}

