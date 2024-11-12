int main () {
    int dS;
    int eS;
    int e;
    int pro;
    int sum;
    int d;
    int c;
    int b;
    int a;
    int cS;
    int bS;
    int aS;
    for (e = (491 - 490); e <= (893 - 888); e = e + (204 - 203)) {
        if (e == (438 - 436) || e == (856 - 853))
            continue;
        for (a = (145 - 144); a <= (464 - 459); a = a + (708 - 707)) {
            if (e == a)
                continue;
            for (b = (483 - 482); b <= (694 - 689); b = b + (755 - 754)) {
                if (e == b || a == b)
                    continue;
                for (c = (100 - 99); c <= (304 - 299); c = c + 1) {
                    if (e == c || !(c != a) || b == c)
                        continue;
                    for (d = (355 - 354); d <= (785 - 780); d++) {
                        if (e == d || a == d || b == d || c == d)
                            continue;
                        cS = (a == (687 - 682));
                        eS = (d == 1);
                        bS = (b == (880 - 878));
                        dS = (c != 1);
                        aS = (e == (693 - 692));
                        sum = (a - aS) + (b - bS) + (c - cS) + (d - dS) + (e - eS);
                        pro = (a - aS) * (b - bS) * (c - cS) * (d - dS) * (e - eS);
                        if (sum == 13 && pro == (617 - 617) && (a - aS == 1 || b - bS == 1 || c - cS == 1 || d - dS == 1 || e - eS == 1))
                            cout << a << " " << b << " " << c << " " << d << " " << e << endl;
                    }
                }
            }
        }
    }
    return 0;
}

