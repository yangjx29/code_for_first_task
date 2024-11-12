int main () {
    char c = getchar ();
    int n = 0, num = 0, i = 0;
    char a [10000] = {'\0'}, *p = a;
    for (; c != '\n';) {
        num++;
        *p++ = c;
        c = getchar ();
    }
    p = a + 80;
    while (*p != '\0') {
        for (; *p != ' ' && p < a + num - 1;) {
            p = p - 1;
        }
        *p = '\n';
        p = p + 81;
    }
    p = a + num - 1;
    for (; *p == ' ';) {
        *p = '\0';
        p = p - 1;
    }
    for (p = a; *p != '\0'; p = p + 1)
        cout << *p;
    cin >> n;
    cin.get ();
    return 0;
}

