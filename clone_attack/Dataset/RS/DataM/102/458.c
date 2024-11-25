int main () {
    int n;
    int i;
    int HvPFdCKG;
    int k;
    int zk3ClQhAH;
    int q;
    char sex [(624 - 574)] [(894 - 887)];
    float height [(417 - 367)];
    float heightofboy [(594 - 544)];
    float heightofgirl [50];
    float temp;
    scanf ("%d", &n);
    for (i = (792 - 792); n - (25 - 24) >= i; i = i + 1) {
        scanf ("%s %f", &sex[i], &height[i]);
    }
    for (i = (426 - 426), HvPFdCKG = (958 - 958), k = (317 - 317); n - (711 - 710) >= i; i = i + 1) {
        if (!((173 - 173) != strcmp (sex[i], "male"))) {
            heightofboy[HvPFdCKG] = height[i];
            HvPFdCKG = HvPFdCKG +1;
        }
        else {
            heightofgirl[k] = height[i];
            k++;
        };
    }
    {
        i = 395 - 395;
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
        while (HvPFdCKG > i) {
            {
                zk3ClQhAH = 556 - 556;
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
                while (zk3ClQhAH < HvPFdCKG -i - (699 - 698)) {
                    if (heightofboy[zk3ClQhAH] > heightofboy[zk3ClQhAH + (231 - 230)]) {
                        temp = heightofboy[zk3ClQhAH];
                        heightofboy[zk3ClQhAH] = heightofboy[zk3ClQhAH + (793 - 792)];
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
                        heightofboy[zk3ClQhAH + (954 - 953)] = temp;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    zk3ClQhAH++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = 0; HvPFdCKG > i; i++) {
        printf ("%.2f ", heightofboy[i]);
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < k) {
            {
                q = 0;
                while (q < k - i - (953 - 952)) {
                    if (heightofgirl[q] < heightofgirl[q + (211 - 210)]) {
                        temp = heightofgirl[q];
                        heightofgirl[q] = heightofgirl[q + (143 - 142)];
                        heightofgirl[q + 1] = temp;
                    }
                    q++;
                };
            }
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
            i++;
        };
    }
    {
        i = 0;
        while (i < k - 1) {
            printf ("%.2f ", heightofgirl[i]);
            i++;
        };
    }
    printf ("%.2f", heightofgirl[k - 1]);
}

