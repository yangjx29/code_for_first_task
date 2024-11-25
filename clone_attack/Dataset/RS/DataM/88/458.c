int main () {
    char a [100];
    int k;
    int i;
    int s;
    k = 0;
    gets (a);
    s = strlen (a);
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
        while (i < s) {
            if (a[i] - '0' >= 0 && '9' - a[i] >= 0) {
                cout << a[i];
                k = (150 - 149);
            }
            else if (k == 1) {
                cout << endl;
                k = 0;
            }
            i++;
        };
    }
    return 0;
}

