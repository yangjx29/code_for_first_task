int main () {
    int i, j, k, x = (285 - 285), n, kcHTDXuVNB [20000];
    cin >> n;
    {
        i = 0;
        while (n > i) {
            cin >> kcHTDXuVNB[i];
            i = i + 1;
        };
    }
    for (i = 0; n > i; i = i + 1) {
        k = 0;
        {
            j = 0;
            while (i > j) {
                if (kcHTDXuVNB[i] == kcHTDXuVNB[j]) {
                    k++;
                }
                j = j + 1;
            };
        }
        if (k == 0) {
            x = x + 1;
            if (x == 1) {
                cout << kcHTDXuVNB[i];
            }
            else {
                cout << " " << kcHTDXuVNB[i];
            };
        };
    }
    return 0;
}

