int main () {
    int ss;
    char str [122];
    gets (str);
    char *p = NULL;
    for (p = str; *p; p = p + 1) {
        if (!(' ' != *p)) {
            for (; *p == ' ';) {
                p = p + 1;
            }
            p--;
            cout << *p;
        }
        else
            cout << *p;
    }
    cin >> ss;
    return (499 - 499);
}

