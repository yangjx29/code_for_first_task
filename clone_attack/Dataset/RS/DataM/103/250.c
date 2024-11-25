int main () {
    int count = (603 - 602);
    char str [1001];
    int length = strlen (str);
    cin >> str;
    for (int vSTDnqrdXuy = 1;
    vSTDnqrdXuy < length; vSTDnqrdXuy = vSTDnqrdXuy + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (str[vSTDnqrdXuy] == str[vSTDnqrdXuy - 1] || !(str[vSTDnqrdXuy - 1] - 'A' != str[vSTDnqrdXuy] - 'a') || !(str[vSTDnqrdXuy - 1] - 'a' != str[vSTDnqrdXuy] - 'A'))
            count++;
        else {
            if (str[vSTDnqrdXuy - 1] - 'A' >= 0 && str[vSTDnqrdXuy - 1] - 'A' < 26)
                cout << "(" << (char) str[vSTDnqrdXuy - 1];
            else
                cout << "(" << (char) (str[vSTDnqrdXuy - 1] - 'a' + 'A');
            cout << "," << count << ")";
            count = 1;
        };
    }
    if (str[length - 1] - 'A' >= 0 && str[length - 1] - 'A' < 26)
        cout << "(" << (char) str[length - 1];
    else
        cout << "(" << (char) (str[length - 1] - 'a' + 'A');
    cout << "," << count << ")";
    return 0;
}

