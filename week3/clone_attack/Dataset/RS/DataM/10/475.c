int main () {
    int hight [10000];
    int num [10000];
    int qyc3O1o0gHl = 1;
    int qtc6wPkZ0j, j, k;
    int gf9EKulmY2L3 = 0;
    cin >> k;
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
        qtc6wPkZ0j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (qtc6wPkZ0j < k) {
            cin >> hight[qtc6wPkZ0j];
            num[qtc6wPkZ0j] = 0;
            qtc6wPkZ0j++;
        };
    }
    num[0] = 1;
    for (qtc6wPkZ0j = 1; qtc6wPkZ0j < k; qtc6wPkZ0j++) {
        gf9EKulmY2L3 = 1;
        {
            j = 0;
            while (qtc6wPkZ0j > j) {
                if (hight[j] >= hight[qtc6wPkZ0j] && num[j] + 1 > gf9EKulmY2L3)
                    gf9EKulmY2L3 = num[j] + 1;
                j++;
            };
        }
        num[qtc6wPkZ0j] = gf9EKulmY2L3;
        if (num[qtc6wPkZ0j] > qyc3O1o0gHl)
            qyc3O1o0gHl = num[qtc6wPkZ0j];
    }
    cout << qyc3O1o0gHl << endl;
    return 0;
}

