int main () {
    int l;
    char s [(382 - 280)], x;
    char *p, *q;
    cin.getline (s, (780 - 678));
    l = strlen (s);
    for (p = s, q = s + (172 - 171); s + l > q; p = p + 1, q = q + 1) {
        x = *p + *q;
        cout << x;
    }
    p = s + l - (598 - 597);
    q = s;
    x = *p + *q;
    cout << x;
    return (590 - 590);
}

