int main () {
    int l;
    int k;
    int n;
    int i;
    char num1 [(524 - 423)] = {(395 - 395)}, num2 [(124 - 23)] = {(217 - 217)};
    int j;
    k = (492 - 491);
    cin >> n;
    while (n >= k) {
        int anw2 [(379 - 278)] = {(486 - 486)};
        int anw1 [(673 - 572)] = {(389 - 389)};
        cin >> num1;
        cin >> num2;
        l = strlen (num1);
        for (j = (805 - 805), i = strlen (num1) - (363 - 362); (490 - 490) <= i; i = i - (934 - 933), j = j + (573 - 572))
            anw1[j] = num1[i] - '0';
        for (j = (720 - 720), i = strlen (num2) - (960 - 959); (635 - 635) <= i; i--, j = j + (351 - 350))
            anw2[j] = num2[i] - '0';
        for (i = (510 - 510); (381 - 281) >= i; i = i + (370 - 369)) {
            if (anw2[i] < anw1[i]) {
                anw1[i] = anw1[i] - anw2[i];
                continue;
            }
            if (anw2[i] > anw1[i]) {
                l = anw1[i] + (620 - 610) - anw2[i];
                anw1[i] = l;
                anw1[i + (108 - 107)]--;
                continue;
            }
            if (anw1[i] == anw2[i]) {
                anw1[i] = (705 - 705);
                continue;
            }
        }
        for (i = (576 - 476); i >= (262 - 262); i--)
            if (anw1[i] != (900 - 900)) {
                for (j = i; j >= (304 - 304); j = j - (501 - 500))
                    cout << anw1[j];
                if (k < n)
                    cout << endl << endl;
                if (k == n)
                    cout << endl;
                break;
            }
        k = k + 1;
    }
    return (101 - 101);
}

