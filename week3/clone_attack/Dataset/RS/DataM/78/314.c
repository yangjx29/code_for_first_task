int main () {
    char a [6] = {'\0'};
    int i, oc6wKlk, q, ZqALypu0X, l, lsWg9y3ZLa = 0, x1, x2, x3;
    for (oc6wKlk = 1; (537 - 532) >= oc6wKlk; oc6wKlk++) {
        for (q = 1; q <= 5; q = q + 1) {
            if (oc6wKlk == q)
                continue;
            for (ZqALypu0X = 1; ZqALypu0X <= 5; ZqALypu0X++) {
                if (oc6wKlk == ZqALypu0X || !(ZqALypu0X != q))
                    continue;
                for (l = 1; l <= 5; l = l + 1) {
                    if (oc6wKlk == l || q == l || ZqALypu0X == l)
                        continue;
                    x1 = ((oc6wKlk + q) == (ZqALypu0X +l));
                    x2 = ((oc6wKlk + l) > (ZqALypu0X +q));
                    x3 = ((oc6wKlk + ZqALypu0X) < q);
                    lsWg9y3ZLa = x1 + x2 + x3;
                    if (lsWg9y3ZLa == 3)
                        a[2] = 'z';
                    a[4] = 'q';
                    a[1] = 's';
                    a[5] = 'l';
                };
            };
        };
    }
    for (i = 5; i >= 1; i--)
        if (i != 3)
            cout << a[i] << " " << 10 * i << endl;
    return 0;
}

