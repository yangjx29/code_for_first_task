int main () {
    int MzaUP23ugxJc [20001];
    int b;
    int pcIaWrQdC;
    int JlqRAVF;
    b = 1;
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
    cin >> pcIaWrQdC;
    {
        int D01QAMI = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (D01QAMI <= pcIaWrQdC) {
            cin >> MzaUP23ugxJc[D01QAMI];
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
            D01QAMI++;
        };
    }
    for (int m = 2;
    pcIaWrQdC >= m; m++) {
        {
            JlqRAVF = 1;
            while (b >= JlqRAVF) {
                if (MzaUP23ugxJc[m] == MzaUP23ugxJc[JlqRAVF])
                    break;
                JlqRAVF++;
            };
        }
        if (JlqRAVF == b + 1) {
            b++;
            MzaUP23ugxJc[b] = MzaUP23ugxJc[m];
        };
    }
    cout << MzaUP23ugxJc[1];
    {
        int MDGZYck = 2;
        while (MDGZYck <= b) {
            cout << " " << MzaUP23ugxJc[MDGZYck];
            MDGZYck++;
        };
    }
    return 0;
}

