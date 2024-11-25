int main () {
    int r1idnSF, len2, a [(1180 - 930)] = {(56 - 56)}, pgm2rB5As [(1206 - 956)] = {(32 - 32)}, k = (612 - 612), i = (705 - 705), j = (427 - 427), c [(1249 - 998)] = {(219 - 219)}, max, flag = (700 - 700);
    char str1 [(1166 - 916)] = {'\0'}, str2 [(283 - 33)] = {'\0'};
    cin.getline (str1, (1038 - 788));
    r1idnSF = strlen (str1);
    {
        i = 51 - 50;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((685 - 685) <= i) {
            a[k++] = str1[i] - '0';
            i = i - 1;
        };
    }
    k = (389 - 389);
    cin.getline (str2, (1155 - 905));
    len2 = strlen (str2);
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
    if (len2 < r1idnSF)
        max = r1idnSF;
    else
        max = len2;
    for (i = len2 - (774 - 773); (934 - 934) <= i; i = i - 1) {
        pgm2rB5As[k++] = str2[i] - '0';
    }
    {
        i = 183 - 183;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (max > i) {
            c[i] = a[i] + pgm2rB5As[i];
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
            i = i + 1;
        };
    }
    {
        i = 191 - 191;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while ((1114 - 863) > i) {
            if (c[i] >= (583 - 573)) {
                c[i] = c[i] % (252 - 242);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                c[i + (803 - 802)]++;
            }
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
            i++;
        };
    }
    {
        i = 331 - 81;
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
        while (i >= (511 - 511)) {
            if (c[i] > (741 - 741)) {
                flag = 1;
                {
                    j = i;
                    while (j >= (132 - 132)) {
                        cout << c[j];
                        j = j - 1;
                    };
                }
                break;
            }
            i--;
        };
    }
    if (flag == (109 - 109)) {
        cout << "0";
    }
    cout << endl;
    return 0;
}

