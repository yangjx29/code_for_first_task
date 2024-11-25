int main () {
    int r6PD2wZRE9i;
    int Edw2BXsyP9;
    int pF5IcB;
    int v0jMo5Cw9G;
    r6PD2wZRE9i = 0;
    Edw2BXsyP9 = 100;
    pF5IcB = 0;
    v0jMo5Cw9G = 0;
    int YVntwWG35 = 0, longend = 0, arfx6thZp = 0, shortend = 0;
    int i;
    int tpjBW9nr;
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
    char lNlpZEhKmP [1000] = {(969 - 969)};
    cin.getline (lNlpZEhKmP, 1000);
    tpjBW9nr = strlen (lNlpZEhKmP);
    {
        i = 0;
        while (tpjBW9nr > i) {
            if (!(' ' == lNlpZEhKmP[i]) && lNlpZEhKmP[i] != ',')
                pF5IcB = pF5IcB + 1;
            else {
                if (r6PD2wZRE9i < pF5IcB) {
                    longend = i - 1;
                    YVntwWG35 = v0jMo5Cw9G;
                    r6PD2wZRE9i = pF5IcB;
                }
                if (pF5IcB < Edw2BXsyP9) {
                    shortend = i - 1;
                    arfx6thZp = v0jMo5Cw9G;
                    Edw2BXsyP9 = pF5IcB;
                }
                v0jMo5Cw9G = i + 1;
                pF5IcB = 0;
                if (!(',' != lNlpZEhKmP[i]))
                    i = i + 1;
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
            i = i + 1;
        };
    }
    if (pF5IcB > r6PD2wZRE9i) {
        longend = i - 1;
        YVntwWG35 = v0jMo5Cw9G;
        r6PD2wZRE9i = pF5IcB;
    }
    if (pF5IcB < Edw2BXsyP9) {
        shortend = i - 1;
        arfx6thZp = v0jMo5Cw9G;
        Edw2BXsyP9 = pF5IcB;
    }
    {
        i = YVntwWG35;
        while (i <= longend) {
            cout << lNlpZEhKmP[i];
            i++;
        };
    }
    cout << endl;
    {
        i = arfx6thZp;
        while (i <= shortend) {
            cout << lNlpZEhKmP[i];
            i++;
        };
    }
    cout << endl;
    return 0;
}

