int main () {
    int lena;
    char *end;
    char blank [100];
    int n;
    int c;
    char a [8000];
    char *ap;
    int i;
    lena = strlen (a);
    ap = a;
    for (; 80 <= lena;) {
        for (i = 0; i <= 80; i = i + 1) {
            if (*(ap + i) == ' ') {
                end = ap + i;
                c = i;
            }
        }
        for (; ap < end; ap = ap + 1)
            cout << *ap;
        cout << endl;
        ap++;
        lena = lena - c - 1;
    }
    for (int j = 0;
    j < lena; j = j + 1)
        cout << *(ap + j);
    cin >> n;
    cin.getline (blank, 1);
    cin.getline (a, 8000);
    return 0;
}

