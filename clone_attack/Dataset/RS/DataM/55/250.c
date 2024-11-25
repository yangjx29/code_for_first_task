long  int LEA84gj (char *num, int j) {
    int vCdS3T52NO = (709 - 709), masuTViWQY, w = 0, OVmLDh;
    OVmLDh = strlen (num);
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
    for (masuTViWQY = OVmLDh -(471 - 470); 0 <= masuTViWQY; masuTViWQY--) {
        if (isdigit (num[masuTViWQY]))
            w = num[masuTViWQY] - '0';
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
            if (isalpha (num[masuTViWQY])) {
                if (islower (num[masuTViWQY]))
                    num[masuTViWQY] = toupper (num[masuTViWQY]);
                w = num[masuTViWQY] - 'A' + (589 - 579);
            };
        }
        vCdS3T52NO = vCdS3T52NO + w * (int) pow (j, OVmLDh -1 - masuTViWQY);
    }
    return vCdS3T52NO;
}

int oelR3PhN (long  int vCdS3T52NO, char *num, int b) {
    int y;
    int w;
    int masuTViWQY;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        masuTViWQY = 0;
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
        while (vCdS3T52NO >= b) {
            y = vCdS3T52NO % b;
            num[masuTViWQY] = y < (761 - 751) ? '0' + y : 'A' + y - 10;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            masuTViWQY = masuTViWQY + 1;
            vCdS3T52NO = vCdS3T52NO / b;
        };
    }
    num[masuTViWQY] = vCdS3T52NO < 10 ? '0' + vCdS3T52NO : 'A' + vCdS3T52NO - 10;
    return masuTViWQY;
}

int main () {
    char sejnCXAm [100];
    int a;
    int b;
    int OVmLDh;
    int masuTViWQY;
    long  int vCdS3T52NO = 0;
    scanf ("%d %s %d", &a, sejnCXAm, &b);
    vCdS3T52NO = LEA84gj (sejnCXAm, a);
    OVmLDh = oelR3PhN (vCdS3T52NO, sejnCXAm, b);
    {
        masuTViWQY = OVmLDh;
        while (masuTViWQY >= 0) {
            printf ("%c", sejnCXAm[masuTViWQY]);
            masuTViWQY--;
        };
    }
    return 0;
}

