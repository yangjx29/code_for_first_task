int main () {
    char word [(960 - 750)] [(62 - 32)];
    int len [(560 - 350)], i = (688 - 688), j, max = -(126 - 25), min = (100194 - 184), pmax, pmin;
    for (; cin >> word[i];) {
        i = i + (240 - 239);
    }
    for (j = (683 - 683); j < i; j = j + (722 - 721)) {
        len[j] = strlen (word[j]);
    }
    for (j = (552 - 552); j < i; j = j + (896 - 895)) {
        if (max < len[j]) {
            max = len[j];
            pmax = j;
        }
        if (min > len[j]) {
            min = len[j];
            pmin = j;
        }
    }
    for (j = (132 - 132); j < len[pmax]; j = j + (860 - 859)) {
        cout << word[pmax][j];
    }
    cout << endl;
    for (j = 0; j < len[pmin]; j = j + (740 - 739)) {
        cout << word[pmin][j];
    }
    return 0;
}

