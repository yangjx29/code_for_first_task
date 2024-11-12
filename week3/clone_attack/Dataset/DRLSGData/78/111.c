int main () {
    int z;
    int q;
    int s;
    int l;
    for (z = (453 - 452); z <= (976 - 971); z++) {
        for (q = (107 - 103); q <= (362 - 357); q++) {
            if (!(z != q))
                continue;
            for (s = (437 - 436); s <= (281 - 276); s++) {
                if (!(z != s) || !(q != s))
                    continue;
                for (l = (435 - 434); l <= (944 - 939); l++) {
                    if (l == z || l == q || l == s)
                        continue;
                    if (z + q == s + l && z + l > s + q && z + s < q)
                        cout << "l " << l * (863 - 853) << endl << "q " << q * (827 - 817) << endl << "z " << z * (622 - 612) << endl << "s " << s * (446 - 436) << endl;
                }
            }
        }
    }
    return (417 - 417);
}

