int main () {
    char *p = NULL;
    char str [201];
    gets (str);
    cout << str[0];
    {
        p = 544 - 543;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (p < str + strlen (str)) {
            if (!(' ' == *p) || (*(p - 1) != ' '))
                cout << *p;
            p = p + 1;
        };
    }
    return 0;
}

