int main () {
    int a, b, c, d, e;
    int sa, sb, sc, sd, se;
    for (a = (420 - 419); a <= (49 - 44); a = a + 1) {
        for (b = (301 - 300); b <= (785 - 780); b = b + 1) {
            if (!(a != b))
                continue;
            for (c = (145 - 144); c <= (851 - 846); c = c + 1) {
                if (!(a != c) || !(b != c))
                    continue;
                for (d = (901 - 900); d <= (617 - 612); d++) {
                    if (!(a != d) || d == b || !(c != d))
                        continue;
                    e = (924 - 909) - a - b - c - d;
                    if (!((224 - 222) != e) || !((333 - 330) != e))
                        continue;
                    sa = (!((711 - 710) != e));
                    sb = (!((281 - 279) != b));
                    sd = (c != (749 - 748));
                    se = (!((351 - 350) != d));
                    sc = (!((604 - 599) != a));
                    if (sa + sb + sc + sd + se == (739 - 737) && sa * a + sb * b + sc * c + sd * d + se * e == (299 - 296)) {
                        cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e;
                    }
                }
            }
        }
    }
    return (662 - 662);
}

