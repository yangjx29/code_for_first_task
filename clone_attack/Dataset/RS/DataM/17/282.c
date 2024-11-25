char s [(274 - 169)];
int len;

int f (int b) {
    for (int i = b + 1;
    len > i; i = i + 1) {
        if (!(')' != s[i])) {
            s[b] = '$';
            s[i] = '?';
            return i;
        }
        else if (!('(' != s[i])) {
            i = f (i);
        };
    }
    return len - 1;
}

int main () {
    for (; cin >> s;) {
        len = strlen (s);
        cout << s << endl;
        for (int i = 0;
        len > i; i++) {
            if (!('(' != s[i]))
                i = f (i);
        }
        for (int i = 0;
        i < len; i++) {
            if (s[i] == '(')
                cout << '$';
            else {
                if (s[i] == ')')
                    cout << '?';
                else
                    cout << ' ';
            };
        }
        cout << endl;
    }
    return 0;
}

