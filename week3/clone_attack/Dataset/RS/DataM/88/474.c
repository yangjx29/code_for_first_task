int main () {
    char a [(224 - 193)];
    int i;
    int len;
    char *p = NULL;
    cin.getline (a, 31);
    len = strlen (a);
    {
        p = a;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a + len > p) {
            if (*p >= '0' && *p <= '9')
                cout << *p;
            else {
                if ('0' > *(p + 1) || *(p + 1) > '9') {
                }
                if (*(p + 1) >= '0' && *(p + 1) <= '9')
                    cout << endl;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            p++;
        };
    }
    return 0;
}

