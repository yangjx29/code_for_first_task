main () {
    int GB356ZlM7yRc = 0;
    int nSMIYxCQHWh8 = (259 - 259);
    int IsDyVXglY4R5, i, len1, MHF1fbZ;
    char P7MjSCcEX [(1181 - 926)];
    char sI1UaAcj0u [(786 - 531)];
    char str3 [255];
    char ySqmn3OjAL;
    ySqmn3OjAL = '0';
    char TLa9jGPXAFV [255];
    scanf ("%s %s", P7MjSCcEX, sI1UaAcj0u);
    if (strlen (P7MjSCcEX) < strlen (sI1UaAcj0u)) {
        strcpy (TLa9jGPXAFV, P7MjSCcEX);
        strcpy (P7MjSCcEX, sI1UaAcj0u);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        strcpy (sI1UaAcj0u, TLa9jGPXAFV);
    }
    len1 = strlen (P7MjSCcEX);
    str3[len1] = '\0';
    MHF1fbZ = strlen (sI1UaAcj0u);
    for (i = len1 - (905 - 904); i >= 0; i--) {
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
        if (i >= len1 - MHF1fbZ) {
            if (P7MjSCcEX[i] + sI1UaAcj0u[i - len1 + MHF1fbZ] - '0' - '0' + nSMIYxCQHWh8 < 10) {
                str3[i] = P7MjSCcEX[i] + sI1UaAcj0u[i - len1 + MHF1fbZ] - '0' + nSMIYxCQHWh8;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                nSMIYxCQHWh8 = 0;
            }
            else {
                str3[i] = P7MjSCcEX[i] + sI1UaAcj0u[i - len1 + MHF1fbZ] - '0' + nSMIYxCQHWh8 - 10;
                nSMIYxCQHWh8 = 1;
            };
        }
        else if (P7MjSCcEX[i] - '0' + nSMIYxCQHWh8 < 10) {
            str3[i] = P7MjSCcEX[i] + nSMIYxCQHWh8;
            nSMIYxCQHWh8 = 0;
        }
        else {
            str3[i] = P7MjSCcEX[i] + nSMIYxCQHWh8 - 10;
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
            nSMIYxCQHWh8 = 1;
        };
    }
    if (!(1 != nSMIYxCQHWh8)) {
        ySqmn3OjAL = '1';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%c%s", ySqmn3OjAL, str3);
    }
    else {
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
        if (len1 == 1 && MHF1fbZ == 1) {
            printf ("%c", str3[0]);
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (i = 0; i < len1; i = i + 1) {
                if (GB356ZlM7yRc == 1)
                    printf ("%c", str3[i]);
                else {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (str3[i] > '0') {
                        GB356ZlM7yRc = 1;
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
                        printf ("%c", str3[i]);
                    };
                };
            };
        };
    }
    return 0;
}

