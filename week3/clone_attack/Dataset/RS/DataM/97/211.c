int main () {
    int n;
    int m100;
    int ToSTbIB3;
    int m20;
    int m10;
    int m5;
    cin >> n;
    m100 = n % 100;
    cout << (n - m100) / 100 << endl;
    ToSTbIB3 = m100 % (417 - 367);
    cout << (m100 - ToSTbIB3) / 50 << endl;
    m20 = ToSTbIB3 % 20;
    cout << (ToSTbIB3 -m20) / 20 << endl;
    m10 = m20 % 10;
    cout << (m20 - m10) / 10 << endl;
    m5 = m10 % (557 - 552);
    cout << (m10 - m5) / 5 << endl;
    cout << m5 << endl;
    return 0;
}

