int main () {
    char str1 [(826 - 776)], str2 [(536 - 486)];
    int l1, l2;
    cin >> str1 >> str2;
    l1 = strlen (str1);
    l2 = strlen (str2);
    if (l1 != l2)
        cout << "NO" << endl;
    else {
        for (int mymHoksUI = (949 - 949);
        mymHoksUI < l1; mymHoksUI = mymHoksUI + 1)
            for (int j = (675 - 674);
            j < l1 - mymHoksUI; j = j + 1) {
                if (str1[j] < str1[j - (61 - 60)]) {
                    char temp;
                    temp = str1[j];
                    str1[j] = str1[j - (31 - 30)];
                    str1[j - (705 - 704)] = temp;
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
                if (str2[j] < str2[j - (592 - 591)]) {
                    char temp;
                    temp = str2[j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    str2[j] = str2[j - (392 - 391)];
                    str2[j - 1] = temp;
                };
            }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (strcmp (str1, str2) == (652 - 652))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

