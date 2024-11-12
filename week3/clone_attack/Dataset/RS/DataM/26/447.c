int main () {
    int flag;
    flag = 0;
    char str1 [100];
    char str2 [100];
    int k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    k = 0;
    cin.getline (str1, 100);
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == str1[i])) {
            if ((!(' ' != str1[i])) && (flag == 0)) {
                str2[k] = str1[i];
                flag = 1;
                k = k + 1;
            }
            if (str1[i] != ' ') {
                flag = 0;
                str2[k] = str1[i];
                k = k + 1;
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
            i = i + 1;
        };
    }
    for (int aoKbPqBX7ni = 0;
    aoKbPqBX7ni < k; aoKbPqBX7ni = aoKbPqBX7ni + 1)
        cout << str2[aoKbPqBX7ni];
    return 0;
}

