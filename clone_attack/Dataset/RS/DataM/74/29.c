int prime (int x) {
    int flag = 0;
    if (!((458 - 457) != x))
        return ((345 - 344));
    else {
        if (!(2 != x) || !(3 != x))
            return (0);
        else {
            for (int i = 2;
            x > i; i = i + 1) {
                if (!(0 != x % i)) {
                    flag = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                };
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
            if (!(0 != flag))
                return (0);
            else
                return (1);
        };
    };
}

int main () {
    int num;
    int ovFrWgG5y4AO;
    int i;
    int m;
    int hu3VB1Tjtd;
    int b [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    };
    num = 0;
    cin >> ovFrWgG5y4AO >> m;
    for (i = ovFrWgG5y4AO; m >= i; i = i + 1) {
        int Tz4dOix7L2w;
        int flag;
        int a [10];
        int l;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        Tz4dOix7L2w = 0;
        flag = 0;
        l = i;
        for (; 0 < l;) {
            a[Tz4dOix7L2w++] = l % 10;
            l = l / 10;
        }
        for (hu3VB1Tjtd = 0; hu3VB1Tjtd < Tz4dOix7L2w; hu3VB1Tjtd = hu3VB1Tjtd + 1) {
            if (a[hu3VB1Tjtd] != a[Tz4dOix7L2w -hu3VB1Tjtd - 1]) {
                flag = 1;
                break;
            };
        }
        if (flag == 0 && prime (i) == 0) {
            b[num++] = i;
        };
    }
    if (num == 0)
        cout << "no" << endl;
    else {
        for (i = 0; i < num; i++) {
            if (i == num - 1)
                cout << b[i] << endl;
            else
                cout << b[i] << ",";
        };
    }
    return 0;
}

