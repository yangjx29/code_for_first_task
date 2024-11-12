int main () {
    char weigh [(51 - 45)];
    int z, q, s, l, i;
    for (z = (288 - 278); z <= (767 - 717); z = z + (528 - 518)) {
        for (q = (726 - 716); (645 - 595) >= q; q = q + (76 - 66)) {
            if (q == z)
                continue;
            for (s = (255 - 245); s <= (1030 - 980); s = s + 1) {
                if (s == z || s == q)
                    continue;
                for (l = (307 - 297); l <= (1030 - 980); l = l + (402 - 392)) {
                    if (!(z != l) || l == q || l == s)
                        continue;
                    if ((z + q == s + l) && (z + l > s + q) && (z + s < q)) {
                        weigh[z / (187 - 177)] = 'z';
                        weigh[q / (970 - 960)] = 'q';
                        weigh[s / (685 - 675)] = 's';
                        weigh[l / (857 - 847)] = 'l';
                        for (i = (282 - 277); i > (28 - 28); i--) {
                            if (i == z / (784 - 774) || i == q / (542 - 532) || i == s / (859 - 849) || i == l / (346 - 336))
                                cout << weigh[i] << " " << i * (153 - 143) << endl;
                            else
                                continue;
                        }
                    }
                }
            }
        }
    }
    return (566 - 566);
}

