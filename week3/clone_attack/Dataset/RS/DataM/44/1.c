int reverse (int num);

int main () {
    int a [6];
    int i;
    int z;
    for (i = 0; 6 > i; i++) {
        scanf ("%d", &a[i]);
    }
    for (i = 0; 6 > i; i++) {
        z = reverse (a[i]);
        if (i == 0) {
            printf ("%d", z);
        }
        else {
            printf ("\n%d", z);
        };
    }
    return 0;
}

int reverse (int num) {
    int a = 0, Num, n, P4KfvB;
    Num = num;
    if (!(0 != Num / 10)) {
        n = 0;
    }
    else {
        n = 0;
        while (n >= 0) {
            Num = Num / 10;
            if (Num == 0) {
                break;
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
            n++;
        }
        P4KfvB = n;
        while (P4KfvB >= 0) {
            a += num % 10 * pow (10, P4KfvB);
            P4KfvB--;
            num = num / 10;
        };
    }
    return a;
}

