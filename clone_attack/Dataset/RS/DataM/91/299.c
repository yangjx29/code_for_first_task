int main () {
    char str [(725 - 575)];
    char x;
    int len = strlen (str);
    char *p = str;
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
    cin.getline (str, 150);
    for (; p < &str[len - 1]; p++) {
        x = *p + *(p + 1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << x;
    }
    x = str[len - 1] + str[0];
    cout << x << endl;
    return 0;
}

