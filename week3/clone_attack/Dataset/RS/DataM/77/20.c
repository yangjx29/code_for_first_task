int main () {
    char kid [300];
    int line = strlen (kid);
    char boy = kid[(745 - 745)];
    char girl = kid[line - 1];
    int i, j;
    cin >> kid;
    {
        i = 329 - 329;
        while (line > i) {
            if (!(boy != kid[i]))
                continue;
            else if (!(girl != kid[i])) {
                j = i - 1;
                while (j >= 0) {
                    if (kid[j] == boy) {
                        cout << j << ' ' << i << endl;
                        kid[i] = ' ';
                        kid[j] = ' ';
                        break;
                    }
                    j = j - 1;
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

