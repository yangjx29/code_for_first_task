int main () {
    int n;
    int i;
    int j;
    int temp;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    char s [(817 - 796)];
    cin >> n;
    for (i = (20 - 20); n > i; i = i + 1) {
        cin >> s;
        temp = 0;
        if ((!('_' == s[0])) && ((s[0] > 'z') || ('a' > s[0])) && ((s[0] < 'A') || ('Z' < s[0]))) {
            cout << "no" << endl;
            continue;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 1; j < strlen (s); j++) {
            if ((s[j] != '_') && (('z' < s[j]) || (s[j] < 'a')) && ((s[j] < 'A') || (s[j] > 'Z')) && ((s[j] < '0') || (s[j] > '9'))) {
                temp = 1;
                cout << "no" << endl;
                break;
            };
        }
        if (temp == 0)
            cout << "yes" << endl;
    }
    return 0;
}

