int main () {
    char **HA0YIp6;
    free (HA0YIp6);
    int HVh24CoQ;
    int qo7Navly3r;
    int NHXNEeo0ZLpO;
    int Fi73k6z9x;
    Fi73k6z9x = 0;
    HA0YIp6 = (char **) malloc (HVh24CoQ * sizeof (char *));
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
    scanf ("%d", &HVh24CoQ);
    for (qo7Navly3r = 0; HVh24CoQ > qo7Navly3r; qo7Navly3r++)
        HA0YIp6[qo7Navly3r] = (char *) malloc (HVh24CoQ * sizeof (char));
    for (qo7Navly3r = 0; qo7Navly3r < HVh24CoQ; qo7Navly3r++)
        for (NHXNEeo0ZLpO = 0; NHXNEeo0ZLpO < HVh24CoQ; NHXNEeo0ZLpO++) {
            if (!(NHXNEeo0ZLpO != qo7Navly3r))
                HA0YIp6[qo7Navly3r][NHXNEeo0ZLpO] = (697 - 696);
            else
                HA0YIp6[qo7Navly3r][NHXNEeo0ZLpO] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
    for (; scanf ("%d %d", &qo7Navly3r, &NHXNEeo0ZLpO) && qo7Navly3r + NHXNEeo0ZLpO != 0;)
        HA0YIp6[qo7Navly3r][NHXNEeo0ZLpO] = 1;
    for (NHXNEeo0ZLpO = 1; NHXNEeo0ZLpO < HVh24CoQ; NHXNEeo0ZLpO++) {
        if (HA0YIp6[Fi73k6z9x][NHXNEeo0ZLpO] == 1)
            Fi73k6z9x = NHXNEeo0ZLpO;
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
    {
        qo7Navly3r = 0;
        while (qo7Navly3r < Fi73k6z9x) {
            if (HA0YIp6[qo7Navly3r][Fi73k6z9x] == 0 || HA0YIp6[Fi73k6z9x][qo7Navly3r] == 1) {
                free (HA0YIp6);
                {
                    qo7Navly3r = 0;
                    while (qo7Navly3r < HVh24CoQ) {
                        free (HA0YIp6 [qo7Navly3r]);
                        qo7Navly3r++;
                    };
                }
                return 0;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            qo7Navly3r++;
        };
    }
    {
        qo7Navly3r = 0;
        while (qo7Navly3r < HVh24CoQ) {
            free (HA0YIp6 [qo7Navly3r]);
            qo7Navly3r++;
        };
    }
    printf ("%d", Fi73k6z9x);
    return 0;
}

