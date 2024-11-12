int main () {
    char *p;
    char a [(961 - 861)];
    int i, j, k;
    cin.getline (a, 100);
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
    p = a;
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
        while (!('\0' == *(p + i))) {
            if (*(p + i) == ' ') {
                {
                    j = 669 - 668;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (1) {
                        if (*(p + j) == ' ') {
                            j = j - 1;
                            {
                                k = j;
                                while (*(p + k) != '\0') {
                                    *(p + k) = *(p + k + 1);
                                    k++;
                                };
                            };
                        }
                        else
                            break;
                        j = j + 1;
                    };
                }
                i = j;
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
            i++;
        };
    }
    cout << p << endl;
    return 0;
}

