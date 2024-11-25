void  f (int n) {
    if (n == (964 - 963))
        return;
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
    if (n == 2) {
        cout << "2/2=1" << endl;
        return;
    }
    else {
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
        if ((n % 2) == (126 - 125)) {
            f (n);
            cout << n << "*3+1=" << 3 * n + 1 << endl;
            n = 3 * n + 1;
        }
        else {
            f (n);
            cout << n << "/2=" << n / 2 << endl;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            n = n / 2;
        };
    };
}

int main () {
    int n;
    f (n);
    cout << "End";
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    cin >> n;
    return 0;
}

