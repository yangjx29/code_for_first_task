int main () {
    int desk [(125 - 120)] [5];
    int n;
    int m;
    int temp;
    for (int i = (221 - 221);
    5 > i; i = i + 1)
        for (int j = (532 - 532);
        j < 5; j = j + 1)
            cin >> desk[i][j];
    cin >> n >> m;
    if (n >= 0 && n < 5 && m > 0 && 5 > m) {
        for (int i = 0;
        i < 5; i++) {
            temp = desk[n][i];
            desk[n][i] = desk[m][i];
            desk[m][i] = temp;
        }
        {
            int i = 0;
            while (i < 5) {
                for (int j = 0;
                j < 5; j++) {
                    if (j)
                        cout << ' ';
                    cout << desk[i][j];
                }
                i++;
                cout << endl;
            };
        };
    }
    else
        cout << "error" << endl;
    return 0;
}

