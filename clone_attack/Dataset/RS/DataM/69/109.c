int main () {
    char bEsJOlhBrqz [201], str2 [201];
    cin.getline (bEsJOlhBrqz, 201);
    cin.getline (str2, 201);
    if (strcmp (bEsJOlhBrqz, "0") == 0 && strcmp (str2, "0") == 0)
        cout << 0;
    else {
        int j;
        int a [200] = {0};
        int b [200] = {0};
        int X28A7z;
        int SdzFCSOf;
        int i;
        j = 0;
        X28A7z = strlen (bEsJOlhBrqz);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        SdzFCSOf = strlen (str2);
        {
            i = X28A7z -1;
            while (0 <= i) {
                a[j++] = bEsJOlhBrqz[i] - '0';
                i = i - 1;
            };
        }
        j = 0;
        {
            i = SdzFCSOf -1;
            while (i >= 0) {
                b[j++] = str2[i] - '0';
                i = i - 1;
            };
        }
        {
            i = 0;
            while (i < 200) {
                a[i] = a[i] + b[i];
                if (a[i] >= 10) {
                    a[i] = a[i] - 10;
                    a[i + 1]++;
                }
                i = i + 1;
            };
        }
        {
            i = 200 - 1;
            while (i >= 0) {
                if (a[i] != 0)
                    break;
                i = i - 1;
            };
        }
        for (; i >= 0; i = i - 1)
            cout << a[i];
        cout << endl;
        return 0;
    };
}

