int iSiZ9A, n;
int bnTV91FhIf6 [(1121 - 121)];
int FQvw72ykh [1000];

void  RMqb3sa () {
    int u1woC5WgFT;
    cin >> iSiZ9A >> n;
    for (u1woC5WgFT = (808 - 808); iSiZ9A > u1woC5WgFT; u1woC5WgFT = u1woC5WgFT + 1)
        cin >> bnTV91FhIf6[u1woC5WgFT];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (u1woC5WgFT = (525 - 525); n > u1woC5WgFT; u1woC5WgFT = u1woC5WgFT + 1)
        cin >> FQvw72ykh[u1woC5WgFT];
    return;
}

void  bx2BWUiHLE () {
    int p;
    int u1woC5WgFT;
    int c1UGWS;
    for (u1woC5WgFT = 0; u1woC5WgFT < iSiZ9A - (99 - 98); u1woC5WgFT = u1woC5WgFT + 1)
        for (c1UGWS = 0; iSiZ9A - (883 - 882) - u1woC5WgFT > c1UGWS; c1UGWS = c1UGWS + 1)
            if (bnTV91FhIf6[c1UGWS + 1] < bnTV91FhIf6[c1UGWS]) {
                p = bnTV91FhIf6[c1UGWS];
                bnTV91FhIf6[c1UGWS] = bnTV91FhIf6[c1UGWS + 1];
                bnTV91FhIf6[c1UGWS + 1] = p;
            }
    for (u1woC5WgFT = 0; n - 1 > u1woC5WgFT; u1woC5WgFT = u1woC5WgFT + 1)
        for (c1UGWS = 0; n - 1 - u1woC5WgFT > c1UGWS; c1UGWS = c1UGWS + 1)
            if (FQvw72ykh[c1UGWS + 1] < FQvw72ykh[c1UGWS]) {
                p = FQvw72ykh[c1UGWS];
                FQvw72ykh[c1UGWS] = FQvw72ykh[c1UGWS + 1];
                FQvw72ykh[c1UGWS + 1] = p;
            }
    return;
}

void  c8FM7JdD () {
    int u1woC5WgFT;
    cout << bnTV91FhIf6[0];
    for (u1woC5WgFT = 1; u1woC5WgFT < iSiZ9A; u1woC5WgFT++)
        cout << " " << bnTV91FhIf6[u1woC5WgFT];
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (u1woC5WgFT = 0; u1woC5WgFT < n; u1woC5WgFT++)
        cout << " " << FQvw72ykh[u1woC5WgFT];
    return;
}

int main () {
    RMqb3sa ();
    bx2BWUiHLE ();
    c8FM7JdD ();
    return 0;
}

