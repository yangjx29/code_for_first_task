int main () {
    int n, k, i, b = 0, a, j, array [SIZE];
    cin >> n >> k;
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &array[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            a = k - array[i];
            {
                j = 1;
                while (j < n) {
                    if (a == array[j]) {
                        b = 1;
                        break;
                    }
                    else
                        continue;
                    j = j + 1;
                };
            }
            if (b == 1)
                break;
            i++;
        };
    }
    if (b == 1)
        ;
    else
        ;
    return 0;
}

