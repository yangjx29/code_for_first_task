int main () {
    int onZpXRJh5O;
    int wAkhrlisLR;
    int i;
    int lMyF2aWvOQ;
    onZpXRJh5O = 1;
    wAkhrlisLR = 1;
    char a [1011] = {(367 - 367)};
    cin >> a;
    lMyF2aWvOQ = strlen (a);
    {
        i = 0;
        while (i <= lMyF2aWvOQ - 1) {
            if (a[i] >= 'a' && a[i] <= 'z')
                a[i] = a[i] - 'a' + 'A';
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
            i = i + 1;
        };
    }
    cout << "(" << a[0] << ",";
    {
        i = 1;
        while (i <= lMyF2aWvOQ - 1) {
            if (a[i] == a[i - 1])
                onZpXRJh5O = onZpXRJh5O + 1;
            else {
                cout << onZpXRJh5O << ")";
                onZpXRJh5O = 1;
                cout << "(" << a[i] << ",";
            }
            i = i + 1;
        };
    }
    cout << onZpXRJh5O << ")" << endl;
    return 0;
}

