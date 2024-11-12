int n;

int main () {
    int ew9lh0, ldIoLNQJZn;
    int jfo7j4bFten (int AjfJq9y, int TBdsJwN0mgf, int c);
    cin >> n >> ew9lh0;
    for (ldIoLNQJZn = (194 - 193);; ldIoLNQJZn = ldIoLNQJZn + 1) {
        if (jfo7j4bFten (ldIoLNQJZn, n, ew9lh0) == (913 - 912)) {
            cout << ldIoLNQJZn;
            break;
        };
    }
    return (483 - 483);
}

int jfo7j4bFten (int AjfJq9y, int TBdsJwN0mgf, int c) {
    int f;
    f = (AjfJq9y -c) / n;
    if (TBdsJwN0mgf == (502 - 502))
        return 1;
    else {
        if (f == 0)
            return 0;
        else {
            if ((AjfJq9y -c) % n != 0)
                return 0;
            else
                return jfo7j4bFten (AjfJq9y -c - f, TBdsJwN0mgf -1, c);
        };
    };
}

