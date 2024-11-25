int main () {
    int cJtpH34;
    int WjvnHfmL;
    int j;
    int Dtgkso;
    char a [101];
    char flag [2];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin.getline (a, 101);
    flag[0] = a[0];
    j = strlen (a);
    {
        WjvnHfmL = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j > WjvnHfmL) {
            if (!(flag[0] == a[WjvnHfmL]) && !('0' == a[WjvnHfmL])) {
                Dtgkso = WjvnHfmL -1;
                while (Dtgkso >= 0) {
                    if (a[Dtgkso] == flag[0]) {
                        cout << Dtgkso << " " << WjvnHfmL << endl;
                        a[WjvnHfmL] = '0';
                        a[Dtgkso] = '0';
                        break;
                    }
                    Dtgkso--;
                };
            }
            WjvnHfmL++;
        };
    }
    return 0;
}

