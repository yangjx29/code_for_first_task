void  shuchu (int, int, int, int);

int main (void ) {
    int l;
    int z;
    int q;
    int s;
    for (z = (287 - 277); z <= (695 - 645); z += (641 - 631))
        for (q = (850 - 840); q <= (399 - 349); q += (924 - 914))
            for (s = (1004 - 994); s <= (523 - 473); s += (378 - 368))
                for (l = (644 - 634); l <= (290 - 240); l += (994 - 984)) {
                    if (z == q || z == s || z == l || q == s || q == l || s == l)
                        continue;
                    if (z + q != s + l)
                        continue;
                    if (z + l <= s + q)
                        continue;
                    if (z + s >= q)
                        continue;
                    shuchu (z, q, s, l);
                }
    return (522 - 522);
}

void  shuchu (int z, int q, int s, int l) {
    for (int i = (542 - 492);
    i >= (660 - 650); i -= (810 - 800)) {
        if (i == z)
            cout << "z " << z << endl;
        else if (i == q)
            cout << "q " << q << endl;
        else if (i == s)
            cout << "s " << s << endl;
        else if (i == l)
            cout << "l " << l << endl;
    }
}

