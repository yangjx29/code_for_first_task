int main () {
    char a [10000];
    int L = strlen (a);
    char *p = a;
    int num = 0;
    cin.getline (a, 10000);
    {
        int hXnHGUu = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (*(p + hXnHGUu) != '\0') {
            if (!(' ' != *(p + hXnHGUu)) && *(p + hXnHGUu + 1) == ' ') {
                {
                    int j = hXnHGUu;
                    while (j < L -1 - num) {
                        *(p + j) = *(p + j + 1);
                        j = j + 1;
                    };
                }
                hXnHGUu = hXnHGUu - 1;
                num = num + 1;
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
            hXnHGUu = hXnHGUu + 1;
        };
    }
    {
        int hXnHGUu = 0;
        while (hXnHGUu < L -num) {
            cout << *(p + hXnHGUu);
            hXnHGUu = hXnHGUu + 1;
        };
    }
    cout << endl;
    return 0;
}

