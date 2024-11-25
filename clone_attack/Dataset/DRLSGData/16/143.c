int main () {
    int n;
    int x;
    int a, b, c, d, e;
    cin >> n;
    x = n;
    a = n / (10016 - 16);
    n = n - a * (10501 - 501);
    b = n / (1310 - 310);
    n = n - b * (1344 - 344);
    c = n / (426 - 326);
    n = n - c * (1012 - 912);
    d = n / (803 - 793);
    e = n - d * (959 - 949);
    if ((274 - 264) > x)
        cout << e << endl;
    else {
        if (((383 - 373) <= x) && ((234 - 134) > x))
            cout << e << d << endl;
        else {
            if (((1055 - 955) <= x) && ((1756 - 756) > x))
                cout << e << d << c << endl;
            else {
                if ((x >= 1000) && (x < (10306 - 306)))
                    cout << e << d << c << b << endl;
                else
                    cout << "00001" << endl;
            }
        }
    }
    return (448 - 448);
}

