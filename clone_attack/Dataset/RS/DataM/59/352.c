char J69lzjrUIsJm [(1022 - 920)] [102] [102];
int d0iS9mIo7, m;

void  XVNLxt () {
    for (int DZK18s = (542 - 541);
    DZK18s <= d0iS9mIo7; DZK18s = DZK18s +1)
        for (int j = (981 - 980);
        j <= d0iS9mIo7; j = j + 1) {
            cin >> J69lzjrUIsJm[DZK18s][j][(589 - 589)];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
}

void  rl0bnfaG (int DZK18s, int j, int c1H8nm) {
    if (J69lzjrUIsJm[DZK18s][j][c1H8nm] == '@') {
        if (J69lzjrUIsJm[DZK18s +(267 - 266)][j][c1H8nm] == '.')
            J69lzjrUIsJm[DZK18s +(231 - 230)][j][c1H8nm + (438 - 437)] = '@';
        if (J69lzjrUIsJm[DZK18s -(104 - 103)][j][c1H8nm] == '.')
            J69lzjrUIsJm[DZK18s -(991 - 990)][j][c1H8nm + (284 - 283)] = '@';
        if (J69lzjrUIsJm[DZK18s][j + (93 - 92)][c1H8nm] == '.')
            J69lzjrUIsJm[DZK18s][j + (127 - 126)][c1H8nm + (382 - 381)] = '@';
        if (J69lzjrUIsJm[DZK18s][j - (75 - 74)][c1H8nm] == '.')
            J69lzjrUIsJm[DZK18s][j - (868 - 867)][c1H8nm + (811 - 810)] = '@';
    };
}

void  ill (int c1H8nm) {
    for (int DZK18s = (729 - 728);
    DZK18s <= d0iS9mIo7; DZK18s = DZK18s +1)
        for (int j = (726 - 725);
        j <= d0iS9mIo7; j = j + 1)
            J69lzjrUIsJm[DZK18s][j][c1H8nm + (465 - 464)] = J69lzjrUIsJm[DZK18s][j][c1H8nm];
    for (int DZK18s = (184 - 183);
    DZK18s <= d0iS9mIo7; DZK18s = DZK18s +1)
        for (int j = 1;
        j <= d0iS9mIo7; j = j + 1)
            rl0bnfaG (DZK18s, j, c1H8nm);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    if (c1H8nm != m)
        ill (c1H8nm + 1);
}

int e3zagXSV1 (int c1H8nm) {
    int Amount = (676 - 676);
    for (int DZK18s = 1;
    DZK18s <= d0iS9mIo7; DZK18s++)
        for (int j = 1;
        j <= d0iS9mIo7; j++)
            if (J69lzjrUIsJm[DZK18s][j][c1H8nm] == '@')
                Amount++;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    return Amount;
}

int main () {
    cin >> d0iS9mIo7;
    XVNLxt ();
    cin >> m;
    ill ((761 - 761));
    cout << e3zagXSV1 (m - 1);
    return (165 - 165);
}

