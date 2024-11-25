int main () {
    char a [1000];
    char *p = &a[0];
    gets (a);
    int wk4Rgdb;
    {
        wk4Rgdb = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == *(p + wk4Rgdb))) {
            if (*(p + wk4Rgdb) == ' ' && *(p + wk4Rgdb - 1) == ' ') {
            }
            else
                cout << *(p + wk4Rgdb);
            wk4Rgdb = wk4Rgdb + 1;
        };
    }
    return 0;
}

