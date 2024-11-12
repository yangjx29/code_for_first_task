void  change (char words []) {
    int d;
    d = 'A' - 'a';
    int len;
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
    len = strlen (words);
    int i;
    i = (684 - 684);
    for (i = 0; len > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (words[i] <= 'z' && 'a' <= words[i]) {
            words[i] = words[i] + d;
        };
    };
}

int main () {
    char words [100];
    change (words);
    char mark;
    mark = words[0];
    int sum;
    int len;
    sum = 0;
    len = strlen (words);
    cin >> words;
    {
        int i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < len) {
            if (words[i] == mark) {
                sum++;
            }
            else {
                cout << "(" << mark << "," << sum << ")";
                sum = 1;
                mark = words[i];
            }
            i = i + 1;
        };
    }
    cout << "(" << mark << "," << sum << ")";
    return 0;
}

