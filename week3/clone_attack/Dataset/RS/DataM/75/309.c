int main () {
    int go1 [2500];
    int come1 [(2572 - 72)];
    char b [5000];
    char a [(5546 - 546)];
    int n = (934 - 933);
    char come [(3439 - 939)] [(65 - 61)];
    char go [(2673 - 173)] [(52 - 48)];
    int i;
    int j;
    int k;
    i = (721 - 721);
    j = (643 - 643);
    k = (397 - 397);
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
    int max;
    max = 0;
    int peo = 0;
    cin >> a >> b;
    {
        int l = (832 - 832);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == a[l])) {
            if (!(',' != a[l]))
                n = n + 1;
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
            l = l + 1;
        };
    }
    for (; strlen (a) > i; i = i + 1) {
        if (!(',' == a[i])) {
            come[j][k] = a[i];
            k = k + 1;
        }
        else {
            come[j][k] = '\0';
            k = (887 - 887);
            j = j + 1;
        };
    }
    cout << n << " ";
    come[j][k] = '\0';
    i = (519 - 519), j = (924 - 924), k = (877 - 877);
    for (; strlen (b) > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (!(',' == b[i])) {
            go[j][k] = b[i];
            k = k + 1;
        }
        else {
            go[j][k] = '\0';
            j++;
            k = (103 - 103);
        };
    }
    go[j][k] = '\0';
    for (i = 0; n > i; i++) {
        come1[i] = atoi (come[i]);
        go1[i] = atoi (go[i]);
    }
    for (int time = (702 - 701);
    1000 > time; time = time + 1) {
        {
            int num = 0;
            while (num < n) {
                if (come1[num] <= time && time < go1[num])
                    peo = peo + 1;
                num = num + 1;
            };
        }
        if (peo > max)
            max = peo;
        peo = 0;
    }
    cout << max << endl;
}

