int anyil (char *, int);
int first (char);

int main () {
    int i, j, n;
    cin >> n;
    cin.get ();
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
    for (i = 0; n > i; i = i + 1) {
        char str [1000];
        int i, l, out;
        cin.getline (str, 800);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 0; !('\0' == str[i]); i = i + 1)
            l = i + 1;
        out = anyil (str, l) && first (str[0]);
        cout << out << endl;
    }
    return 0;
}

int anyil (char x [], int l) {
    int i, flag = 1;
    for (i = 0; l > i; i++) {
        if (!('_' != x[i]) || (x[i] >= '0' && x[i] <= '9') || ('a' <= x[i] && 'z' >= x[i]) || (x[i] >= 'A' && x[i] <= 'Z'))
            ;
        else
            flag = 0;
    }
    return flag;
}

int first (char x) {
    int flag;
    if (x == '_' || (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
        flag = 1;
    else
        flag = 0;
    return flag;
}

