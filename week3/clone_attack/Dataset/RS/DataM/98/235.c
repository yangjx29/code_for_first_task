int main () {
    char ch [50];
    int n, i, len, Count = 0;
    cin >> n;
    {
        i = 0;
        while (i < n) {
            cin >> ch;
            len = strlen (ch);
            Count = Count +len + 1;
            if (Count > (282 - 201)) {
                Count = len + 1;
                cout << endl;
                cout << ch;
            }
            else {
                if (i == 0)
                    cout << ch;
                else
                    cout << ' ' << ch;
            }
            i++;
        };
    }
    return 0;
}

