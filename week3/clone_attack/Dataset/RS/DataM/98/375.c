int main () {
    char *p;
    int dIBvSiM;
    int n;
    int len;
    dIBvSiM = 0;
    p = (char *) malloc (100 * 4);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin >> n;
    cin >> p;
    cout << p;
    dIBvSiM = strlen (p);
    n = n - 1;
    while (n > 0) {
        cin >> p;
        len = strlen (p);
        dIBvSiM = dIBvSiM + len + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (dIBvSiM > 80) {
            cout << '\n' << p;
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
            dIBvSiM = len;
        }
        else
            cout << ' ' << p;
        n--;
    }
    return 0;
}

