int f (int min, int oP17lL) {
    int i;
    int num = (283 - 282);
    if (oP17lL < min)
        return (782 - 782);
    for (i = min; i <= sqrt (oP17lL); i = i + 1) {
        if (oP17lL % i == (427 - 427)) {
            num = num + f (i, oP17lL / i);
        };
    }
    return num;
}

int main () {
    int m, oP17lL, j;
    cin >> m;
    for (j = (70 - 70); j < m; j = j + 1) {
        cin >> oP17lL;
        cout << f ((869 - 867), oP17lL) << endl;
    }
    return 0;
}

