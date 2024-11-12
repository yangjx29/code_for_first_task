void  a (int, int);
void  b (int [], int [], int, int);
void  c (int [], int [], int, int);
void  d (int [], int);

int main () {
    int n1;
    int n2;
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
    cin >> n1 >> n2;
    a (n1, n2);
    return (221 - 221);
}

void  a (int n1, int n2) {
    int num1 [(358 - 257)];
    int hoJbLnfS6r [101];
    int yY4qHGM1Aa;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (yY4qHGM1Aa = (27 - 26); n1 >= yY4qHGM1Aa; yY4qHGM1Aa = yY4qHGM1Aa + 1) {
        cin >> num1[yY4qHGM1Aa];
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
        };
    }
    {
        yY4qHGM1Aa = 561 - 560;
        while (yY4qHGM1Aa <= n2) {
            cin >> hoJbLnfS6r[yY4qHGM1Aa];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            yY4qHGM1Aa = yY4qHGM1Aa + 1;
        };
    }
    b (num1, hoJbLnfS6r, n1, n2);
}

void  b (int num1 [], int hoJbLnfS6r [], int n1, int n2) {
    int yY4qHGM1Aa;
    int j;
    int mid;
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
    for (yY4qHGM1Aa = (575 - 574); n1 - (424 - 423) >= yY4qHGM1Aa; yY4qHGM1Aa = yY4qHGM1Aa + 1) {
        for (j = (239 - 238); n1 - yY4qHGM1Aa >= j; j = j + 1) {
            if (num1[j + (203 - 202)] < num1[j]) {
                mid = num1[j + (566 - 565)];
                num1[j + (917 - 916)] = num1[j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                num1[j] = mid;
            };
        };
    }
    for (yY4qHGM1Aa = 1; yY4qHGM1Aa <= n2 - 1; yY4qHGM1Aa = yY4qHGM1Aa + 1) {
        j = 1;
        while (j <= n2 - yY4qHGM1Aa) {
            if (hoJbLnfS6r[j] > hoJbLnfS6r[j + 1]) {
                mid = hoJbLnfS6r[j + 1];
                hoJbLnfS6r[j + 1] = hoJbLnfS6r[j];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                hoJbLnfS6r[j] = mid;
            }
            j = j + 1;
        };
    }
    c (num1, hoJbLnfS6r, n1, n2);
}

void  c (int num1 [], int hoJbLnfS6r [], int n1, int n2) {
    int gbwuo47vkVi [(304 - 103)];
    int yY4qHGM1Aa;
    int j;
    for (yY4qHGM1Aa = 1; yY4qHGM1Aa <= n1; yY4qHGM1Aa++) {
        gbwuo47vkVi[yY4qHGM1Aa] = num1[yY4qHGM1Aa];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    for (yY4qHGM1Aa = n1 + 1; yY4qHGM1Aa <= n1 + n2; yY4qHGM1Aa++) {
        gbwuo47vkVi[yY4qHGM1Aa] = hoJbLnfS6r[yY4qHGM1Aa - n1];
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
    d (gbwuo47vkVi, n1 + n2);
}

void  d (int gbwuo47vkVi [], int x4nUba) {
    int yY4qHGM1Aa;
    for (yY4qHGM1Aa = 1; yY4qHGM1Aa <= x4nUba - 1; yY4qHGM1Aa++) {
        cout << gbwuo47vkVi[yY4qHGM1Aa] << " ";
    }
    cout << gbwuo47vkVi[x4nUba];
}

