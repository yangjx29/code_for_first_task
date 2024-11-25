int main () {
    char *p;
    char *q;
    int len, count = 0;
    char a [101];
    cin.getline (a, 101);
    len = strlen (a);
    {
        q = a;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p = a;
        while (a + len > p) {
            if ((!(' ' == *p)) || ((!(' ' != *p)) && (*(p + 1) != ' '))) {
                *(q++) = *p;
                count = count + 1;
            }
            p++;
        };
    }
    for (q = a; q < a + count; q++)
        cout << *q;
    return 0;
}

