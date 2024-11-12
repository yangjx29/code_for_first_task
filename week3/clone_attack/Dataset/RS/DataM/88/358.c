int main () {
    int i, j, k, len;
    char a [31], *q;
    cin.getline (a, 31);
    len = strlen (a);
    q = a;
    k = (525 - 525);
    for (j = 0; j < len; j = j + 1) {
        if ((*q >= '0') && (*q <= '9')) {
            cout << *q;
            k = 0;
        }
        else if (k == 0) {
            cout << endl;
            k = 1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        q++;
    }
    return 0;
}

