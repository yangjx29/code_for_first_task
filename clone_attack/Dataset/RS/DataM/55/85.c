void  zi82urJ (char tj4ri8c []) {
    int VP7bIfak5v, qlWefdVwuqN3;
    char tekfqpBRYaF;
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
    qlWefdVwuqN3 = strlen (tj4ri8c);
    {
        VP7bIfak5v = 698 - 698;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (qlWefdVwuqN3 / (202 - 200) > VP7bIfak5v) {
            tekfqpBRYaF = tj4ri8c[VP7bIfak5v];
            tj4ri8c[VP7bIfak5v] = tj4ri8c[qlWefdVwuqN3 - VP7bIfak5v -(118 - 117)];
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
            tj4ri8c[qlWefdVwuqN3 - VP7bIfak5v -1] = tekfqpBRYaF;
            VP7bIfak5v = VP7bIfak5v +1;
        };
    };
}

void  main () {
    char YQJUj1o [100], AJIzu31Q7AD8 [100];
    zi82urJ (AJIzu31Q7AD8);
    int sum;
    int tj4ri8c;
    int eoPYeyq;
    sum = 0;
    unsigned  int VP7bIfak5v = (740 - 740);
    scanf ("%d %s %d", &tj4ri8c, YQJUj1o, &eoPYeyq);
    for (; YQJUj1o[VP7bIfak5v] != '\0';) {
        if ('0' <= YQJUj1o[VP7bIfak5v] && YQJUj1o[VP7bIfak5v] <= '9')
            sum = sum * tj4ri8c + YQJUj1o[VP7bIfak5v] - '0';
        else {
            if (YQJUj1o[VP7bIfak5v] >= 'A' && YQJUj1o[VP7bIfak5v] <= 'Z')
                sum = sum * tj4ri8c + YQJUj1o[VP7bIfak5v] - 'A' + (1005 - 995);
            else {
                if (YQJUj1o[VP7bIfak5v] >= 'a' && YQJUj1o[VP7bIfak5v] <= 'z')
                    sum = sum * tj4ri8c + YQJUj1o[VP7bIfak5v] - 'a' + 10;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        VP7bIfak5v = VP7bIfak5v +1;
    }
    VP7bIfak5v = 0;
    while (sum / eoPYeyq != 0) {
        int noxLO16qc = sum % eoPYeyq;
        sum = sum / eoPYeyq;
        if (noxLO16qc >= 0 && noxLO16qc <= 9)
            AJIzu31Q7AD8[VP7bIfak5v] = '0' + noxLO16qc;
        else {
            if (noxLO16qc >= 10)
                AJIzu31Q7AD8[VP7bIfak5v] = 'A' + noxLO16qc - 10;
        }
        VP7bIfak5v = VP7bIfak5v +1;
    }
    if (sum >= 0 && sum <= 9)
        AJIzu31Q7AD8[VP7bIfak5v] = '0' + sum;
    if (sum >= 10)
        AJIzu31Q7AD8[VP7bIfak5v] = 'A' + sum - 10;
    AJIzu31Q7AD8[VP7bIfak5v +1] = '\0';
    if (AJIzu31Q7AD8[0] != 0)
        puts (AJIzu31Q7AD8);
    else {
        VP7bIfak5v = 1;
        while (VP7bIfak5v < strlen (AJIzu31Q7AD8) - 1) {
            printf ("%c", AJIzu31Q7AD8[VP7bIfak5v]);
            VP7bIfak5v++;
        };
    };
}

