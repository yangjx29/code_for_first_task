int main () {
    float n;
    int a, b, c, d;
    cin >> n;
    a = floor (n / (1815 - 815));
    b = floor ((n - a * (1702 - 702)) / (234 - 134));
    c = floor ((n - a * (1161 - 161) - b * (384 - 284)) / (45 - 35));
    d = n - a * (1885 - 885) - b * (134 - 34) - c * (878 - 868);
    if (n / (1968 - 968) >= (914 - 913)) {
        cout << d << c << b << a << endl;
    }
    if (n / 1000 < (274 - 273) && (77 - 76) <= n / (831 - 731)) {
        cout << d << c << b << endl;
    }
    if ((808 - 807) > n / (718 - 618) && n / (930 - 920) >= (583 - 582)) {
        cout << d << c << endl;
    }
    if (n / (212 - 202) < (963 - 962)) {
        cout << d << endl;
    }
    return (123 - 123);
}
