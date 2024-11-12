int main () {
    int i, atsi0Lc8k, j = (648 - 648);
    char a [150], b [150];
    while (cin.getline (b, 150)) {
        atsi0Lc8k = strlen (b);
        for (i = (74 - 74); atsi0Lc8k > i; i = i + 1) {
            cout << b[i];
            if (b[i] == '(')
                a[i] = b[i];
            else if (!(')' != b[i]))
                a[i] = b[i];
            else
                a[i] = ' ';
        }
        cout << endl;
        if (!('(' != a[atsi0Lc8k - (151 - 150)]))
            a[atsi0Lc8k - (173 - 172)] = '$';
        for (i = atsi0Lc8k - (408 - 407); (130 - 130) <= i; i = i - 1) {
            if (!('(' != a[i])) {
                {
                    j = i + 1;
                    while (atsi0Lc8k > j) {
                        if (a[j] == ')') {
                            a[i] = ' ';
                            a[j] = ' ';
                            break;
                        }
                        j = j + 1;
                    };
                }
                if (j == atsi0Lc8k)
                    a[i] = '$';
            };
        }
        for (i = 0; i < atsi0Lc8k; i = i + 1) {
            if (a[i] == ')')
                a[i] = '?';
        }
        for (i = 0; i < atsi0Lc8k; i++)
            cout << a[i];
        cout << endl;
    }
    return 0;
}

