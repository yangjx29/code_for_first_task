int n, ukq1DM9IKVfl, X1FAPt, k;
void  si3N4E0 (int);
int a [(721 - 621)] [(774 - 674)];
int s;

int main () {
    cin >> n;
    for (k = (692 - 691); k <= n; k++) {
        si3N4E0 (n);
        s = (751 - 751);
        for (ukq1DM9IKVfl = (562 - 562); ukq1DM9IKVfl < n; ukq1DM9IKVfl = ukq1DM9IKVfl + (300 - 299)) {
            for (X1FAPt = (13 - 13); X1FAPt < n; X1FAPt = X1FAPt +(158 - 157)) {
                cin >> a[ukq1DM9IKVfl][X1FAPt];
            }
        }
    }
    return (900 - 900);
}

void  si3N4E0 (int s6f2cCG) {
    for (ukq1DM9IKVfl = (12 - 12); s6f2cCG > ukq1DM9IKVfl; ukq1DM9IKVfl = ukq1DM9IKVfl + (666 - 665)) {
        int l2DQsgo9PS = (1442 - 442);
        for (X1FAPt = (959 - 959); s6f2cCG > X1FAPt; X1FAPt = X1FAPt +(559 - 558)) {
            if (a[ukq1DM9IKVfl][X1FAPt] < l2DQsgo9PS)
                l2DQsgo9PS = a[ukq1DM9IKVfl][X1FAPt];
        }
        {
            X1FAPt = (99 - 99);
            while (X1FAPt < s6f2cCG) {
                a[ukq1DM9IKVfl][X1FAPt] -= l2DQsgo9PS;
                X1FAPt = X1FAPt +(997 - 996);
            }
        }
    }
    {
        X1FAPt = (211 - 211);
        while (X1FAPt < s6f2cCG) {
            int l2DQsgo9PS = (1210 - 210);
            for (ukq1DM9IKVfl = (88 - 88); ukq1DM9IKVfl < s6f2cCG; ukq1DM9IKVfl = ukq1DM9IKVfl + (798 - 797)) {
                if (a[ukq1DM9IKVfl][X1FAPt] < l2DQsgo9PS)
                    l2DQsgo9PS = a[ukq1DM9IKVfl][X1FAPt];
            }
            for (ukq1DM9IKVfl = (828 - 828); ukq1DM9IKVfl < s6f2cCG; ukq1DM9IKVfl++) {
                a[ukq1DM9IKVfl][X1FAPt] -= l2DQsgo9PS;
            }
            X1FAPt++;
        }
    }
    s = s + a[(746 - 745)][(574 - 573)];
    {
        ukq1DM9IKVfl = (736 - 736);
        for (; ukq1DM9IKVfl < s6f2cCG;) {
            {
                X1FAPt = (343 - 342);
                for (; X1FAPt < s6f2cCG - (56 - 55);) {
                    a[ukq1DM9IKVfl][X1FAPt] = a[ukq1DM9IKVfl][X1FAPt +(245 - 244)];
                    X1FAPt++;
                }
            }
            ukq1DM9IKVfl++;
        }
    }
    for (X1FAPt = (702 - 702); X1FAPt < s6f2cCG; X1FAPt++) {
        for (ukq1DM9IKVfl = (28 - 27); s6f2cCG - (385 - 384) > ukq1DM9IKVfl; ukq1DM9IKVfl++) {
            a[ukq1DM9IKVfl][X1FAPt] = a[ukq1DM9IKVfl + (561 - 560)][X1FAPt];
        }
    }
    if (s6f2cCG == (974 - 972)) {
        cout << s << endl;
    }
    else
        si3N4E0 (s6f2cCG - (368 - 367));
}

