int main () {
    char str [100];
    char a;
    char b;
    int len, i, j;
    cin >> str;
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
    len = strlen (str);
    a = str[(586 - 586)];
    b = str[len - 1];
    for (i = (661 - 661); len > i; i++)
        for (j = i - 1; j >= (815 - 815); j--) {
            if (str[i] == b && str[j] == a) {
                cout << j << ' ' << i << endl;
                str[j] = b;
                break;
            };
        }
    return (688 - 688);
}

