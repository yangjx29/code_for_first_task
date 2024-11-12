char V16xiITKc (char c) {
    if ('z' >= c && 'a' <= c)
        return c + 'Z' - 'z';
    return c;
}

int main () {
    char *p = NULL;
    char c [1000] = {0};
    int PPvQD6JBaV8u;
    PPvQD6JBaV8u = 0;
    cin >> c;
    for (p = c; *p; p = p + 1) {
        if (p == c || (*p != *(p - (760 - 759)) && (*p != *(p - 1) + 'z' - 'Z') && (*p != *(p - 1) + 'Z' - 'z'))) {
            if (p != c)
                cout << PPvQD6JBaV8u << ')';
            PPvQD6JBaV8u = 1;
            cout << '(' << V16xiITKc (*p) << ',';
        }
        else
            PPvQD6JBaV8u = PPvQD6JBaV8u +1;
    }
    cout << PPvQD6JBaV8u << ')' << endl;
    return 0;
}

