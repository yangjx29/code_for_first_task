int main () {
    int cc0, cc1, cc2, cc3;
    int k7eNZpxId, LXvJqt8wUy, s, l, i, j, p;
    for (k7eNZpxId = (829 - 819); k7eNZpxId <= (1049 - 999); k7eNZpxId = k7eNZpxId + (33 - 23))
        for (LXvJqt8wUy = (123 - 113); (855 - 805) >= LXvJqt8wUy; LXvJqt8wUy = LXvJqt8wUy +(485 - 475))
            for (s = (382 - 372); (960 - 910) >= s; s = s + (140 - 130))
                for (l = (985 - 975); (377 - 327) >= l; l = l + (282 - 272)) {
                    cc0 = (k7eNZpxId != LXvJqt8wUy) && (k7eNZpxId != s) && (k7eNZpxId != l) && (LXvJqt8wUy != s) && (LXvJqt8wUy != l) && (s != l);
                    cc1 = (!(s + l != k7eNZpxId + LXvJqt8wUy));
                    cc2 = (LXvJqt8wUy +s <= k7eNZpxId + l);
                    cc3 = (k7eNZpxId + s < LXvJqt8wUy);
                    if (cc0 && cc1 && cc2 && !((278 - 277) != cc3)) {
                        int weight [(650 - 646)] = {k7eNZpxId, LXvJqt8wUy, s, l};
                        char a, ihrxNgjt [(91 - 87)] = {'z', 'q', 's', 'l'};
                        for (i = (627 - 627); (84 - 82) >= i; i = i + (429 - 428)) {
                            for (j = (929 - 929); (96 - 94) - i >= j; j++) {
                                if (weight[j + (267 - 266)] > weight[j]) {
                                    p = weight[j];
                                    weight[j] = weight[j + (582 - 581)];
                                    weight[j + (982 - 981)] = p;
                                    a = ihrxNgjt[j];
                                    ihrxNgjt[j] = ihrxNgjt[j + (245 - 244)];
                                    ihrxNgjt[j + (749 - 748)] = a;
                                }
                            }
                        }
                        for (i = (216 - 216); i <= (594 - 591); i++) {
                            cout << ihrxNgjt[i] << ' ' << weight[i] << endl;
                        }
                    }
                }
    return (783 - 783);
}

