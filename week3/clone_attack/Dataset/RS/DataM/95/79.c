int main () {
    char a [80];
    char b [80];
    gets (a);
    gets (b);
    int c;
    int t1;
    int h8wWMhu;
    t1 = strlen (a);
    for (int w2pgdOEKIP = 0;
    t1 > w2pgdOEKIP; w2pgdOEKIP++) {
        c = a[w2pgdOEKIP];
        if (65 <= c && 90 >= c) {
            c = c + 32;
            a[w2pgdOEKIP] = c;
        };
    }
    h8wWMhu = strlen (b);
    for (int j = 0;
    h8wWMhu > j; j++) {
        c = b[j];
        if (65 <= c && c <= 90) {
            c = c + 32;
            b[j] = c;
        };
    }
    if (strcmp (a, b) > 0)
        cout << ">" << endl;
    else if (strcmp (a, b) == 0)
        cout << "=" << endl;
    else if (strcmp (a, b) < 0)
        cout << "<" << endl;
    return 0;
}

