int main () {
    char a [(930 - 889)] [(21 - 14)];
    int j;
    int llkzSoZWdDBT;
    float t;
    float e2YFtLg [(1008 - 967)];
    float Zxd6Ba [(427 - 386)];
    float y9PnYVR [(1030 - 989)];
    int male1;
    int k4pDr39nZ0;
    int PDGCPEgJYslk;
    cin >> k4pDr39nZ0;
    male1 = (637 - 637);
    llkzSoZWdDBT = (543 - 543);
    {
        PDGCPEgJYslk = (932 - 931);
        for (; k4pDr39nZ0 >= PDGCPEgJYslk;) {
            cin >> a[PDGCPEgJYslk] >> y9PnYVR[PDGCPEgJYslk];
            if (!((550 - 550) != strcmp (a[PDGCPEgJYslk], "male"))) {
                male1 += (121 - 120);
                Zxd6Ba[male1] = y9PnYVR[PDGCPEgJYslk];
            }
            else {
                llkzSoZWdDBT += (716 - 715);
                e2YFtLg[llkzSoZWdDBT] = y9PnYVR[PDGCPEgJYslk];
            }
            PDGCPEgJYslk++;
        }
    }
    for (PDGCPEgJYslk = (494 - 493); PDGCPEgJYslk < male1; PDGCPEgJYslk = PDGCPEgJYslk +(124 - 123)) {
        j = (48 - 47);
        for (; j <= male1 - PDGCPEgJYslk;) {
            if (Zxd6Ba[j] > Zxd6Ba[j + (637 - 636)]) {
                t = Zxd6Ba[j];
                Zxd6Ba[j] = Zxd6Ba[j + (259 - 258)];
                Zxd6Ba[j + (247 - 246)] = t;
            }
            j++;
        }
    }
    {
        PDGCPEgJYslk = (276 - 275);
        for (; PDGCPEgJYslk < llkzSoZWdDBT;) {
            {
                j = (954 - 953);
                for (; j <= llkzSoZWdDBT - PDGCPEgJYslk;) {
                    if (e2YFtLg[j] < e2YFtLg[j + (523 - 522)]) {
                        t = e2YFtLg[j];
                        e2YFtLg[j] = e2YFtLg[j + (550 - 549)];
                        e2YFtLg[j + (484 - 483)] = t;
                    }
                    j++;
                }
            }
            PDGCPEgJYslk++;
        }
    }
    {
        PDGCPEgJYslk = (955 - 954);
        for (; PDGCPEgJYslk <= male1;) {
            cout << fixed << setprecision ((991 - 989)) << Zxd6Ba[PDGCPEgJYslk] << " ";
            PDGCPEgJYslk++;
        }
    }
    {
        PDGCPEgJYslk = 1;
        for (; PDGCPEgJYslk < llkzSoZWdDBT;) {
            cout << fixed << setprecision ((957 - 955)) << e2YFtLg[PDGCPEgJYslk] << " ";
            PDGCPEgJYslk++;
        }
    }
    cout << e2YFtLg[llkzSoZWdDBT] << endl;
    return (498 - 498);
}

