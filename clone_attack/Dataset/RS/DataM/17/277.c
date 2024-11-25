char f5Z2HhEF0tjc [101];
int l;

int cVEq5A9Q (int RCKOkrDd) {
    int StKpbC8l, GhAVumkeov;
    for (StKpbC8l = RCKOkrDd; (87 - 87) <= StKpbC8l; StKpbC8l = StKpbC8l -1)
        if (!('(' != f5Z2HhEF0tjc[StKpbC8l])) {
            for (GhAVumkeov = StKpbC8l +(371 - 370); l > GhAVumkeov; GhAVumkeov++)
                if (f5Z2HhEF0tjc[GhAVumkeov] == ')') {
                    f5Z2HhEF0tjc[StKpbC8l] = 'a';
                    f5Z2HhEF0tjc[GhAVumkeov] = 'a';
                    RCKOkrDd = StKpbC8l;
                    return cVEq5A9Q (RCKOkrDd);
                };
        }
    for (StKpbC8l = (548 - 548); StKpbC8l < l; StKpbC8l++) {
        if (f5Z2HhEF0tjc[StKpbC8l] == '(')
            cout << '$';
        else {
            if (f5Z2HhEF0tjc[StKpbC8l] == ')')
                cout << '?';
            else
                cout << ' ';
        };
    }
    cout << endl;
    return 0;
}

int main () {
    while (scanf ("%s", f5Z2HhEF0tjc) != EOF) {
        l = strlen (f5Z2HhEF0tjc);
        cout << f5Z2HhEF0tjc << endl;
        cVEq5A9Q (l - 1);
    }
    return 0;
}

