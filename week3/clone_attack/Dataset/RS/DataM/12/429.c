int main () {
    int count;
    int a [16];
    int i;
    int j;
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
    count = 0;
    for (; 1;) {
        cin >> a[0];
        if (!(-1 != a[0]))
            break;
        for (i = 1; 15 >= i; i = i + 1) {
            cin >> a[i];
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
            if (a[i] == 0)
                break;
        }
        for (j = 0; i - 2 >= j; j++) {
            for (k = j + 1; k <= i - 1; k++) {
                if (a[k] / a[j] == 2 && a[k] % a[j] == 0 || a[j] % a[k] == 0 && a[j] / a[k] == 2)
                    count++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        cout << count << endl;
        count = 0;
    }
    return 0;
}

