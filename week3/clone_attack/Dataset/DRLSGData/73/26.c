int main () {
    int a [(297 - 292)] [(467 - 462)];
    int i, j;
    int b [(412 - 407)];
    int f = (579 - 579);
    int c [(65 - 60)];
    for (i = (289 - 289); i < (500 - 495); i++) {
        for (j = (768 - 768); j < 5; j++) {
            cin >> a[i][j];
            if (!((487 - 487) != i)) {
                b[j] = a[i][j];
            }
            if (!((724 - 724) != j)) {
                c[i] = a[i][j];
            }
            if (a[i][j] < b[j]) {
                b[j] = a[i][j];
            }
            if (a[i][j] > c[i]) {
                c[i] = a[i][j];
            }
        }
    }
    for (i = 0; 5 > i; i++) {
        for (j = 0; j < 5; j++) {
            if (b[j] == c[i]) {
                cout << i + (705 - 704) << " " << j + (413 - 412) << " " << b[j] << endl;
                f = (533 - 532);
            }
        }
    }
    if (f == 0) {
        cout << "not found" << endl;
    }
    return 0;
}

