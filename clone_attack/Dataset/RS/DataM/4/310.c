int main () {
    int a [100] [100];
    int rtB5p764fQ;
    int n;
    cin >> rtB5p764fQ >> n;
    for (int jIF0zH3tnqYo = 0;
    rtB5p764fQ > jIF0zH3tnqYo; jIF0zH3tnqYo = jIF0zH3tnqYo + 1) {
        int j = 0;
        while (n > j) {
            cin >> *(*(a + jIF0zH3tnqYo) + j);
            j++;
        };
    }
    for (int jIF0zH3tnqYo = 0;
    rtB5p764fQ + n - 1 > jIF0zH3tnqYo; jIF0zH3tnqYo++) {
        int j = n - 1;
        while (0 <= j) {
            if (rtB5p764fQ > jIF0zH3tnqYo - j && jIF0zH3tnqYo - j >= 0)
                cout << *(*(a + jIF0zH3tnqYo - j) + j) << endl;
            j = j - 1;
        };
    }
    return 0;
}

