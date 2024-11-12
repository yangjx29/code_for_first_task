int main () {
    char x1 [(10043 - 43)];
    char y1 [(10654 - 654)];
    int aMmkGOTjWQYv;
    int k;
    int max;
    int i;
    int A3NBlq;
    int flag [(1915 - 915)] = {(183 - 183)};
    aMmkGOTjWQYv = (129 - 129);
    k = (880 - 880);
    max = 1;
    int x [(1793 - 793)] = {(646 - 646)};
    int y [(1693 - 693)] = {(162 - 162)};
    gets (x1);
    gets (y1);
    char *px = x1, *py = y1;
    while (*px != '\0') {
        x[aMmkGOTjWQYv] = atof (px);
        aMmkGOTjWQYv++;
        px = px + 1;
        while (!(',' == *px) && *px != '\0')
            px++;
        px++;
    }
    {
        int s = (818 - 818);
        while (s < (10210 - 210)) {
            x1[s] = '\0';
            y1[s] = '\0';
            s++;
        };
    }
    while (*py != '\0') {
        y[k] = atof (py);
        k++;
        py = py + 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (!(',' == *py) && *py != '\0')
            py++;
        py++;
    }
    for (i = (862 - 862); i < aMmkGOTjWQYv; i = i + 1) {
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
        for (A3NBlq = x[i]; A3NBlq < y[i]; A3NBlq++) {
            flag[A3NBlq]++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    for (i = (388 - 388); i < 1000; i = i + 1) {
        if (flag[i] > max)
            max = flag[i];
    }
    cout << aMmkGOTjWQYv << " " << max << endl;
    return 0;
}

