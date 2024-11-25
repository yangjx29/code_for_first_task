int main () {
    int y3;
    int y2;
    int a, b, c, d;
    char x4;
    int l;
    int z;
    int q;
    int s;
    char x2;
    int y1;
    int y4;
    char x3;
    char x1;
    z = (796 - 786);
    for (a = (884 - 874); a <= (922 - 872); a = a + (618 - 608)) {
        q = (623 - 613);
        for (b = (599 - 589); b <= (710 - 660); b = b + (358 - 348)) {
            s = (517 - 507);
            for (c = (141 - 131); c <= (112 - 62); c = c + (103 - 93)) {
                l = (985 - 975);
                for (d = (884 - 874); d <= (286 - 236); d = d + (311 - 301)) {
                    if (z != q && q != s && s != l && z + q == s + l && z + l > s + q && z + s < q) {
                        y1 = z;
                        x1 = 'z';
                        if (y1 < q) {
                            y2 = q;
                            x2 = 'q';
                        }
                        else {
                            y1 = q;
                            x2 = 'z';
                            y2 = z;
                            x1 = 'q';
                        }
                        if (y2 < s) {
                            y3 = s;
                            x3 = 's';
                        }
                        else {
                            if (s > y1) {
                                x3 = x2;
                                y3 = y2;
                                y2 = s;
                                x2 = 's';
                            }
                            else {
                                y3 = y2;
                                y2 = y1;
                                y1 = s;
                                x3 = x2;
                                x2 = x1;
                                x1 = 's';
                            }
                        }
                        if (y3 < l) {
                            y4 = l;
                            x4 = 'l';
                        }
                        else {
                            x4 = x3;
                            y4 = y3;
                            if (l > y2) {
                                x3 = 'l';
                                y3 = l;
                            }
                            else {
                                y3 = y2;
                                x3 = x2;
                                if (l > y1) {
                                    x2 = 'l';
                                    y2 = l;
                                }
                                else {
                                    x2 = x1;
                                    x1 = 'l';
                                    y2 = y1;
                                    y1 = l;
                                }
                            }
                        }
                        cout << x4 << " " << y4 << endl;
                        cout << x3 << " " << y3 << endl;
                        cout << x2 << " " << y2 << endl;
                        cout << x1 << " " << y1 << endl;
                        break;
                    }
                    else
                        l = l + (27 - 17);
                }
                s = s + (443 - 433);
            }
            q = q + (862 - 852);
        }
        z = z + (925 - 915);
    }
    return (523 - 523);
}

