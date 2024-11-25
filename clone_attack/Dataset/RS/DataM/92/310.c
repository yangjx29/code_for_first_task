int main () {
    int i;
    int j;
    int al;
    int ar;
    int H4xlAkfDBh;
    int br;
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
    int n;
    int a [1000];
    int b [1000];
    for (; cin >> n;) {
        int total;
        total = 0;
        if (n == 0)
            break;
        al = H4xlAkfDBh = 0;
        for (i = 0; i < n; i = i + 1)
            cin >> a[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
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
            while (i < n) {
                cin >> b[i];
                i++;
            };
        }
        sort (a, &a[n]);
        sort (b, &b[n]);
        ar = br = n - 1;
        while (al <= ar) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (a[al] > b[H4xlAkfDBh]) {
                total = total + 200;
                al = al + 1;
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
                H4xlAkfDBh = H4xlAkfDBh +1;
            }
            else if (a[ar] > b[br]) {
                ar = ar - 1;
                total += 200;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                br--;
            }
            else {
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
                if (a[al] < b[br]) {
                    br--;
                    al = al + 1;
                    total = total - 200;
                }
                else {
                    br--;
                    al = al + 1;
                };
            };
        }
        cout << total << endl;
    }
    return 0;
}

