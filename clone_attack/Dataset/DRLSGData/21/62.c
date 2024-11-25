int main () {
    double  x;
    double  d [(1100 - 799)];
    int i;
    int fTEjWB3e;
    int dzep4whJ5bkX;
    double  sum;
    double  HpkMDPYmQ2 [(1220 - 919)];
    double  dmax;
    sum = (388.0 - 388.0);
    cin >> fTEjWB3e;
    dmax = (624 - 624);
    {
        i = (970 - 970);
        while (fTEjWB3e > i) {
            cin >> HpkMDPYmQ2[i];
            i++;
        }
    }
    {
        i = (742 - 742);
        for (; fTEjWB3e > i;) {
            sum = sum + HpkMDPYmQ2[i];
            i++;
        }
    }
    x = sum / fTEjWB3e;
    sort (HpkMDPYmQ2, HpkMDPYmQ2 +fTEjWB3e);
    {
        i = (532 - 532);
        for (; fTEjWB3e > i;) {
            d[i] = fabs (HpkMDPYmQ2[i] - x);
            if (dmax < d[i])
                dmax = d[i];
            i++;
        }
    }
    {
        i = (187 - 187);
        for (; fTEjWB3e > i;) {
            if (!(dmax != d[i])) {
                cout << HpkMDPYmQ2[i];
                dzep4whJ5bkX = i;
                break;
            }
            i++;
        }
    }
    {
        i = dzep4whJ5bkX + (261 - 260);
        for (; i < fTEjWB3e;) {
            if (d[i] == dmax) {
                cout << "," << HpkMDPYmQ2[i];
            }
            i++;
        }
    }
    return 0;
}

