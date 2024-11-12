int main () {
    int num1 [(111 - 10)], num2 [(703 - 602)], result [101];
    char str1 [(1034 - 933)], str2 [(705 - 604)], kongge [(426 - 325)];
    int len1;
    int len2;
    int i;
    int j;
    int n;
    cin >> n;
    cin.get ();
    {
        i = 1;
        while (n >= i) {
            memset (str1, (911 - 911), 101);
            cin.getline (str1, 101);
            memset (str2, (999 - 999), 101);
            memset (num1, (630 - 630), 101);
            memset (num2, 0, 101);
            memset (result, 0, 101);
            len1 = strlen (str1);
            {
                j = 0;
                while (len1 > j) {
                    num1[j] = str1[j] - '0';
                    j++;
                };
            }
            cin.getline (str2, 101);
            len2 = strlen (str2);
            {
                j = 0;
                while (len2 > j) {
                    num2[len1 - 1 - j] = str2[len2 - 1 - j] - '0';
                    j++;
                };
            }
            {
                j = len1 - 1;
                while (len1 - len2 <= j) {
                    if (num1[j] >= num2[j])
                        num1[j] = num1[j] - num2[j];
                    else {
                        num1[j] = 10 + num1[j] - num2[j];
                        num1[j - 1] = num1[j - 1] - 1;
                    }
                    j--;
                };
            }
            j = 0;
            while (num1[j] == 0)
                j++;
            for (; j < len1; j++)
                cout << num1[j];
            cout << endl;
            cin.getline (kongge, 101);
            i++;
        };
    }
    return 0;
}

