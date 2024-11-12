void  dgn31Fy (int n, char ZULgpO1 [], int e6lFRcJT []) {
    for (int i = 0;
    n > i; i = i + 1)
        e6lFRcJT[ZULgpO1[i]]++;
}

int main () {
    int c_a [300] = {0};
    int c_b [300] = {0};
    char ZULgpO1 [500], C0NFCDruqA1 [500];
    cin >> ZULgpO1 >> C0NFCDruqA1;
    if (!(strlen (C0NFCDruqA1) == strlen (ZULgpO1))) {
        cout << "NO" << endl;
        return 0;
    }
    dgn31Fy (strlen (ZULgpO1), ZULgpO1, c_a);
    dgn31Fy (strlen (C0NFCDruqA1), C0NFCDruqA1, c_b);
    for (int i = 0;
    300 > i; i = i + 1) {
        if (c_a[i] != c_b[i]) {
            cout << "NO" << endl;
            return 0;
        };
    }
    cout << "YES" << endl;
    return 0;
}

