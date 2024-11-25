int MHfogjwnNBl (int uytJFen, char I5TZq3loHG) {
    char a;
    int b;
    cin.get (a);
    if (a != I5TZq3loHG)
        return uytJFen;
    else {
        b = MHfogjwnNBl (uytJFen + 1, I5TZq3loHG);
        cout << uytJFen << ' ' << b << endl;
        return MHfogjwnNBl (b + 1, I5TZq3loHG);
    };
}

int main () {
    int uytJFen;
    uytJFen = 0;
    int b;
    char I5TZq3loHG;
    cin >> I5TZq3loHG;
    b = MHfogjwnNBl (uytJFen + 1, I5TZq3loHG);
    cout << uytJFen << ' ' << b;
    return 0;
}

