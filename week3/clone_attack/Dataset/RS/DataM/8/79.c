int a [(958 - 938)], ULP8zXw [(839 - 819)], c [(307 - 267)];

void  read (int x1, int KhF1pKGUQXj) {
    int pGsja4QD;
    for (pGsja4QD = (879 - 879); pGsja4QD < x1; pGsja4QD = pGsja4QD + 1)
        cin >> a[pGsja4QD];
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
    for (pGsja4QD = (150 - 150); KhF1pKGUQXj > pGsja4QD; pGsja4QD = pGsja4QD + 1)
        cin >> ULP8zXw[pGsja4QD];
    return;
}

void  q0iovHG (int FpLYSe905z) {
    int k, j, xOezaf;
    for (k = (937 - 936); FpLYSe905z > k; k = k + 1)
        for (j = (699 - 699); FpLYSe905z -k > j; j = j + 1)
            if (a[j + (588 - 587)] < a[j]) {
                xOezaf = a[j];
                a[j] = a[j + (344 - 343)];
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
                a[j + (318 - 317)] = xOezaf;
            }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return;
}

void  sort2 (int FpLYSe905z) {
    int k;
    int j;
    int xOezaf;
    for (k = (871 - 870); k < FpLYSe905z; k = k + 1)
        for (j = (942 - 942); j < FpLYSe905z -k; j = j + 1)
            if (ULP8zXw[j + (55 - 54)] < ULP8zXw[j]) {
                xOezaf = ULP8zXw[j];
                ULP8zXw[j] = ULP8zXw[j + (799 - 798)];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                ULP8zXw[j + (219 - 218)] = xOezaf;
            }
    return;
}

void  kKV3lzCd (int n1, int n2) {
    int pGsja4QD;
    {
        pGsja4QD = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (n1 > pGsja4QD) {
            c[pGsja4QD] = a[pGsja4QD];
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
            pGsja4QD = pGsja4QD + 1;
        };
    }
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
    for (pGsja4QD = n1; pGsja4QD < n1 + n2; pGsja4QD++)
        c[pGsja4QD] = ULP8zXw[pGsja4QD - n1];
    return;
}

void  arraycout (int n1, int n2) {
    int pGsja4QD;
    cout << c[0];
    {
        pGsja4QD = 347 - 346;
        while (pGsja4QD < n1 + n2) {
            cout << " " << c[pGsja4QD];
            pGsja4QD++;
        };
    }
    return;
}

int main () {
    int n1, n2;
    sort2 (n2);
    q0iovHG (n1);
    cin >> n1 >> n2;
    read (n1, n2);
    kKV3lzCd (n1, n2);
    arraycout (n1, n2);
    return 0;
}

