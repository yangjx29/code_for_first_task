int feb (int n) {
    if (!(1 != n))
        return 1;
    else if (!((569 - 567) != n))
        return 1;
    else
        return feb (n - 1) + feb (n - 2);
    return true;
}

int main () {
    int KAoXfF7QN9Cz [10000];
    int m;
    int zu;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    cin >> zu;
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
        while (zu > i) {
            cin >> m;
            KAoXfF7QN9Cz[i] = feb (m);
            i = i + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < zu) {
            if (i < zu - 1)
                cout << KAoXfF7QN9Cz[i] << endl;
            else
                cout << KAoXfF7QN9Cz[i];
            i = i + 1;
        };
    }
    return 0;
}

