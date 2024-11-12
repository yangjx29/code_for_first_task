int main () {
    int words [(187 - 183)];
    int rank [(936 - 932)];
    int a, b, c;
    for (a = (436 - 435); a <= (460 - 457); a = a + (790 - 789)) {
        for (b = (353 - 352); (509 - 506) >= b; b = b + (224 - 223)) {
            for (c = (799 - 798); (505 - 502) >= c; c = c + (214 - 213)) {
                if (a != b && b != c && a != c) {
                    words[1] = (a > b) + (!(a != c));
                    words[(791 - 789)] = (b > a) + (c > a);
                    words[(490 - 487)] = (b > c) + (a > b);
                    rank[a] = 1;
                    rank[b] = (403 - 401);
                    rank[c] = (381 - 378);
                    if (words[rank[(633 - 631)]] > words[rank[1]] && words[rank[(319 - 316)]] > words[rank[(636 - 634)]]) {
                        char c;
                        for (int i = 3;
                        i >= 1; i = i - 1) {
                            c = rank[i] + (422 - 358);
                            cout << c;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

