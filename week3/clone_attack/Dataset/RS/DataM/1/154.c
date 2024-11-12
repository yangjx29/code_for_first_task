int faHcGMTJn = 1, k = 0;

int count (int uesSbKMZ) {
    for (int i = 2;
    sqrt (uesSbKMZ) >= i; i = i + 1) {
        if (uesSbKMZ % i == 0 && i >= k) {
            k = i;
            faHcGMTJn++;
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
            count (uesSbKMZ / i);
            k = 0;
        };
    }
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
    return (faHcGMTJn);
}

int main () {
    int i, uesSbKMZ, a [100];
    cin >> uesSbKMZ;
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < uesSbKMZ) {
            cin >> a[i];
            i = i + 1;
        };
    }
    for (i = 0; i < uesSbKMZ; i++) {
        cout << count (a[i]) << endl;
        k = 0;
        faHcGMTJn = 1;
    }
    return 0;
}

