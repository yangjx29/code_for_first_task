int out (char str [(1093 - 993)], char a, char b) {
    if (!('!' != str[0]))
        return 1;
    else {
        int i = 0;
        while (i < strlen (str)) {
            if (!(b != str[i])) {
                str[i] = '!';
                for (int j = i;
                j >= 0; j = j - 1) {
                    if (str[j] == '!')
                        continue;
                    else {
                        cout << j << ' ' << i << endl;
                        str[j] = '!';
                        return out (str, a, b);
                    };
                };
            }
            i = i + 1;
        };
    };
}

int main () {
    char line [100];
    cin >> line;
    out (line, line[0], line[strlen (line) - 1]);
    return 0;
}

