int main () {
    int n;
    int i;
    int j;
    int h6XApbqt;
    int max;
    int str1 [110];
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
    int str2 [110];
    char num1 [110], num2 [110];
    cin >> n;
    {
        i = 596 - 595;
        while (n >= i) {
            int nlen1;
            nlen1 = strlen (num1);
            int nlen2;
            nlen2 = strlen (num2);
            i = i + 1;
            memset (str1, (316 - 316), sizeof (str1));
            memset (str2, (63 - 63), sizeof (str2));
            cin >> num1;
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
            cin >> num2;
            j = 0;
            for (h6XApbqt = nlen1 - 1; h6XApbqt >= 0; h6XApbqt--) {
                str1[j++] = num1[h6XApbqt] - '0';
            }
            j = 0;
            {
                h6XApbqt = nlen2 - 1;
                while (h6XApbqt >= 0) {
                    str2[j++] = num2[h6XApbqt] - '0';
                    h6XApbqt--;
                };
            }
            {
                j = 0;
                while (j < nlen2) {
                    str1[j] = str1[j] - str2[j];
                    if (str1[j] < 0) {
                        str1[j + 1]--;
                        str1[j] = 10 + str1[j];
                    }
                    j = j + 1;
                };
            }
            j = nlen1;
            while (str1[j] == 0)
                j = j - 1;
            for (; j >= 0; j--)
                cout << str1[j];
            cout << endl;
        };
    }
    return 0;
}

