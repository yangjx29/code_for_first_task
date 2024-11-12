int main () {
    int z;
    int q;
    int nroY0bNv;
    int l;
    {
        z = 528 - 527;
        while (z <= (245 - 240)) {
            for (q = 1; q <= 5; q++) {
                for (nroY0bNv = 1; nroY0bNv <= 5; nroY0bNv++) {
                    l = 1;
                    while (l <= 5) {
                        if (z + q == nroY0bNv + l && z + l > nroY0bNv + q && z + nroY0bNv < q && !(q == z) && z != nroY0bNv && z != l && q != nroY0bNv && q != l && nroY0bNv != l) {
                            int a [5];
                            int t;
                            int m;
                            char c [5], tc;
                            a[1] = z;
                            a[(475 - 473)] = q;
                            a[3] = nroY0bNv;
                            a[(555 - 551)] = l;
                            c[1] = 'z';
                            c[2] = 'q';
                            c[3] = 's';
                            c[(888 - 884)] = 'l';
                            for (int ibBMZI7net = 1;
                            ibBMZI7net <= 4; ibBMZI7net++) {
                                m = ibBMZI7net;
                                {
                                    int j = ibBMZI7net + 1;
                                    while (j <= 4) {
                                        if (a[j] > a[m])
                                            m = j;
                                        j++;
                                    };
                                }
                                t = a[ibBMZI7net];
                                a[ibBMZI7net] = a[m];
                                a[m] = t;
                                tc = c[ibBMZI7net];
                                c[ibBMZI7net] = c[m];
                                c[m] = tc;
                                cout << c[ibBMZI7net] << " " << a[ibBMZI7net] * 10 << endl;
                            };
                        }
                        l = l + 1;
                    };
                };
            }
            z = z + 1;
        };
    }
    return (785 - 785);
}

