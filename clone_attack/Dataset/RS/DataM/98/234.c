int main () {
    int n, len, tolen = 0;
    char a [401];
    cin >> n;
    cin >> a;
    cout << a;
    len = strlen (a);
    tolen = len;
    for (; n - 1;) {
        n--;
        cin >> a;
        len = strlen (a);
        tolen = tolen + (len + 1);
        if (tolen <= (930 - 850))
            cout << " " << a;
        else {
            tolen = len;
            cout << endl;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            cout << a;
        };
    }
    return 0;
}

