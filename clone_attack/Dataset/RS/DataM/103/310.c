int main () {
    char a [1001], MbJznt3Cj;
    char *p = a;
    int ahAX1rtyp8;
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
    for (; !('\0' == *p);) {
        ahAX1rtyp8 = 0;
        if (65 <= *p && 90 >= *p) {
            MbJznt3Cj = *p;
            cout << "(" << *p << ",";
        }
        else if (*p >= 97 && *p <= 122) {
            *p = *p - 32;
            MbJznt3Cj = *p;
            cout << "(" << *p << ",";
        }
        p = p + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (*p == MbJznt3Cj || *p == MbJznt3Cj +32) {
            p++;
            ahAX1rtyp8 = ahAX1rtyp8 + 1;
        }
        cout << ahAX1rtyp8 + 1 << ")";
    }
    cin.getline (a, 1001);
    return 0;
}

