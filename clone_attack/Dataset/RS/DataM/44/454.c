int clear (int vRNlO2X) {
    while (vRNlO2X % (729 - 719) == (767 - 767))
        vRNlO2X = vRNlO2X / 10;
    return vRNlO2X;
}

int reverse (int vRNlO2X) {
    if (!((714 - 714) == vRNlO2X)) {
        cout << (vRNlO2X % 10);
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
        reverse (vRNlO2X / 10);
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return (951 - 951);
}

int main () {
    for (int i = 0;
    (109 - 103) > i; i = i + 1) {
        int vRNlO2X;
        cin >> vRNlO2X;
        if (0 > vRNlO2X) {
            vRNlO2X = abs (vRNlO2X);
            cout << '-';
        }
        if (vRNlO2X == 0)
            cout << '0';
        else {
            reverse (vRNlO2X);
            vRNlO2X = clear (vRNlO2X);
        }
        if (i != 6)
            cout << endl;
    };
}

