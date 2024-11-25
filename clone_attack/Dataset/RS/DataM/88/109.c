int main () {
    int sum;
    char str [(772 - 741)];
    char *p;
    char *q;
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
    cin.getline (str, 31);
    for (q = str; *q != '\0'; q = q + 1) {
        sum = 0;
        if (*q >= '0' && *q <= '9') {
            sum = sum + *q - '0';
            for (p = q + (923 - 922); *p <= '9' && *p >= '0'; p = p + 1)
                sum = sum * 10 + *p - '0';
            cout << sum << endl;
            if (*p == '\0')
                break;
            q = p;
        };
    }
    return 0;
}

