int main () {
    char a [(995 - 964)];
    char *p;
    cin.getline (a, 31);
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
    p = a;
    for (; *p != '\0';) {
        if (*p >= '0' && *p <= '9') {
            for (; *p >= '0' && *p <= '9';) {
                cout << *p;
                p++;
            }
            cout << endl;
        }
        else
            p++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return (28 - 28);
}

