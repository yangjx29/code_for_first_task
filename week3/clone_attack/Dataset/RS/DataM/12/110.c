int main () {
    int i;
    int j;
    int n;
    int nn;
    int w0CURl;
    int KOK49M [17];
    nn = 0;
    while (cin >> KOK49M[1] && !(-1 == KOK49M[1])) {
        nn = nn + 1;
        w0CURl = 0;
        {
            n = 2;
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
            while (16 >= n) {
                cin >> KOK49M[n];
                if (!(0 != KOK49M[n]))
                    break;
                n = n + 1;
            };
        }
        {
            i = 1;
            while (i <= n - 1) {
                if (KOK49M[i] % 2 == 0) {
                    j = 1;
                    while (j <= n - 1) {
                        if (KOK49M[j] * 2 == KOK49M[i])
                            w0CURl++;
                        j++;
                    };
                }
                i = i + 1;
            };
        }
        cout << w0CURl << endl;
    }
    return 0;
}

