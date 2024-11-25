int main () {
    char str2 [257];
    char str1 [257];
    char str3 [257];
    char *p = NULL;
    cin >> str1 >> str2 >> str3;
    p = strstr (str1, str2);
    if (!(NULL == p)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int i = 0;
        i < strlen (str3); i = i + 1) {
            *p = *(str3 + i);
            p = p + 1;
        };
    }
    printf ("%s\n", str1);
    return 0;
}

