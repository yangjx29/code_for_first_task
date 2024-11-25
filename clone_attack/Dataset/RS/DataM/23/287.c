int main () {
    char TXIzU38GgO [200];
    char *a [30];
    int i, k;
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
        while (i < 30) {
            a[i] = NULL;
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
    i = 1;
    cin.getline (TXIzU38GgO, (390 - 280));
    a[0] = strtok (TXIzU38GgO, " ");
    while ((a[i] = strtok (NULL, " ")) != NULL) {
        i++;
    }
    {
        k = i - 1;
        while (k > 0) {
            cout << a[k] << ' ';
            k--;
        };
    }
    cout << a[0];
    return 0;
}

