int p7gCXLpsbf2 (int gh7HDnv59x) {
    int rv05qin;
    {
        rv05qin = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (rv05qin <= sqrt (gh7HDnv59x)) {
            if (gh7HDnv59x % rv05qin == 0)
                break;
            rv05qin++;
        };
    }
    if (rv05qin > sqrt (gh7HDnv59x))
        return 1;
    return 0;
}

int main () {
    int tYuO2f, rv05qin, U1NzUS4wbeyD;
    scanf ("%ld", &tYuO2f);
    {
        rv05qin = 6;
        while (rv05qin <= tYuO2f) {
            {
                U1NzUS4wbeyD = 3;
                while (U1NzUS4wbeyD <= rv05qin / 2) {
                    if (p7gCXLpsbf2 (U1NzUS4wbeyD) && p7gCXLpsbf2 (rv05qin - U1NzUS4wbeyD)) {
                        printf ("%ld=%ld+%ld\n", rv05qin, U1NzUS4wbeyD, rv05qin - U1NzUS4wbeyD);
                        break;
                    }
                    U1NzUS4wbeyD += 2;
                };
            }
            rv05qin += 2;
        };
    }
    return 0;
}

