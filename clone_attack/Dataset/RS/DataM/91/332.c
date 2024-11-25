int main () {
    char str [(770 - 669)];
    char str1 [(354 - 253)];
    char *p = &str[1];
    char *q = str1;
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
    for (; *p != '\0';) {
        *q = *p + *(p - 1);
        p++;
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
    cin.getline (str, (451 - 350));
    *q = str[0] + *(p - 1);
    *(q + 1) = '\0';
    cout << str1 << endl;
    return 0;
}

