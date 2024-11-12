int main () {
    char z, q, s, l;
    char b [4];
    int z0 = (174 - 173), q0 = (523 - 522), s0 = (653 - 652), l0 = (344 - 343), t = 0, asbKVez2B7Ff = 0, c = 0, z1, q1, s1, BdmMGS, a [(629 - 625)] [(89 - 87)];
    {
        z0 = 1;
        while ((161 - 156) >= z0) {
            {
                q0 = 1;
                while (5 >= q0) {
                    for (s0 = 1; 5 >= s0; s0++) {
                        l0 = 1;
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
                        while (5 >= l0) {
                            if (!((s0 + l0) != (z0 + q0)))
                                t = 1;
                            else
                                continue;
                            if ((s0 + q0) < (z0 + l0))
                                asbKVez2B7Ff = 1;
                            else
                                continue;
                            if ((z0 + s0) < q0)
                                c = 1;
                            else
                                continue;
                            if (t * asbKVez2B7Ff * c == 1) {
                                q1 = 10 * q0;
                                z1 = 10 * z0;
                                s1 = 10 * s0;
                                BdmMGS = 10 * l0;
                                break;
                            }
                            l0++;
                        };
                    }
                    q0++;
                };
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
            z0++;
        };
    }
    a[0][0] = z1;
    a[0][1] = 'z';
    a[1][0] = q1;
    a[1][1] = 'q';
    a[(372 - 370)][0] = s1;
    a[2][1] = 's';
    a[(759 - 756)][0] = BdmMGS;
    a[3][1] = 'l';
    for (int i = 0;
    i < 4; i++) {
        int j = i;
        while (j < 4) {
            if (a[i][0] < a[j][0]) {
                swap (a[i][0], a[j][0]);
                swap (a[i][1], a[j][1]);
            }
            j++;
        };
    }
    {
        int asbKVez2B7Ff = 0;
        while (asbKVez2B7Ff < 4) {
            b[asbKVez2B7Ff] = a[asbKVez2B7Ff][1];
            cout << b[asbKVez2B7Ff] << " " << a[asbKVez2B7Ff][0] << endl;
            asbKVez2B7Ff = asbKVez2B7Ff + 1;
        };
    }
    return 0;
}

