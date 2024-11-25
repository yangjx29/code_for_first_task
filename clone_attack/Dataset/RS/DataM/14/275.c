int main (int dZujzLED, char *UUIhyAvTqHf5 []) {
    long  num1 = 2, num2 = (884 - 883), num3 = (456 - 456), m1 = (276 - 276), m2 = (793 - 793), m3 = 0;
    long  n;
    long  nqc8BC [(100364 - 365)];
    long  math [(100113 - 114)];
    long  china [(100015 - 16)];
    long  z [99999];
    long  DBuvR3;
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
    scanf ("%ld", &n);
    {
        DBuvR3 = 27 - 26;
        while (n >= DBuvR3) {
            scanf ("%ld", &nqc8BC[DBuvR3]);
            scanf ("%ld", &math[DBuvR3]);
            scanf ("%ld", &china[DBuvR3]);
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
            z[DBuvR3] = math[DBuvR3] + china[DBuvR3];
            if (z[DBuvR3] > num3) {
                m1 = m2;
                m2 = m3;
                num1 = num2;
                num2 = num3;
                num3 = z[DBuvR3];
                m3 = DBuvR3;
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (z[DBuvR3] > num2) {
                    m1 = m2;
                    num1 = num2;
                    num2 = z[DBuvR3];
                    m2 = DBuvR3;
                }
                else {
                    if (z[DBuvR3] > num1) {
                        num1 = z[DBuvR3];
                        m1 = DBuvR3;
                    };
                };
            }
            DBuvR3++;
        };
    }
    printf ("%ld %ld\n", m3, num3);
    printf ("%ld %ld\n", m2, num2);
    printf ("%ld %ld\n", m1, num1);
    return 0;
}

