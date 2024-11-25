int main () {
    int cEKJSzMLGInQ, qamXkK1TL3, num1 = (165 - 165), aTy8X642 = 0, VskNYbAS, k2, kjW9FnEdB, b, tmp = 0, head = 0;
    char prwmQd [(834 - 583)];
    char SixkvB [251];
    char zbNkLBR2Vi4 [255];
    char x [251];
    char iBEDYn2 [251];
    gets (prwmQd);
    gets (SixkvB);
    {
        cEKJSzMLGInQ = 0;
        while (!('\0' == prwmQd[cEKJSzMLGInQ]) && ('0' <= prwmQd[cEKJSzMLGInQ] && '9' >= prwmQd[cEKJSzMLGInQ])) {
            num1 = num1 + 1;
            cEKJSzMLGInQ++;
        };
    }
    prwmQd[cEKJSzMLGInQ] = '\0';
    {
        qamXkK1TL3 = 0;
        while (!('\0' == SixkvB[qamXkK1TL3]) && ('0' <= SixkvB[qamXkK1TL3] && '9' >= SixkvB[qamXkK1TL3])) {
            aTy8X642++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            qamXkK1TL3 = qamXkK1TL3 + 1;
        };
    }
    SixkvB[qamXkK1TL3] = '\0';
    if (aTy8X642 <= num1) {
        strcpy (x, prwmQd);
        strcpy (iBEDYn2, SixkvB);
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
        VskNYbAS = num1;
        k2 = aTy8X642;
    }
    else {
        strcpy (x, SixkvB);
        strcpy (SixkvB, prwmQd);
        num1 = strlen (x);
        aTy8X642 = strlen (SixkvB);
        VskNYbAS = num1;
        k2 = aTy8X642;
    }
    {
        {
            qamXkK1TL3 = num1;
            while (qamXkK1TL3 > num1 - aTy8X642 - 1) {
                SixkvB[qamXkK1TL3] = SixkvB[k2];
                k2 = k2 - 1;
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
                qamXkK1TL3 = qamXkK1TL3 - 1;
            };
        }
        {
            qamXkK1TL3 = num1 - aTy8X642 - 1;
            while (qamXkK1TL3 >= 0) {
                SixkvB[qamXkK1TL3] = '0';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                qamXkK1TL3 = qamXkK1TL3 - 1;
            };
        }
        {
            qamXkK1TL3 = num1 - 1;
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
            while (qamXkK1TL3 >= 0) {
                if (x[qamXkK1TL3] - '0' + SixkvB[qamXkK1TL3] - '0' + tmp > 9) {
                    zbNkLBR2Vi4[qamXkK1TL3] = '0' + (x[qamXkK1TL3] - '0' + SixkvB[qamXkK1TL3] - '0' + tmp) % 10;
                    tmp = 1;
                }
                else {
                    zbNkLBR2Vi4[qamXkK1TL3] = '0' + (x[qamXkK1TL3] - '0' + SixkvB[qamXkK1TL3] - '0' + tmp) % 10;
                    tmp = 0;
                }
                qamXkK1TL3--;
            };
        }
        zbNkLBR2Vi4[num1] = '\0';
        if (tmp == 1) {
            head = 1;
            printf ("1");
        }
        {
            qamXkK1TL3 = 0;
            while (qamXkK1TL3 < num1) {
                if (zbNkLBR2Vi4[qamXkK1TL3] == '0' && head == 0)
                    continue;
                printf ("%c", zbNkLBR2Vi4[qamXkK1TL3]);
                qamXkK1TL3++;
                head = 1;
            };
        }
        printf ("\n");
    }
    return 0;
}

