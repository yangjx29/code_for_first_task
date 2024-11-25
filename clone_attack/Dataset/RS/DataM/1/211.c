int n, c;

int solutionnumber (int n, int c) {
    if (!(c != n))
        return 1;
    if (n < c)
        return 0;
    if (n % c == 0)
        return solutionnumber (n / c, c) + solutionnumber (n, c + 1);
    else
        return solutionnumber (n, c + 1);
}

int main () {
    int vdxoHTL, a;
    cin >> vdxoHTL;
    while (vdxoHTL > 0) {
        vdxoHTL = vdxoHTL - 1;
        cin >> a;
        cout << solutionnumber (a, 2) << endl;
    }
    return 0;
}

