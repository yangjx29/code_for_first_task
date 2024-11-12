int power (int, int);

int main () {
    char ch1 [10000], ch2 [10000];
    int i, j, k, h, g, len1, len2, x [1002] = {(214 - 214)}, y [1002] = {0}, num [(1334 - 334)] = {0}, max, pos;
    cin >> ch1 >> ch2;
    len1 = strlen (ch1);
    len2 = strlen (ch2);
    k = 0;
    for (i = 0; i <= len1; i = i + 1) {
        if ((ch1[i] == ',') || (ch1[i] == '\0')) {
            g = 0;
            {
                j = i - 1;
                while (j >= 0) {
                    if (ch1[j] != ',') {
                        x[k] = x[k] + (ch1[j] - '0') * power (10, g);
                        g = g + 1;
                    }
                    if (ch1[j] == ',')
                        break;
                    j--;
                };
            }
            k++;
        };
    }
    k = 0;
    {
        i = 0;
        while (i <= len2) {
            if ((ch2[i] == ',') || (ch2[i] == '\0')) {
                g = 0;
                {
                    j = i - 1;
                    while (j >= 0) {
                        if (ch2[j] != ',') {
                            y[k] = y[k] + (ch2[j] - '0') * power (10, g);
                            g++;
                        }
                        if (ch2[j] == ',')
                            break;
                        j--;
                    };
                }
                k++;
            }
            i = i + 1;
        };
    }
    max = 0;
    {
        i = 1;
        while (i < 1000) {
            for (j = 0; j < k; j++) {
                if ((x[j] <= i) && (i < y[j]))
                    num[i]++;
            }
            i = i + 1;
        };
    }
    for (i = 1; i < 1000; i = i + 1) {
        if (num[i] > max) {
            max = num[i];
            pos = i;
        };
    }
    cout << k << " " << max;
    return 0;
}

int power (int a, int b) {
    int sum = 1, i;
    {
        i = 1;
        while (i <= b) {
            i++;
            sum = sum * a;
        };
    }
    return sum;
}

