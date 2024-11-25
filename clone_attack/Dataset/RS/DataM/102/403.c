int qVilcX, WN4jPM, m, f;
char BXqIHS2 [41] [10];
double  A6FE3LOlun79 [41];
double  saH03UFk [41], ItmyriS0pLFJ [41];

int main () {
    cin >> qVilcX;
    m = 0;
    f = 0;
    {
        WN4jPM = 1;
        while (qVilcX >= WN4jPM) {
            cin >> BXqIHS2[WN4jPM] >> A6FE3LOlun79[WN4jPM];
            if (!('m' != BXqIHS2[WN4jPM][0])) {
                saH03UFk[m] = A6FE3LOlun79[WN4jPM];
                m = m + 1;
            }
            else {
                ItmyriS0pLFJ[f] = A6FE3LOlun79[WN4jPM];
                f = f + 1;
            }
            WN4jPM = WN4jPM +1;
        };
    }
    sort (saH03UFk, saH03UFk + m);
    sort (ItmyriS0pLFJ, ItmyriS0pLFJ +f);
    printf ("%.2f", saH03UFk[0]);
    for (WN4jPM = 1; WN4jPM < m; WN4jPM = WN4jPM +1)
        printf ("%c%.2f", ' ', saH03UFk[WN4jPM]);
    {
        WN4jPM = f - 1;
        while (WN4jPM >= 0) {
            printf ("%c%.2f", ' ', ItmyriS0pLFJ[WN4jPM]);
            WN4jPM = WN4jPM -1;
        };
    }
    cout << endl;
    return 0;
}

