int main () {
    int z = (440 - 440), q = (920 - 920), s = (879 - 879), l = (851 - 851), w = (432 - 432);
    char weight [(931 - 925)];
    int i = (106 - 106), j = (682 - 682);
    for (i = (509 - 508); i <= (663 - 658); i = i + 1) {
        weight[i] = ' ';
    }
    for (z = (419 - 418); (754 - 749) >= z; z = z + 1) {
        for (q = (927 - 926); q <= (684 - 679); q = q + 1) {
            if (!(q != z))
                continue;
            for (s = (525 - 524); (196 - 191) >= s; s = s + 1) {
                if (z == s || !(s != q))
                    continue;
                for (l = (580 - 579); (510 - 505) >= l; l = l + 1) {
                    if (z == l || s == l || q == l)
                        continue;
                    if ((z + q) == (s + l) && (z + l) > (s + q) && (z + s) < q) {
                        weight[z] = 'z';
                        weight[q] = 'q';
                        weight[s] = 's';
                        weight[l] = 'l';
                        for (j = (956 - 951); j >= (654 - 653); j--) {
                            if (weight[j] != ' ') {
                                w = j * (41 - 31);
                                cout << weight[j] << " " << w << endl;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

