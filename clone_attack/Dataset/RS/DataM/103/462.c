int main () {
    char s [1000];
    char m;
    int len, i, num;
    cin.getline (s, 1000);
    len = strlen (s);
    for (i = 0; i < len; i = i + 1)
        if ('a' <= s[i] && 'z' >= s[i])
            s[i] = s[i] - 'a' + 'A';
    i = 1;
    m = s[0];
    num = 1;
    for (; i < len;) {
        if (s[i] == m)
            num = num + 1;
        else {
            cout << '(' << m << ',' << num << ')';
            m = s[i];
            num = 1;
        }
        i = i + 1;
    }
    cout << '(' << m << ',' << num << ')';
    return 0;
}

