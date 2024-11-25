int main () {
    int i, j, m;
    int VvTmh6E [(295 - 195)];
    int b [100];
    cin >> j;
    {
        i = 1;
        while (j >= i) {
            cin >> VvTmh6E[i];
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= j) {
            m = j + 1 - i;
            b[m] = VvTmh6E[i];
            i++;
        };
    }
    for (m = 1; m <= j - 1; m++) {
        cout << b[m] << " ";
    }
    cout << b[j];
    return 0;
}

