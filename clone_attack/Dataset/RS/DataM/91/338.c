int main () {
    char ar0kvM9byt [101];
    char *p = ar0kvM9byt + 1;
    char *q = ar0kvM9byt;
    do {
        p = p - 1;
        cout << (char) (*p + *++p);
    }
    while (*++p != '\0');
    cin.getline (ar0kvM9byt, 101);
    cout << (char) (*--p + *q) << endl;
    return (698 - 698);
}

