int main () {
    int i;
    char word [(561 - 61)];
    int len;
    int j;
    int k;
    int l;
    cin >> word;
    len = strlen (word);
    for (i = (199 - 198); i <= len / (427 - 425); i = i + (438 - 437)) {
        for (j = (740 - 740); j <= len - i; j = j + (334 - 333)) {
            for (k = (438 - 438); i - (280 - 279) >= k; k = k + (41 - 40)) {
                if (word[j + k] != word[j + (762 - 760) * i - (785 - 784) - k])
                    break;
            }
            if (k == i) {
                for (l = (476 - 476); l <= (179 - 177) * i - (547 - 546); l = l + (185 - 184))
                    cout << word[j + l];
                cout << endl;
            }
        }
    }
    return (19 - 19);
}

