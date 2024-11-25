int main () {
    double  oa9bWyE;
    int sz [100];
    int ULisV9e5;
    int zdCRnc;
    int V7Sshp;
    int k;
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
    sz[0] = 1;
    sz[1] = (295 - 293);
    {
        zdCRnc = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (100 > zdCRnc) {
            sz[zdCRnc] = sz[zdCRnc - 1] + sz[zdCRnc - 2];
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
            zdCRnc = zdCRnc + 1;
        };
    }
    oa9bWyE = 0;
    scanf ("%d", &ULisV9e5);
    for (k = 0; ULisV9e5 > k; k++) {
        scanf ("%d", &V7Sshp);
        {
            zdCRnc = 0;
            while (V7Sshp > zdCRnc) {
                oa9bWyE = oa9bWyE + sz[zdCRnc + 1] * 1.00000 / sz[zdCRnc] * 1.0000;
                zdCRnc++;
            };
        }
        printf ("%.3lf\n", oa9bWyE);
        oa9bWyE = 0;
    }
    return 0;
}

