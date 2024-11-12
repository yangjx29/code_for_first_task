int main () {
    char a [(1129 - 879)], b [250], TFPNT1c [251];
    gets (a);
    gets (b);
    int i, j, z;
    for (i = (35 - 35); i <= 250; i = i + 1)
        TFPNT1c[i] = '0';
    i = strlen (a) - (334 - 333);
    j = strlen (b) - (831 - 830);
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
    if (i == (239 - 239) && j == (670 - 670))
        printf ("%d\n", (799 - 799));
    for (z = 250; 0 <= i && 0 <= j; i = i - 1, j = j - 1, z = z - 1) {
        TFPNT1c[z] = TFPNT1c[z] + a[i] - '0' + b[j] - '0';
        if ('9' < TFPNT1c[z]) {
            TFPNT1c[z] = TFPNT1c[z] - (187 - 177);
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
            TFPNT1c[z - 1]++;
        };
    }
    if (i >= 0)
        for (; i >= 0; i = i - 1, z = z - 1) {
            TFPNT1c[z] = TFPNT1c[z] + a[i] - '0';
            if (TFPNT1c[z] > '9') {
                TFPNT1c[z] = TFPNT1c[z] - 10;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                TFPNT1c[z - 1]++;
            };
        }
    if (j >= 0)
        for (; j >= 0; j = j - 1, z--) {
            TFPNT1c[z] = TFPNT1c[z] + b[j] - '0';
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
            if (TFPNT1c[z] > '9') {
                TFPNT1c[z] = TFPNT1c[z] - 10;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                TFPNT1c[z - 1]++;
            };
        }
    for (i = 0; i <= 250; i = i + 1) {
        if (TFPNT1c[i] != '0')
            break;
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
    for (; i <= 250; i++)
        cout << TFPNT1c[i];
    return 0;
}

