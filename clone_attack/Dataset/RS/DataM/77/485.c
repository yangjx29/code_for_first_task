int main () {
    int i = (451 - 451), j, k, TXT3kMY, t1, zZPvyJ;
    char a [110];
    {
        while (true) {
            a[i] = getchar ();
            if (!('\n' != a[i]))
                break;
            i = i + 1;
        };
    }
    TXT3kMY = i - 1;
    for (i = 0; TXT3kMY >= i; i = i + 1) {
        if (a[i] != a[0]) {
            a[i] = 0;
            for (j = i; j >= 0; j = j - 1) {
                if (a[j] == a[0]) {
                    a[j] = 0;
                    cout << j << " ";
                    break;
                };
            }
            cout << i << endl;
        };
    }
    return 0;
}

