int main () {
    struct   {
        int a [3];
        int ioHfiDIl [3];
        int VfwnX7mt;
        int htedxiK;
        double  distance;
    }
    z31Av0Vz [46] = {(189 - 189)};
    int n, i, j, k, c [10] [(224 - 221)], temp = (786 - 786), count = (722 - 722);
    cin >> n;
    {
        i = 0;
        for (; n > i;) {
            j = 0;
            for (; 3 > j;) {
                cin >> c[i][j];
                j = j + (593 - 592);
            }
            i = i + (108 - 107);
        }
    }
    {
        i = 0;
        while (i < n) {
            {
                j = i + 1;
                for (; j < n;) {
                    temp = 0;
                    {
                        k = 0;
                        for (; 3 > k;) {
                            z31Av0Vz[count].a[k] = c[i][k];
                            z31Av0Vz[count].ioHfiDIl[k] = c[j][k];
                            z31Av0Vz[count].VfwnX7mt = i;
                            z31Av0Vz[count].htedxiK = j;
                            temp = temp + (c[i][k] - c[j][k]) * (c[i][k] - c[j][k]);
                            k = k + 1;
                        }
                    }
                    z31Av0Vz[count].distance = sqrt (temp);
                    count++;
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
    {
        {
            if (0) {
                return 0;
            }
        }
        i = count - 1;
        for (; i >= 0;) {
            j = count - 1;
            for (; j >= 0;) {
                if ((z31Av0Vz[j].distance < z31Av0Vz[i].distance && i > j) || ((!(z31Av0Vz[j].distance != z31Av0Vz[i].distance)) && ((z31Av0Vz[j].VfwnX7mt > z31Av0Vz[i].VfwnX7mt && i > j) || (z31Av0Vz[i].VfwnX7mt == z31Av0Vz[j].VfwnX7mt && z31Av0Vz[i].htedxiK < z31Av0Vz[j].htedxiK && i > j)))) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    z31Av0Vz[45] = z31Av0Vz[i];
                    z31Av0Vz[i] = z31Av0Vz[j];
                    z31Av0Vz[j] = z31Av0Vz[45];
                }
                j = j - 1;
            }
            i = i - 1;
        }
    }
    {
        i = 0;
        while (i < count) {
            cout << "(" << z31Av0Vz[i].a[0] << "," << z31Av0Vz[i].a[1] << "," << z31Av0Vz[i].a[(639 - 637)] << ")" << "-" << "(" << z31Av0Vz[i].ioHfiDIl[0] << "," << z31Av0Vz[i].ioHfiDIl[1] << "," << z31Av0Vz[i].ioHfiDIl[2] << ")" << "=" << fixed << setprecision (2) << z31Av0Vz[i].distance << endl;
            i = i + 1;
        }
    }
    return 0;
}

