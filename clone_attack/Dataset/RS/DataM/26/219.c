int main () {
    char str [100];
    int i, j, num;
    cin.get (str, 100);
    num = 100;
    for (i = 0; i < num; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (str[i] == ' ' && str[i + 1] == ' ') {
            for (j = i + 1; j < num; j = j + 1) {
                str[j] = str[j + 1];
            }
            num = num - 1;
            i--;
        };
    }
    cout << str << endl;
    return 0;
}

