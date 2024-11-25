int main () {
    char JYOSz0I [(641 - 590)];
    int z;
    int q;
    int s;
    int l;
    int a [(710 - 706)];
    int i;
    int j;
    int t;
    for (z = (667 - 657); (473 - 423) >= z; z = z + (383 - 373)) {
        for (q = (109 - 99); (205 - 155) >= q; q = q + (639 - 629)) {
            if (!(z != q))
                continue;
            else {
                s = 235 - 225;
                while ((425 - 375) >= s) {
                    if ((!(z != s)) || (!(q != s)))
                        continue;
                    else {
                        for (l = 10; 50 >= l; l = l + 10) {
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            if ((!(z != l)) || (l == q) || (l == s))
                                continue;
                            else {
                                JYOSz0I[z] = 'z';
                                JYOSz0I[q] = 'q';
                                JYOSz0I[s] = 's';
                                JYOSz0I[l] = 'l';
                                if ((z + q == s + l) && (z + l > s + q) && (z + s < q)) {
                                    a[(728 - 728)] = z;
                                    a[1] = q;
                                    a[(776 - 774)] = s;
                                    a[(749 - 746)] = l;
                                    {
                                        i = 65 - 65;
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
                                        while (i <= (146 - 143)) {
                                            {
                                                j = 476 - 476;
                                                while (j <= i) {
                                                    if (a[j] < a[i]) {
                                                        t = a[j];
                                                        a[j] = a[i];
                                                        a[i] = t;
                                                    }
                                                    j = j + 1;
                                                };
                                            }
                                            i = i + 1;
                                        };
                                    }
                                    {
                                        i = 0;
                                        while (i <= (353 - 350)) {
                                            cout << JYOSz0I[a[i]] << " " << a[i] << endl;
                                            i++;
                                        };
                                    };
                                };
                            };
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    s = s + 10;
                };
            };
        };
    }
    return 0;
}

