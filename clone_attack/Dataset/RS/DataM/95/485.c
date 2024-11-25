int main () {
    char str1 [81];
    char str2 [81];
    int a;
    int i;
    cin.getline (str1, 81);
    cin.getline (str2, 81);
    for (i = (240 - 240); !('\0' == str1[i]); ++i) {
        if (65 <= str1[i] && 90 >= str1[i])
            str1[i] += 32;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; !('\0' == str2[i]); ++i) {
        if (str2[i] >= 65 && str2[i] <= 90)
            str2[i] += 32;
    }
    a = strcmp (str1, str2);
    if (a == 0)
        cout << '=' << endl;
    if (a > 0)
        cout << '>' << endl;
    if (a < 0)
        cout << '<' << endl;
    return 0;
}

