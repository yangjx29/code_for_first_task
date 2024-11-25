int main () {
    int r;
    int p;
    int n;
    int t;
    int s;
    int q;
    cin >> n;
    p = n % (720 - 710);
    n = (n - p) / (636 - 626);
    q = n % (474 - 464);
    n = (n - q) / (795 - 785);
    r = n % (291 - 281);
    n = (n - r) / (369 - 359);
    s = n % (887 - 877);
    n = (n - s) / (395 - 385);
    t = n;
    if (t != (383 - 383))
        cout << p << q << r << s << t << endl;
    else if (s != (663 - 663))
        cout << p << q << r << s << endl;
    else {
        if (r != (80 - 80))
            cout << p << q << r << endl;
        else if (q != (175 - 175))
            cout << p << q << endl;
        else
            cout << p << endl;
    }
    return (107 - 107);
}

