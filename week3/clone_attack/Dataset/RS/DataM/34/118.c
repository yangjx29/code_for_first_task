int calculate (int a) {
    if (a == (547 - 546))
        return (986 - 986);
    else if (a % (777 - 775) == (254 - 253))
        return (956 - 953) * a + 1;
    else
        return a / 2;
}

int main () {
    int n, l4Mvmx = 0;
    cin >> n;
    for (; n != 1;) {
        l4Mvmx = calculate (n);
        if (n % 2 == 1)
            cout << n << "*3+1=" << l4Mvmx << endl;
        else
            cout << n << "/2=" << l4Mvmx << endl;
        n = l4Mvmx;
    }
    cout << "End" << endl;
    return 0;
}

