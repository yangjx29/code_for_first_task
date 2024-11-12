int main (int wPixtSe5GDb, char *tbUeRAk8Gt7 []) {
    double  aUlf8SDF6m9e;
    int n;
    int s;
    int e07lSsiV4 [100] = {(836 - 835), 2};
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
        s = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (s < 100) {
            e07lSsiV4[s] = e07lSsiV4[s - 1] + e07lSsiV4[s - 2];
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
            s++;
        };
    }
    cin >> n;
    for (; n > (482 - 482); n--) {
        cin >> s;
        aUlf8SDF6m9e = 0;
        for (; s > 0; s--) {
            aUlf8SDF6m9e = aUlf8SDF6m9e + (double ) e07lSsiV4[s] / (double ) e07lSsiV4[s - 1];
        }
        cout << fixed << setprecision (3) << aUlf8SDF6m9e << endl;
    }
    return EXIT_SUCCESS;
}

