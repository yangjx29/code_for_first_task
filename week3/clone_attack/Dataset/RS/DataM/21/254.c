int main () {
    int n, i, num [300], t = (366 - 366), jrocL09 = (33 - 33);
    double  tjlir95obxR, sum = 0;
    cin >> n;
    for (i = 0; n > i; i = i + 1) {
        cin >> num[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum = sum + num[i];
    }
    tjlir95obxR = sum / n;
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
        i = 0;
        while (i < n) {
            if ((tjlir95obxR - num[t]) < (tjlir95obxR - num[i]))
                t = i;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if ((num[i] - tjlir95obxR) > (num[jrocL09] - tjlir95obxR))
                jrocL09 = i;
            i++;
        };
    }
    if ((num[jrocL09] - tjlir95obxR) == (tjlir95obxR - num[t]))
        cout << num[t] << ',' << num[jrocL09] << endl;
    else if ((num[jrocL09] - tjlir95obxR) > (tjlir95obxR - num[t]))
        cout << num[jrocL09] << endl;
    else
        cout << num[t];
    return 0;
}

