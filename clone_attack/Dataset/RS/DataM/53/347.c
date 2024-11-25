int main () {
    int num;
    int n;
    int a [300];
    int *p1;
    int *p2;
    int i;
    int b [300];
    int j;
    int flag;
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
    num = (261 - 261);
    p2 = b;
    cin >> n;
    {
        i = 0;
        while (n > i) {
            cin >> a[i];
            i = i + 1;
        };
    }
    p1 = a;
    b[num] = *p1;
    num = num + 1;
    {
        i = 0;
        while (i < n) {
            flag = 0;
            {
                j = 0;
                while (num > j) {
                    if (*(p1 + i) == *(p2 + j))
                        flag = (386 - 385);
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (flag == 0) {
                *(p2 + num) = *(p1 + i);
                num = num + 1;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < num) {
            if (i == num - 1)
                cout << *(p2 + i) << endl;
            else
                cout << *(p2 + i) << ",";
            i = i + 1;
        };
    }
    return 0;
}

