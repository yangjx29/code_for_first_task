int main () {
    int len;
    char str [(1490 - 990)], parlindrome [500];
    cin >> str;
    len = strlen (str);
    for (int i = 2;
    i <= len; i = i + 1) {
        for (int j = 0;
        j <= len - i; j = j + 1) {
            int k;
            for (k = 0; i > k; k = k + 1) {
                if (str[j + k] == str[j + i - 1 - k]) {
                    parlindrome[k] = str[j + k];
                }
                else
                    break;
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
            parlindrome[k] = '\0';
            if (k == i)
                cout << parlindrome << endl;
        };
    }
    return 0;
}

