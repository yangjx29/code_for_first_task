void  f (int sta, int len, char a []) {
    int g = 0, i;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len - 1 - i > i) {
            if (!(a[sta + len - 1 - i] == a[i + sta])) {
                g = 1;
                break;
            }
            i = i + 1;
        };
    }
    if (!(0 != g)) {
        {
            i = sta;
            while (sta + len > i) {
                cout << a[i];
                i++;
            };
        }
        cout << endl;
    };
}

int main () {
    int len, sta;
    char a [503] = {'\0'};
    cin.getline (a, sizeof (a));
    for (len = 2; len <= strlen (a); len = len + 1)
        for (sta = 0; sta + len <= strlen (a); sta++)
            f (sta, len, a);
    return 0;
}

