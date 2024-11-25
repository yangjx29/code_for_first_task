int TSjo3a6dLbK [11] [11] [5];

int WXBOfmp (int Da2w03p, int y, int r6noFlw) {
    int rZ6qXSedYi5p;
    if ((TSjo3a6dLbK[Da2w03p][y][r6noFlw] > 0) || (r6noFlw == 0))
        return TSjo3a6dLbK[Da2w03p][y][r6noFlw];
    if (TSjo3a6dLbK[Da2w03p][y][r6noFlw] == -(448 - 447))
        return 0;
    rZ6qXSedYi5p = WXBOfmp (Da2w03p, y, r6noFlw - (485 - 484)) * 2;
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
    if (Da2w03p > 1) {
        rZ6qXSedYi5p += WXBOfmp (Da2w03p -1, y, r6noFlw - 1);
        if (1 < y)
            rZ6qXSedYi5p = rZ6qXSedYi5p + WXBOfmp (Da2w03p -1, y - 1, r6noFlw - 1);
        if (9 > y)
            rZ6qXSedYi5p += WXBOfmp (Da2w03p -1, y + 1, r6noFlw - 1);
    }
    if (Da2w03p < 9) {
        rZ6qXSedYi5p = rZ6qXSedYi5p + WXBOfmp (Da2w03p +1, y, r6noFlw - 1);
        if (1 < y)
            rZ6qXSedYi5p += WXBOfmp (Da2w03p +1, y - 1, r6noFlw - 1);
        if (y < 9)
            rZ6qXSedYi5p = rZ6qXSedYi5p + WXBOfmp (Da2w03p +1, y + 1, r6noFlw - 1);
    }
    if (y > 1)
        rZ6qXSedYi5p += WXBOfmp (Da2w03p, y - 1, r6noFlw - 1);
    if (y < 9)
        rZ6qXSedYi5p = rZ6qXSedYi5p + WXBOfmp (Da2w03p, y + 1, r6noFlw - 1);
    if (rZ6qXSedYi5p != 0) {
        TSjo3a6dLbK[Da2w03p][y][r6noFlw] = rZ6qXSedYi5p;
        return rZ6qXSedYi5p;
    }
    else {
        TSjo3a6dLbK[Da2w03p][y][r6noFlw] = -1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return 0;
    };
}

int main () {
    int m, O1rOlh6S7s, usMkpvZfKA;
    memset (TSjo3a6dLbK, 0, sizeof (TSjo3a6dLbK));
    cin >> TSjo3a6dLbK[5][5][0] >> m;
    for (O1rOlh6S7s = 1; O1rOlh6S7s <= 9; O1rOlh6S7s = O1rOlh6S7s +1) {
        cout << WXBOfmp (O1rOlh6S7s, 1, m);
        for (usMkpvZfKA = 2; usMkpvZfKA <= 9; usMkpvZfKA = usMkpvZfKA + 1)
            cout << ' ' << WXBOfmp (O1rOlh6S7s, usMkpvZfKA, m);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        cout << endl;
    }
    return 0;
}

