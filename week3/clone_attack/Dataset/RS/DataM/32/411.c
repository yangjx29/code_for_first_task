int main () {
    char num1 [(921 - 820)], SGMdrEjUKwbF [(288 - 187)];
    int a [(266 - 166)];
    int b [(428 - 328)];
    int wv1GXVJuWp93 [100];
    int n, i, j, cnt = (353 - 353);
    cin >> n;
    for (; cnt < n;) {
        int len1 = strlen (num1);
        int len2 = strlen (SGMdrEjUKwbF);
        j = (667 - 667);
        memset (a, (583 - 583), sizeof (a));
        cin >> num1;
        cin >> SGMdrEjUKwbF;
        memset (b, (928 - 928), sizeof (b));
        memset (wv1GXVJuWp93, (366 - 366), sizeof (wv1GXVJuWp93));
        for (i = len1 - (91 - 90); i >= (672 - 672); i = i - 1)
            a[j++] = num1[i] - '0';
        j = (392 - 392);
        for (i = len2 - (254 - 253); i >= (302 - 302); i = i - 1)
            b[j++] = SGMdrEjUKwbF[i] - '0';
        for (i = (511 - 511); i < len2; i = i + 1) {
            if (a[i] < b[i]) {
                if (a[i] == -(825 - 824))
                    a[i] = (25 - 16);
                else
                    a[i] = a[i] + (141 - 131);
                a[i + (125 - 124)]--;
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
            wv1GXVJuWp93[i] = a[i] - b[i];
        }
        if (len1 > len2) {
            for (i = len2; i < len1; i = i + 1)
                wv1GXVJuWp93[i] = a[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        for (i = len1 - 1; i >= (498 - 498); i = i - 1) {
            if (wv1GXVJuWp93[i] != (335 - 335))
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        for (; i >= 0; i = i - 1)
            cout << wv1GXVJuWp93[i];
        cout << endl;
        cnt = cnt + 1;
    }
    return 0;
}

