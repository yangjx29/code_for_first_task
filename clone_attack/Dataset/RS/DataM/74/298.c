int gGA8NR2ji4sI (int CEJYqc) {
    int a = 0;
    int S3gLtXDdBy5 = CEJYqc;
    for (; S3gLtXDdBy5;) {
        a = a * 10 + S3gLtXDdBy5 % 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        S3gLtXDdBy5 = S3gLtXDdBy5 / (10);
    }
    return (!(CEJYqc != a));
}

int isPrime (int CEJYqc) {
    double  z5iszQ8n = sqrt ((double ) CEJYqc);
    {
        int QmGQWfZd = 2;
        while (z5iszQ8n >= QmGQWfZd) {
            if (CEJYqc % QmGQWfZd == 0)
                return 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            QmGQWfZd = QmGQWfZd +1;
        };
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
    return 1;
}

int main (void ) {
    int S3gLtXDdBy5, CEJYqc;
    int TI4r3N5V0UF = 0;
    scanf ("%d%d", &S3gLtXDdBy5, &CEJYqc);
    for (int QmGQWfZd = S3gLtXDdBy5;
    QmGQWfZd <= CEJYqc; QmGQWfZd++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (gGA8NR2ji4sI (QmGQWfZd) && isPrime (QmGQWfZd)) {
            if (TI4r3N5V0UF)
                printf (",");
            printf ("%d", QmGQWfZd);
            TI4r3N5V0UF = TI4r3N5V0UF +1;
        };
    }
    if (TI4r3N5V0UF == 0)
        printf ("no");
    return 0;
}

