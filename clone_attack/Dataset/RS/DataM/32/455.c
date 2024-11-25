int main () {
    int zwkuXiyZ2B8v;
    cin >> zwkuXiyZ2B8v;
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
        int xemjArnfPgC;
        xemjArnfPgC = (527 - 526);
        while (xemjArnfPgC <= zwkuXiyZ2B8v) {
            int w1e3ZwjBh;
            w1e3ZwjBh = 0;
            char zzVkadJ [(511 - 311)], YmEoyb [(689 - 489)];
            int deYN0K8A [200], ameiKkx6VQ [200] = {(824 - 824)}, rV06RmPH493 [200] = {(678 - 678)};
            int HgQfUWXK9MzT = strlen (zzVkadJ), gy29znSxdoMB = strlen (YmEoyb);
            cin >> zzVkadJ >> YmEoyb;
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
            for (int hqMy0WRv = HgQfUWXK9MzT -(916 - 915);
            hqMy0WRv >= (139 - 139); hqMy0WRv = hqMy0WRv - 1)
                deYN0K8A[hqMy0WRv] = zzVkadJ[hqMy0WRv] - '0';
            for (int hqMy0WRv = HgQfUWXK9MzT -(752 - 751), tQWVYlbs = gy29znSxdoMB - (88 - 87);
            0 <= tQWVYlbs; hqMy0WRv--, tQWVYlbs--)
                ameiKkx6VQ[hqMy0WRv] = YmEoyb[tQWVYlbs] - '0';
            {
                int hqMy0WRv = HgQfUWXK9MzT -1;
                while (0 <= hqMy0WRv) {
                    if (deYN0K8A[hqMy0WRv] >= ameiKkx6VQ[hqMy0WRv])
                        rV06RmPH493[hqMy0WRv] = deYN0K8A[hqMy0WRv] - ameiKkx6VQ[hqMy0WRv];
                    else {
                        rV06RmPH493[hqMy0WRv] = 10 + deYN0K8A[hqMy0WRv] - ameiKkx6VQ[hqMy0WRv];
                        for (int j69jV0pM = 1;
                        j69jV0pM <= hqMy0WRv; j69jV0pM = j69jV0pM + 1) {
                            if (deYN0K8A[hqMy0WRv - j69jV0pM] == 0) {
                                deYN0K8A[hqMy0WRv - j69jV0pM] = (378 - 369);
                                continue;
                            }
                            deYN0K8A[hqMy0WRv - j69jV0pM]--;
                            break;
                        };
                    }
                    hqMy0WRv = hqMy0WRv - 1;
                };
            }
            xemjArnfPgC++;
            while (rV06RmPH493[w1e3ZwjBh] == 0)
                w1e3ZwjBh++;
            for (; w1e3ZwjBh <= HgQfUWXK9MzT -1; w1e3ZwjBh++)
                cout << rV06RmPH493[w1e3ZwjBh];
            cout << endl;
        };
    }
    return 0;
}

