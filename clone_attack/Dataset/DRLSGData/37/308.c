int main () {
    int j;
    int q;
    int fei;
    int n;
    int i;
    int k;
    int x;
    char word [(100414 - 414)], b [(200 - 100)] [100], l [(383 - 382)];
    k = (556 - 556);
    i = (849 - 849);
    n = (420 - 420);
    cin >> n;
    j = (942 - 942);
    fei = (55 - 55);
    for (q = 0; n > q; q++) {
        cin >> word;
        x = strlen (word);
        for (j = 0; j < x; j++) {
            fei = 0;
            for (k = 0; x > k; k++) {
                if (!(word[k] != word[j])) {
                    fei++;
                }
            }
            if (fei == 1) {
                cout << word[j] << endl;
                break;
            }
        }
        if (fei != 1)
            cout << "no" << endl;
    }
    return 0;
}

