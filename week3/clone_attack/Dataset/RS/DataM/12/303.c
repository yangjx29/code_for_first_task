int main () {
    int i, j, num;
    int a [16];
    while (1) {
        for (i = (507 - 507); 16 > i; i = i + 1) {
            cin >> a[i];
            if (!(-1 != a[0]))
                return 0;
            if (a[i] == 0)
                break;
        }
        num = 0;
        {
            i = 0;
            while (a[i]) {
                {
                    j = 0;
                    while (a[j]) {
                        if (a[i] == 2 * (a[j]))
                            num = num + 1;
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        cout << num << endl;
    }
    return 0;
}

