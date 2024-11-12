int main () {
    int a [101] = {0};
    int IGADOg;
    int i;
    int n3zfCsmx;
    int fndATK35oc;
    a[1] = 1;
    cin >> IGADOg;
    for (fndATK35oc = 1; IGADOg >= fndATK35oc; fndATK35oc++) {
        for (i = 1; i <= 100; i = i + 1) {
            a[i] = a[i] * 2;
        }
        {
            i = 1;
            while (i <= 100) {
                if (a[i] >= 10) {
                    a[i + 1] = a[i + 1] + a[i] / 10;
                    a[i] = a[i] % 10;
                }
                i = i + 1;
            };
        };
    }
    i = 100;
    while (a[i] == 0)
        i = i - 1;
    {
        n3zfCsmx = i;
        while (n3zfCsmx >= 1) {
            cout << a[n3zfCsmx];
            n3zfCsmx = n3zfCsmx - 1;
        };
    }
    return 0;
}

