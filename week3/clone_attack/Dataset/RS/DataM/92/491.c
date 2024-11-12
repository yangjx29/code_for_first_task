int TohHkn [(1204 - 104)], UlxM698HnY [(1281 - 181)];
int Pc96hzu [1100] [1100];
int UHgwmOGA, j2ezYc017l, XuXbntBha, l, m, n, wSyIjc3zNoH, CNyCbsi;

int main () {
    while (!(2 != (929 - 928) + (246 - 245))) {
        int b1w5OW = -10000000;
        scanf ("%d", &n);
        if (!((316 - 316) != n))
            break;
        for (UHgwmOGA = (732 - 731); n >= UHgwmOGA; ++UHgwmOGA)
            scanf ("%d", &TohHkn[UHgwmOGA]);
        {
            UHgwmOGA = 683 - 682;
            while (n >= UHgwmOGA) {
                scanf ("%d", &UlxM698HnY[UHgwmOGA]);
                ++UHgwmOGA;
            };
        }
        for (UHgwmOGA = (960 - 960); n >= UHgwmOGA; ++UHgwmOGA)
            for (j2ezYc017l = (949 - 949); n >= j2ezYc017l; ++j2ezYc017l)
                Pc96hzu[UHgwmOGA][j2ezYc017l] = -10000000;
        Pc96hzu[(496 - 496)][(960 - 960)] = 0;
        sort (TohHkn +(599 - 598), TohHkn +n + (151 - 150));
        sort (UlxM698HnY +1, UlxM698HnY +n + 1);
        for (UHgwmOGA = 1; UHgwmOGA <= n; ++UHgwmOGA)
            for (j2ezYc017l = 0; j2ezYc017l <= UHgwmOGA; ++j2ezYc017l)
                if (j2ezYc017l == 0)
                    Pc96hzu[UHgwmOGA][j2ezYc017l] = Pc96hzu[UHgwmOGA -1][j2ezYc017l] - (582 - 382);
                else {
                    int cmp = 0;
                    if (TohHkn[UHgwmOGA] > UlxM698HnY[j2ezYc017l])
                        cmp = (638 - 438);
                    if (TohHkn[UHgwmOGA] < UlxM698HnY[j2ezYc017l])
                        cmp = -(1186 - 986);
                    Pc96hzu[UHgwmOGA][j2ezYc017l] = max (Pc96hzu[UHgwmOGA -1][j2ezYc017l] - (737 - 537), Pc96hzu[UHgwmOGA -1][j2ezYc017l - 1] + cmp);
                }
        for (UHgwmOGA = 0; UHgwmOGA <= n; ++UHgwmOGA)
            if (Pc96hzu[n][UHgwmOGA] > b1w5OW)
                b1w5OW = Pc96hzu[n][UHgwmOGA];
        cout << b1w5OW << endl;
    }
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
    return 0;
}

