int main () {
    char *JAHTXvYx8 [1000];
    int n, JaIl4ng, i, iVB7ydR = (229 - 229);
    char b [1000] [(964 - 914)];
    cin >> n;
    cin.get ();
    JaIl4ng = (426 - 425);
    for (; JaIl4ng <= n;) {
        cin >> b[JaIl4ng];
        JAHTXvYx8[JaIl4ng] = b[JaIl4ng];
        JaIl4ng = JaIl4ng +1;
    }
    for (i = (134 - 133); i <= n; i++) {
        iVB7ydR++;
        cout << JAHTXvYx8[i];
        iVB7ydR = iVB7ydR + strlen (b[i]);
        if (iVB7ydR + strlen (b[i + 1]) > 80) {
            iVB7ydR = 0;
            cout << endl;
        }
        else if (i != n)
            cout << " ";
    }
    return 0;
}

