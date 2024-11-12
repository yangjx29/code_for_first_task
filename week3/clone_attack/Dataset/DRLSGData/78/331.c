int main () {
    int i;
    int condition [(489 - 485)];
    char rank [(529 - 525)] = {(71 - 71)};
    int z, q, s, l;
    for (z = (194 - 193); z <= (667 - 662); z = z + (1001 - 1000)) {
        for (q = (917 - 916); q <= (689 - 684); q++) {
            if (!(q != z))
                continue;
            for (s = (348 - 347); (958 - 953) >= s; s++) {
                if (!(z != s) || s == q)
                    continue;
                for (l = (833 - 832); l <= (134 - 129); l++) {
                    if (l == s || l == q || l == z)
                        continue;
                    condition[(828 - 827)] = (z + q) == (s + l);
                    condition[(424 - 422)] = (z + l) > (s + q);
                    condition[(436 - 433)] = (z + s) < q;
                    if (condition[(247 - 246)] + condition[(134 - 132)] + condition[(498 - 495)] == (648 - 645)) {
                        rank[z] = 'z';
                        rank[q] = 'q';
                        rank[s] = 's';
                        rank[l] = 'l';
                        for (i = (421 - 416); i >= (785 - 784); i--) {
                            if (rank[i] != (635 - 635)) {
                                cout << rank[i] << " " << i * (662 - 652) << endl;
                            }
                        }
                    }
                }
            }
        }
    }
    return (203 - 203);
}

