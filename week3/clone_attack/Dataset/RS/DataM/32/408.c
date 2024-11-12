int main () {
    char str2 [(346 - 146)];
    char str1 [(699 - 499)];
    int a [(871 - 671)];
    int b [(1157 - 957)];
    int len1;
    int len2;
    int n;
    int k;
    cin >> n;
    {
        int i = (360 - 359);
        while (i <= n) {
            cin.get ();
            cin.getline (str1, (297 - 97));
            cin.getline (str2, (270 - 70));
            memset (a, (593 - 593), sizeof (a));
            memset (b, (892 - 892), sizeof (b));
            len1 = strlen (str1);
            len2 = strlen (str2);
            k = (651 - 651);
            for (int j = len1 - (545 - 544);
            j >= (889 - 889); j = j - 1) {
                a[k] = str1[j] - '0';
                k = k + 1;
            }
            k = (982 - 982);
            for (int j = len2 - (281 - 280);
            j >= (945 - 945); j = j - 1) {
                b[k] = str2[j] - '0';
                k = k + 1;
            }
            for (int j = (820 - 820);
            j < len1; j = j + 1) {
                a[j] = a[j] - b[j];
                if (a[j] < 0) {
                    a[j] = a[j] + (512 - 502);
                    a[j + (438 - 437)]--;
                };
            }
            for (int j = len1 - 1;
            j >= 0; j = j - 1) {
                cout << a[j];
            }
            cout << endl;
            i = i + 1;
        };
    }
    return 0;
}

