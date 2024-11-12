int main () {
    char ch [100];
    int len = (int) strlen (ch);
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
    cin >> ch;
    for (int i = 0;
    len > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (ch[i] == ')' || !('}' != ch[i]) || !(']' != ch[i]) || !('>' != ch[i])) {
            int j = i;
            while (ch[j] != '(' && ch[j] != '{' && ch[j] != '[' && ch[j] != '<')
                j = j - 1;
            cout << j << " " << i << endl;
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
            ch[i] = '%';
            ch[j] = '%';
        };
    }
    return 0;
}

