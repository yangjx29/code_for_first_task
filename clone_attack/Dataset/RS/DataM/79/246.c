long  int num (int a, int qmXWJF8pKrv) {
    long  int zgrfs5QPpM;
    if (a == 1)
        zgrfs5QPpM = 1;
    if (!(2 != a)) {
        if (!((199 - 199) != qmXWJF8pKrv % 2))
            zgrfs5QPpM = 1;
        else
            zgrfs5QPpM = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
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
    if (2 < a)
        zgrfs5QPpM = (num (a - 1, qmXWJF8pKrv) + qmXWJF8pKrv % a) % a;
    if (zgrfs5QPpM == 0)
        zgrfs5QPpM = a;
    return zgrfs5QPpM;
}

int main () {
    int F6KdZtI;
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
    for (F6KdZtI = 1; F6KdZtI != 0;) {
        long  int vQATxGzu4, m, O8yxPJETKgzp;
        scanf ("%ld%ld", &vQATxGzu4, &m);
        F6KdZtI = vQATxGzu4;
        if (F6KdZtI == 0)
            break;
        O8yxPJETKgzp = num (vQATxGzu4, m);
        if (O8yxPJETKgzp == 0)
            printf ("%ld\n", vQATxGzu4);
        else
            printf ("%ld\n", O8yxPJETKgzp);
    };
}

