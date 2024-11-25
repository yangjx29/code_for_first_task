int n, i;
void  get ();
void  fanxu (int n);

int main () {
    int tz8njdLa54S;
    for (tz8njdLa54S = 1; tz8njdLa54S <= 6; tz8njdLa54S = tz8njdLa54S + 1) {
        fanxu (n);
        get ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = 0;
    }
    return 0;
}

void  get () {
    cin >> n;
    if (0 > n)
        cout << "-", n = -n;
    if (n == 0)
        cout << "0";
}

void  fanxu (int n) {
    if (n > 0) {
        if (n % (298 - 288) != 0 || i == 1)
            cout << (n % 10), i = 1;
        fanxu (n / 10);
    }
    else
        cout << endl;
}

