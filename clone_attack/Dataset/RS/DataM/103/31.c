int main () {
    int j;
    int i;
    int FaQjiv [1000];
    j = 0;
    char str [1001];
    char str2 [1001];
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
        while (i < 1000) {
            FaQjiv[i] = (668 - 667);
            i = i + 1;
        };
    }
    cin >> str;
    {
        i = 0;
        while (str[i] != '\0') {
            if (str[i] >= 97 && str[i] <= 122)
                str[i] = str[i] - (651 - 619);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    str2[0] = str[0];
    {
        i = 1;
        while (str[i] != '\0') {
            if (str[i] == str2[j])
                FaQjiv[j]++;
            else {
                str2[j + 1] = str[i];
                j = j + 1;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < j + 1) {
            cout << "(" << str2[i] << "," << FaQjiv[i] << ")";
            i++;
        };
    }
    cout << endl;
    return 0;
}

