int main () {
    int n;
    int i;
    int j;
    int k;
    char str1 [(709 - 458)], str2 [251];
    int save1 [252] = {(875 - 875)}, save2 [250] = {(582 - 582)};
    int len1;
    int len2;
    len1 = strlen (str1);
    len2 = strlen (str2);
    int max = (len1 > len2) ? len1 : len2;
    cin.getline (str1, 251);
    for (i = len1 - (306 - 305); (309 - 309) <= i; i--)
        save1[len1 - (62 - 61) - i] = str1[i] - '0';
    cin.getline (str2, 251);
    {
        i = len2 - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i >= 0) {
            save2[len2 - 1 - i] = str2[i] - '0';
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
            i--;
        };
    }
    {
        i = 0;
        while (i < max) {
            save1[i] = save1[i] + save2[i];
            if (save1[i] >= 10) {
                save1[i + 1] = save1[i + 1] + 1;
                save1[i] -= 10;
            }
            i++;
        };
    }
    {
        i = 250;
        while (i >= 0) {
            if (save1[i] != 0)
                break;
            i--;
        };
    }
    {
        j = i;
        while (j >= 0) {
            cout << save1[j];
            j--;
        };
    }
    if (i < 0)
        cout << 0 << endl;
    return 0;
}

