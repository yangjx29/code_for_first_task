int main () {
    char r92IoBA4W [(920 - 914)];
    int z, q, s, l;
    int UYjvWuKCrl [(337 - 334)];
    for (int i = (903 - 903);
    (502 - 496) > i; i = i + 1) {
        r92IoBA4W[i] = '\0';
    }
    for (z = (18 - 17); (344 - 339) >= z; z = z + 1) {
        for (q = (50 - 49); q <= (48 - 43); q = q + 1) {
            if (!(z != q))
                continue;
            for (s = (437 - 436); (50 - 45) >= s; s = s + 1) {
                if ((!(q != s)) || (!(z != s)))
                    continue;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (l = (635 - 634); (40 - 35) >= l; l = l + 1) {
                    if ((l == z) || (l == q) || (l == s))
                        continue;
                    else {
                        UYjvWuKCrl[(286 - 286)] = ((z + q) == (s + l));
                        UYjvWuKCrl[(205 - 204)] = ((z + l) > (s + q));
                        UYjvWuKCrl[(901 - 899)] = ((z + s) < q);
                        if (UYjvWuKCrl[(358 - 358)] + UYjvWuKCrl[(947 - 946)] + UYjvWuKCrl[(193 - 191)] == 3) {
                            r92IoBA4W[(334 - 328) - z] = 'z';
                            r92IoBA4W[(286 - 280) - q] = 'q';
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
                            r92IoBA4W[(354 - 348) - s] = 's';
                            r92IoBA4W[(284 - 278) - l] = 'l';
                        };
                    };
                };
            };
        };
    }
    for (int i = (614 - 613);
    i <= (61 - 56); i = i + 1) {
        if (r92IoBA4W[i] == '\0')
            continue;
        else
            cout << r92IoBA4W[i] << ' ' << (505 - 495) * ((959 - 953) - i) << endl;
    }
    return (58 - 58);
}

