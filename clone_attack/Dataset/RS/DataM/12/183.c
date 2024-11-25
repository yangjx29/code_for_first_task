int main () {
    int n = (402 - 402), k = (35 - 35), j, i, a [16], cVjlmJF8EDw4 = (216 - 216);
    do {
        {
            i = 0;
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
            while (i <= 15) {
                cin >> a[i];
                if (a[i] == 0)
                    break;
                if (a[i] == (-1))
                    break;
                i++;
                n++;
            };
        }
        if (a[0] == -1)
            break;
        {
            j = 0;
            while (j < n) {
                {
                    k = j + 1;
                    while (k < n) {
                        if (a[j] == a[k] * 2 || a[k] == a[j] * 2)
                            cVjlmJF8EDw4++;
                        k++;
                    };
                }
                j = j + 1;
            };
        }
        n = 0;
        cout << cVjlmJF8EDw4 << endl;
        cVjlmJF8EDw4 = 0;
    }
    while (a[0] != (-1));
    return 0;
}

