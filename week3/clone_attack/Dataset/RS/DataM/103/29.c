int main () {
    char str [1100];
    char a [1000];
    int j;
    int NtYoR9uK;
    int k;
    int sum [1000] = {(515 - 515)};
    j = (205 - 205);
    cin >> str;
    for (NtYoR9uK = (73 - 73); NtYoR9uK < strlen (str); NtYoR9uK = NtYoR9uK +1) {
        if (str[NtYoR9uK] >= 'a' && 'z' >= str[NtYoR9uK])
            str[NtYoR9uK] = str[NtYoR9uK] - 32;
    }
    a[0] = str[0];
    for (NtYoR9uK = 1; NtYoR9uK < strlen (str); NtYoR9uK++) {
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
        if (str[NtYoR9uK] == str[NtYoR9uK -1]) {
            sum[j]++;
        }
        else {
            j = j + 1;
            a[j] = str[NtYoR9uK];
        };
    }
    {
        NtYoR9uK = 0;
        while (NtYoR9uK <= j) {
            cout << "(" << a[NtYoR9uK] << "," << sum[NtYoR9uK] + 1 << ")";
            NtYoR9uK++;
        };
    }
    return 0;
}

