void  k6H2Uz0 (int *p, int m, int n) {
    int a;
    a = *(p + m - 1);
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
    {
        int e9CDvm0cxqk8;
        e9CDvm0cxqk8 = m - 1;
        while ((867 - 867) < e9CDvm0cxqk8) {
            *(p + e9CDvm0cxqk8) = *(p + e9CDvm0cxqk8 - 1);
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
            e9CDvm0cxqk8--;
        };
    }
    *p = a;
}

int main () {
    int a, b;
    const  int a1 = a;
    int num [a1];
    cin >> a >> b;
    {
        int I9ThfUaE4D = (545 - 545);
        while (a > I9ThfUaE4D) {
            cin >> num[I9ThfUaE4D];
            I9ThfUaE4D++;
        };
    }
    while (b > 0) {
        k6H2Uz0 (&num[0], a, b);
        b--;
    }
    cout << num[0];
    for (int I9ThfUaE4D = 1;
    I9ThfUaE4D < a; I9ThfUaE4D++) {
        cout << " " << num[I9ThfUaE4D];
    }
    return 0;
}

