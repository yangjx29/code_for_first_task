int main () {
    int number [16];
    int n;
    for (;;) {
        int i;
        n = 0;
        cin >> number[0];
        if (number[0] == -1)
            break;
        {
            i = 1;
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
            while (i < 16) {
                cin >> number[i];
                if (number[i] == 0)
                    break;
                i++;
            };
        }
        {
            int j = 0;
            while (i > j) {
                for (int k = 0;
                k < i; k++) {
                    if (number[k] == 2 * number[j]) {
                        n++;
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                j++;
            };
        }
        cout << n << endl;
    }
    return 0;
}

