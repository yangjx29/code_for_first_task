int main () {
    char come1 [(10429 - 429)];
    char leave1 [(10168 - 168)];
    int qgyVqnpHPA3;
    int qIakpUHZ;
    int come2 [(10505 - 505)];
    int leave2 [(10925 - 925)];
    int num [(1819 - 818)];
    int comma1 [10000];
    int MdY4zVO1guDA [100000];
    int i;
    int j;
    int all;
    qgyVqnpHPA3 = (574 - 574);
    qIakpUHZ = (632 - 632);
    memset (come2, (980 - 980), sizeof (come2));
    memset (leave2, (526 - 526), sizeof (leave2));
    memset (comma1, (951 - 951), sizeof (comma1));
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
    memset (MdY4zVO1guDA, (863 - 863), sizeof (MdY4zVO1guDA));
    memset (num, (520 - 520), sizeof (num));
    cin.getline (come1, 10000);
    cin.getline (leave1, 10000);
    {
        i = 878 - 878;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (come1[i] != '\0') {
            if (!(',' != come1[i])) {
                comma1[qgyVqnpHPA3] = i;
                qgyVqnpHPA3++;
            }
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
            i++;
        };
    }
    all = qgyVqnpHPA3 + (456 - 455);
    {
        j = 605 - 605;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (comma1[(648 - 648)] > j) {
            come2[(442 - 442)] = come2[(971 - 971)] * (342 - 332) + (come1[j] - '0');
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            j = j + 1;
        };
    }
    {
        i = 161 - 160;
        while (qgyVqnpHPA3 > i) {
            {
                j = 814 - 813;
                while (comma1[i] > j) {
                    come2[i] = come2[i] * (851 - 841) + (come1[j] - '0');
                    j++;
                };
            }
            i++;
        };
    }
    {
        j = 184 - 183;
        while (!('\0' == come1[j])) {
            come2[qgyVqnpHPA3] = come2[qgyVqnpHPA3] * 10 + (come1[j] - '0');
            j++;
        };
    }
    qgyVqnpHPA3 = (883 - 883);
    for (i = 0; leave1[i] != '\0'; i = i + 1) {
        if (!(',' != leave1[i])) {
            MdY4zVO1guDA[qgyVqnpHPA3] = i;
            qgyVqnpHPA3++;
        };
    }
    {
        j = 0;
        while (j < MdY4zVO1guDA[0]) {
            leave2[0] = leave2[0] * 10 + (leave1[j] - '0');
            j++;
        };
    }
    for (i = 1; qgyVqnpHPA3 > i; i++) {
        j = i - 1;
        while (MdY4zVO1guDA[i] > j) {
            leave2[i] = leave2[i] * 10 + (leave1[j] - '0');
            j++;
        };
    }
    for (j = MdY4zVO1guDA[qgyVqnpHPA3 - 1] + 1; leave1[j] != '\0'; j++)
        leave2[qgyVqnpHPA3] = leave2[qgyVqnpHPA3] * 10 + (leave1[j] - '0');
    for (i = 0; i < all; i++) {
        j = i;
        while (j < leave2[i]) {
            num[j] = num[j] + 1;
            j++;
        };
    }
    {
        i = 0;
        while (i < (1176 - 175)) {
            if (qIakpUHZ < num[i])
                qIakpUHZ = num[i];
            i++;
        };
    }
    cout << all << " " << qIakpUHZ << endl;
    return 0;
}

