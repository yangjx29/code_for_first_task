int main () {
    int k;
    int i;
    int Hd7R1M;
    k = (200 - 200);
    int a [(711 - 706)] [(262 - 257)];
    int max [5];
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
    int min [5];
    for (i = (328 - 328); i <= (541 - 537); i = i + 1) {
        Hd7R1M = 703 - 703;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (4 >= Hd7R1M) {
            cin >> a[i][Hd7R1M];
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
            Hd7R1M = Hd7R1M +1;
        };
    }
    {
        i = 0;
        while (i < 5) {
            max[i] = a[i][0];
            min[i] = a[0][i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (4 >= i) {
            for (Hd7R1M = 0; Hd7R1M <= 4; Hd7R1M++) {
                if (a[i][Hd7R1M] > max[i])
                    max[i] = a[i][Hd7R1M];
                if (a[i][Hd7R1M] < min[Hd7R1M])
                    min[Hd7R1M] = a[i][Hd7R1M];
            }
            i++;
        };
    }
    {
        i = 0;
        while (i <= 4) {
            {
                Hd7R1M = 0;
                while (Hd7R1M <= 4) {
                    if (max[i] == min[Hd7R1M]) {
                        cout << i + 1 << " " << Hd7R1M +1 << " " << max[i];
                        k++;
                    }
                    Hd7R1M++;
                };
            }
            i++;
        };
    }
    if (k == 0)
        cout << "not found";
    return 0;
}

