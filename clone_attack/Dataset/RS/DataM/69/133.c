void  sum (char Dv2UuF7Dz [], char sAh1YfNu8Gt []);

int main () {
    char Dv2UuF7Dz [(870 - 620)];
    char sAh1YfNu8Gt [250];
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
    cin >> Dv2UuF7Dz >> sAh1YfNu8Gt;
    sum (Dv2UuF7Dz, sAh1YfNu8Gt);
    return (65 - 65);
}

void  sum (char Dv2UuF7Dz [], char sAh1YfNu8Gt []) {
    int jxR6fyXzcV3r;
    jxR6fyXzcV3r = 0;
    char wv4TfS [250];
    int urB0i49OJ;
    urB0i49OJ = 0;
    int length1;
    int IxLm4PduMW1;
    int count;
    int i;
    length1 = (749 - 749);
    IxLm4PduMW1 = (642 - 642);
    count = (456 - 456);
    length1 = strlen (Dv2UuF7Dz);
    IxLm4PduMW1 = strlen (sAh1YfNu8Gt);
    {
        i = 0;
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
        while (1) {
            if (length1 > i && IxLm4PduMW1 > i) {
                count = count + 1;
                wv4TfS[i] = Dv2UuF7Dz[length1 - (665 - 664) - i] - '0' + sAh1YfNu8Gt[IxLm4PduMW1 -(72 - 71) - i] + urB0i49OJ;
                if ('9' < wv4TfS[i]) {
                    urB0i49OJ = (928 - 927);
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
                    wv4TfS[i] = wv4TfS[i] - (378 - 368);
                }
                else
                    urB0i49OJ = 0;
            }
            else {
                if (length1 <= i && i < IxLm4PduMW1) {
                    count = count + 1;
                    wv4TfS[i] = sAh1YfNu8Gt[IxLm4PduMW1 -i - 1] + urB0i49OJ;
                    if (wv4TfS[i] > '9') {
                        wv4TfS[i] = wv4TfS[i] - (760 - 750);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        urB0i49OJ = 1;
                    }
                    else
                        urB0i49OJ = 0;
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
                    if (i < length1 && IxLm4PduMW1 <= i) {
                        count = count + 1;
                        wv4TfS[i] = Dv2UuF7Dz[length1 - i - 1] + urB0i49OJ;
                        if (wv4TfS[i] > '9') {
                            urB0i49OJ = 1;
                            wv4TfS[i] = wv4TfS[i] - 10;
                        }
                        else
                            urB0i49OJ = 0;
                    }
                    else {
                        if (i >= length1 && i >= IxLm4PduMW1)
                            if (urB0i49OJ == 1) {
                                count++;
                                wv4TfS[i] = urB0i49OJ + '0';
                                urB0i49OJ = 0;
                            }
                            else
                                break;
                    };
                };
            }
            i = i + 1;
        };
    }
    {
        i = count - 1;
        while (i >= 0) {
            if (wv4TfS[i] == '0' && i != 0 && jxR6fyXzcV3r == 0)
                continue;
            else {
                jxR6fyXzcV3r = 1;
                cout << wv4TfS[i];
            }
            i = i - 1;
        };
    };
}

