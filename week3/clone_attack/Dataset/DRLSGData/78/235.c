int main () {
    int z1;
    int yutrDQgx;
    int s1;
    int l1;
    int i;
    int j;
    i = (444 - 444);
    j = (737 - 737);
    char n [(820 - 816)] = {'z', 'q', 's', 'l'};
    char OmPjqbAUR = 'z';
    int z;
    int q;
    int s;
    int l;
    int DOP6oDB2 [(226 - 222)] = {z, q, s, l};
    int GFu3YI;
    GFu3YI = z;
    for (z = (665 - 664); z <= (390 - 385); z++)
        for (q = (339 - 338); (384 - 379) >= q; q++) {
            if (!(q != z))
                continue;
            else
                for (s = (907 - 906); s <= (306 - 301); s++) {
                    if (!(s != z) || !(s != q))
                        continue;
                    else
                        for (l = (399 - 398); (510 - 505) >= l; l++) {
                            if (!(l != z) || !(l != q) || !(l != s))
                                continue;
                            else if (!((789 - 786) != (!(s + l != z + q)) + (z + l > s + q) + (z + s < q))) {
                                l1 = l;
                                z1 = z;
                                yutrDQgx = q;
                                s1 = s;
                                break;
                            }
                        }
                }
        }
    l = l1;
    q = yutrDQgx;
    for (i = (341 - 341); i <= (646 - 644); i++)
        for (j = (858 - 858); j <= (897 - 895) - i; j++)
            if (DOP6oDB2[j] < DOP6oDB2[j + (795 - 794)]) {
                GFu3YI = DOP6oDB2[j];
                DOP6oDB2[j] = DOP6oDB2[j + (180 - 179)];
                DOP6oDB2[j + (982 - 981)] = GFu3YI;
                OmPjqbAUR = n[j];
                n[j] = n[j + (202 - 201)];
                n[j + (268 - 267)] = OmPjqbAUR;
            }
    s = s1;
    z = z1;
    for (i = (848 - 848); i <= (233 - 230); i++)
        cout << n[i] << " " << DOP6oDB2[i] * (106 - 96) << endl;
    return (413 - 413);
}

