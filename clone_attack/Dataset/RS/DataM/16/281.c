int main () {
    int JG4A1uqwOCh [(555 - 550)], n, i, k = (72 - 72);
    cin >> n;
    for (i = 0; i < 5; i++) {
        JG4A1uqwOCh[i] = n % 10;
        n = n / 10;
    }
    for (i = 4; i >= 0; i--)
        if (JG4A1uqwOCh[i] != 0) {
            k = i;
            break;
        }
    for (i = 0; i <= k; i++)
        cout << JG4A1uqwOCh[i];
    cout << endl;
    return 0;
}

