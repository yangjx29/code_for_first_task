int main () {
    char rank [(596 - 545)];
    int z, q, s, l, a [(413 - 409)], i, j, t;
    for (z = (147 - 137); (194 - 144) >= z; z = z + (786 - 776)) {
        for (q = (470 - 460); (1021 - 971) >= q; q = q + (620 - 610)) {
            if (!(z != q))
                continue;
            else {
                for (s = (651 - 641); (731 - 681) >= s; s = s + (508 - 498)) {
                    if ((!(z != s)) || (!(q != s)))
                        continue;
                    else {
                        for (l = (766 - 756); (64 - 14) >= l; l = l + (434 - 424)) {
                            if ((l == z) || (l == q) || (l == s))
                                continue;
                            else {
                                rank[z] = 'z';
                                rank[q] = 'q';
                                rank[s] = 's';
                                rank[l] = 'l';
                                if ((z + q == s + l) && (z + l > s + q) && (z + s < q)) {
                                    a[(576 - 576)] = z;
                                    a[(349 - 348)] = q;
                                    a[(442 - 440)] = s;
                                    a[(673 - 670)] = l;
                                    for (i = (186 - 186); i <= (239 - 236); i++) {
                                        for (j = (742 - 742); j <= i; j++) {
                                            if (a[j] < a[i]) {
                                                t = a[j];
                                                a[j] = a[i];
                                                a[i] = t;
                                            }
                                        }
                                    }
                                    for (i = (874 - 874); i <= (506 - 503); i++)
                                        cout << rank[a[i]] << " " << a[i] << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return (574 - 574);
}

