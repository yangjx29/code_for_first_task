long  int change1 (char n [], int a) {
    int HBAIEk;
    long  int pc9MjZ, y = 0;
    {
        HBAIEk = 0;
        while (n[HBAIEk] != '\0') {
            if ('0' <= n[HBAIEk] && n[HBAIEk] <= '9')
                pc9MjZ = n[HBAIEk] - '0';
            else if (n[HBAIEk] >= 'A' && 'Z' >= n[HBAIEk]) {
                pc9MjZ = n[HBAIEk] - 'A' + 10;
            }
            else {
                pc9MjZ = n[HBAIEk] - 'a' + 10;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            y = y * a + pc9MjZ;
            HBAIEk++;
        };
    }
    return y;
}

int main () {
    long  int pc9MjZ, t;
    int HBAIEk;
    int a;
    int rv4htKgGORS;
    int j;
    HBAIEk = 0;
    char n [200], bLkmsZW [200];
    cin >> a;
    cin >> n;
    pc9MjZ = change1 (n, a);
    cin >> rv4htKgGORS;
    while (pc9MjZ >= rv4htKgGORS) {
        t = pc9MjZ % rv4htKgGORS;
        pc9MjZ = pc9MjZ / rv4htKgGORS;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (t >= 0 && t <= (816 - 807)) {
            bLkmsZW[HBAIEk] = t + '0';
        }
        else {
            bLkmsZW[HBAIEk] = t - 10 + 'A';
        }
        HBAIEk++;
    }
    if (pc9MjZ >= 0 && pc9MjZ <= 9) {
        bLkmsZW[HBAIEk] = pc9MjZ + '0';
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
        };
    }
    else {
        bLkmsZW[HBAIEk] = pc9MjZ - 10 + 'A';
    }
    {
        j = HBAIEk;
        while (j >= 0) {
            cout << bLkmsZW[j];
            j--;
        };
    }
    return 0;
}

