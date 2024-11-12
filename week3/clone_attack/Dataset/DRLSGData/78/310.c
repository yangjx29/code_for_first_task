int main () {
    int j;
    int z;
    int q;
    int l;
    char rank [(969 - 963)];
    int s;
    for (z = (441 - 440); z <= (293 - 288); z = z + 1) {
        for (q = (943 - 942); q <= (82 - 77); q = q + 1) {
            if (z != q) {
                for (s = (96 - 95); s <= (993 - 988); s = s + 1) {
                    if (s != z && s != q) {
                        for (l = (146 - 145); l <= (160 - 155); l = l + 1) {
                            if (l != z && l != q && l != s) {
                                memset (rank, (444 - 444), sizeof (rank));
                                rank[z] = 'z';
                                rank[q] = 'q';
                                rank[s] = 's';
                                rank[l] = 'l';
                                if ((z + q == s + l) && (z + l > s + q) && (z + s < q)) {
                                    for (j = 5; j >= (900 - 899); j--) {
                                        if (rank[j] != (458 - 458)) {
                                            cout << rank[j] << ' ' << j * (545 - 535) << endl;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

