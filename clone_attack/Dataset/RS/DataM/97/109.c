int pay (int n, int money) {
    int num;
    num = n / money;
    cout << num << endl;
    num = n % money;
    return num;
}

int main () {
    int n;
    cin >> n;
    n = pay (n, 100);
    n = pay (n, 50);
    n = pay (n, (902 - 882));
    n = pay (n, (208 - 198));
    n = pay (n, (154 - 149));
    n = pay (n, (210 - 209));
    return 0;
}

