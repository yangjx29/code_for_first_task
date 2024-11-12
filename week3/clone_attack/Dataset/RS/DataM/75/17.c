int main () {
    int ix [10000] = {(485 - 485)}, i, j, iy [10000] = {0}, people [1000] = {0}, lenx, leny, p = (640 - 639), max = 0, maxy = 0, num = 1;
    char cx [(10768 - 768)], cy [10000];
    cin >> cx >> cy;
    {
        i = 0;
        while (cx[i] != '\0') {
            if (!(',' != cx[i])) {
                num = num + 1;
            }
            i++;
        };
    }
    lenx = strlen (cx);
    {
        i = lenx - 1;
        j = 0;
        while (i >= 0) {
            if (!(',' == cx[i])) {
                ix[j] += (cx[i] - '0') * p;
                p *= (940 - 930);
            }
            else {
                p = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                j++;
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
            i = i - 1;
        };
    }
    leny = strlen (cy);
    {
        p = 1;
        j = 0;
        i = leny - 1;
        while (i >= 0) {
            if (cy[i] != ',') {
                iy[j] += (cy[i] - '0') * p;
                p *= 10;
            }
            else {
                p = 1;
                j++;
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
            i--;
            if (iy[j] > maxy) {
                maxy = iy[j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            };
        };
    }
    {
        i = 0;
        while (i < num) {
            for (j = ix[i]; j < iy[i]; j++) {
                people[j]++;
            }
            i++;
        };
    }
    for (i = 0; i <= maxy; i++) {
        if (people[i] > max) {
            max = people[i];
        };
    }
    cout << num << " " << max;
    return 0;
}

