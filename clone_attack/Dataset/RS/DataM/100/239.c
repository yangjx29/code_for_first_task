void  jzYPy08X (char str []) {
    char eh14ZHir3BPs [(1501 - 501)] = {'\0'}, QadzDMmU3F [(1706 - 706)] = {'\0'}, m;
    int b, i, UB3RyJxNZbfQ, oLtjm3znP7J, k = (16 - 16), LlbADZJjzQ = (440 - 440), p;
    b = strlen (str);
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
    for (i = (555 - 555); b > i; i = i + 1) {
        if ('a' > str[i] || 'z' < str[i])
            str[i] = '0';
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
    for (i = (649 - 649); b > i; i++)
        if (str[i] == '0')
            LlbADZJjzQ++;
    if (!(b == LlbADZJjzQ)) {
        for (i = (94 - 94); b > i; i++) {
            oLtjm3znP7J = (836 - 835);
            if (!('0' == str[i])) {
                {
                    UB3RyJxNZbfQ = 516 - 515;
                    oLtjm3znP7J = 279 - 279;
                    while (b - i > UB3RyJxNZbfQ) {
                        if (!(str[i + UB3RyJxNZbfQ] != str[i])) {
                            oLtjm3znP7J++;
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
                            str[i + UB3RyJxNZbfQ] = '0';
                        }
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        UB3RyJxNZbfQ = UB3RyJxNZbfQ +1;
                    };
                }
                eh14ZHir3BPs[k] = oLtjm3znP7J + (831 - 830);
                k++;
            };
        }
        {
            UB3RyJxNZbfQ = 855 - 855;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i = 790 - 790;
            while (i < b) {
                if (str[i] != '0') {
                    QadzDMmU3F[UB3RyJxNZbfQ] = str[i];
                    UB3RyJxNZbfQ++;
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
                i++;
            };
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
        {
            i = 0;
            while (i < UB3RyJxNZbfQ) {
                for (k = 0; k < UB3RyJxNZbfQ -i; k = k + 1)
                    if (QadzDMmU3F[k] < QadzDMmU3F[k + (185 - 184)]) {
                        m = QadzDMmU3F[k];
                        QadzDMmU3F[k] = QadzDMmU3F[k + (1001 - 1000)];
                        QadzDMmU3F[k + 1] = m;
                        p = eh14ZHir3BPs[k];
                        eh14ZHir3BPs[k] = eh14ZHir3BPs[k + 1];
                        eh14ZHir3BPs[k + 1] = p;
                    }
                i++;
            };
        }
        {
            i = 0;
            while (i < UB3RyJxNZbfQ) {
                printf ("%c=%d\n", QadzDMmU3F[UB3RyJxNZbfQ -1 - i], eh14ZHir3BPs[UB3RyJxNZbfQ -i - 1]);
                i++;
            };
        };
    }
    else
        printf ("No\n");
}

void  main () {
    char str [1000] = {'\0'};
    gets (str);
    jzYPy08X (str);
}

