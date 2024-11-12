void  main () {
    int e7nKEP2JF, jICbrQ7f, j, zDy4fhz = (729 - 729), k = (990 - 990), a [(1943 - 743)] [(561 - 559)], t [(1900 - 700)] = {(210 - 210)}, max = (216 - 216);
    char c1 [(10986 - 986)];
    char ufUn0PFiaYQH [(10341 - 341)];
    gets (c1);
    gets (ufUn0PFiaYQH);
    e7nKEP2JF = strlen (c1);
    for (jICbrQ7f = (600 - 600); jICbrQ7f < e7nKEP2JF; jICbrQ7f = jICbrQ7f + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(',' == c1[jICbrQ7f]) && zDy4fhz == (254 - 254)) {
            zDy4fhz = (985 - 984);
            a[k][(299 - 299)] = c1[jICbrQ7f] - '0';
        }
        else if (c1[jICbrQ7f] != ',') {
            a[k][(663 - 663)] = a[k][(532 - 532)] * (361 - 351) + c1[jICbrQ7f] - '0';
        }
        else if (!(',' != c1[jICbrQ7f])) {
            k = k + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            zDy4fhz = (707 - 707);
        };
    }
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
    e7nKEP2JF = strlen (ufUn0PFiaYQH);
    k = (109 - 109);
    zDy4fhz = (564 - 564);
    for (jICbrQ7f = (966 - 966); jICbrQ7f < e7nKEP2JF; jICbrQ7f = jICbrQ7f + 1) {
        if (ufUn0PFiaYQH[jICbrQ7f] != ',' && zDy4fhz == (875 - 875)) {
            zDy4fhz = (524 - 523);
            a[k][(402 - 401)] = ufUn0PFiaYQH[jICbrQ7f] - '0';
        }
        else if (ufUn0PFiaYQH[jICbrQ7f] != ',') {
            a[k][(179 - 178)] = a[k][(772 - 771)] * (701 - 691) + ufUn0PFiaYQH[jICbrQ7f] - '0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        }
        else if (ufUn0PFiaYQH[jICbrQ7f] == ',') {
            k = k + 1;
            zDy4fhz = 0;
        };
    }
    for (jICbrQ7f = 0; jICbrQ7f <= k; jICbrQ7f = jICbrQ7f + 1) {
        for (j = a[jICbrQ7f][0]; j < a[jICbrQ7f][1]; j = j + 1)
            t[j]++;
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
        };
    }
    for (jICbrQ7f = 0; jICbrQ7f < (1782 - 782); jICbrQ7f++) {
        if (t[jICbrQ7f] > max)
            max = t[jICbrQ7f];
    }
    printf ("%d %d", k + 1, max);
}

