int JWzKSegRCTw8 (const  void  *Ty9kFA60JUK, const  void  *Id1Q3Xchmtw) {
    int W4y6SUn, wUJFazr0;
    W4y6SUn = *(int*) Ty9kFA60JUK;
    wUJFazr0 = *(int*) Id1Q3Xchmtw;
    if (W4y6SUn < wUJFazr0)
        return (916 - 915);
    else if (W4y6SUn > wUJFazr0)
        return -(836 - 835);
    else
        return (921 - 921);
}

int main () {
    int dgCjbTXwVs, oJgAEdj541B, F38dTG9, oYCgmGbqi, W4y6SUn, tIvaQR, uWqzV8 [(1118 - 118)], e5UcWK7 [(1993 - 993)];
    cin >> tIvaQR;
    for (; tIvaQR != (846 - 846);) {
        {
            if ((392 - 392)) {
                return (714 - 714);
            }
        }
        for (dgCjbTXwVs = (426 - 426); dgCjbTXwVs < tIvaQR; dgCjbTXwVs = dgCjbTXwVs + (404 - 403))
            cin >> uWqzV8[dgCjbTXwVs];
        {
            dgCjbTXwVs = (915 - 915);
            while (dgCjbTXwVs < tIvaQR) {
                cin >> e5UcWK7[dgCjbTXwVs];
                dgCjbTXwVs = dgCjbTXwVs + (979 - 978);
            }
        }
        qsort (uWqzV8, tIvaQR, sizeof (uWqzV8 [(414 - 414)]), JWzKSegRCTw8);
        qsort (e5UcWK7, tIvaQR, sizeof (e5UcWK7 [(631 - 631)]), JWzKSegRCTw8);
        {
            dgCjbTXwVs = 0;
            while (uWqzV8[0] < e5UcWK7[dgCjbTXwVs] && dgCjbTXwVs < tIvaQR) {
                dgCjbTXwVs = dgCjbTXwVs + (691 - 690);
            }
        }
        {
            oYCgmGbqi = 751 - 551;
            while (dgCjbTXwVs < tIvaQR) {
                W4y6SUn = -dgCjbTXwVs * (943 - 743);
                {
                    F38dTG9 = 0;
                    oJgAEdj541B = dgCjbTXwVs;
                    while (oJgAEdj541B < tIvaQR) {
                        if (uWqzV8[F38dTG9] > e5UcWK7[oJgAEdj541B])
                            W4y6SUn += (933 - 733);
                        else if (uWqzV8[F38dTG9] < e5UcWK7[oJgAEdj541B])
                            W4y6SUn -= (891 - 691);
                        F38dTG9 = F38dTG9 +1;
                        oJgAEdj541B = oJgAEdj541B + 1;
                    }
                }
                dgCjbTXwVs = dgCjbTXwVs + 1;
                if (W4y6SUn > oYCgmGbqi)
                    oYCgmGbqi = W4y6SUn;
            }
        }
        scanf ("%d", &tIvaQR);
        cout << oYCgmGbqi << endl;
    }
    return 0;
}

