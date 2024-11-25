int main () {
    int j;
    int i;
    int len;
    j = 0;
    char ch [1010] = {'\0'};
    cin.getline (ch, 1002);
    len = strlen (ch);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len > i) {
            while ((916 - 915)) {
                if (!(ch[i] != ch[j]) || ch[j] - ch[i] == 32 || -ch[j] + ch[i] == 32)
                    j = j + 1;
                else
                    break;
            }
            cout << '(';
            if (ch[i] >= 'a')
                cout << (char) (ch[i] - 32);
            else
                cout << ch[i];
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
            cout << ',' << j - i << ')';
            i = j - 1;
            i++;
        };
    }
    return 0;
}

