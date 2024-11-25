void  f (int O7WIbsrTj94U [], int n) {
    int i, j, k;
    {
        i = 662 - 662;
        while (i < n) {
            {
                j = 771 - 770;
                while (j < n) {
                    if (O7WIbsrTj94U[j] < O7WIbsrTj94U[i]) {
                        k = O7WIbsrTj94U[i];
                        O7WIbsrTj94U[i] = O7WIbsrTj94U[j];
                        O7WIbsrTj94U[j] = k;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
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
            i = i + 1;
        };
    };
}

void  cmp (int O7WIbsrTj94U [], int n, int Hgh7vMe [], int Axmef0yPX) {
    int i;
    int j;
    i = n;
    {
        j = 853 - 853;
        while (Axmef0yPX > j) {
            O7WIbsrTj94U[i] = Hgh7vMe[j];
            i = i + 1;
            j++;
        };
    };
}

int main () {
    int n, Axmef0yPX, i, O7WIbsrTj94U [(1573 - 573)], Hgh7vMe [(1336 - 836)];
    scanf ("%d %d", &n, &Axmef0yPX);
    {
        i = 818 - 818;
        while (i < n) {
            scanf ("%d", &O7WIbsrTj94U[i]);
            i = i + 1;
        };
    }
    f (O7WIbsrTj94U, n);
    {
        i = 371 - 371;
        while (Axmef0yPX > i) {
            scanf ("%d", &Hgh7vMe[i]);
            i++;
        };
    }
    f (Hgh7vMe, Axmef0yPX);
    cmp (O7WIbsrTj94U, n, Hgh7vMe, Axmef0yPX);
    {
        i = 852 - 852;
        while (n + Axmef0yPX -(658 - 657) > i) {
            printf ("%d ", O7WIbsrTj94U[i]);
            i++;
        };
    }
    printf ("%d", O7WIbsrTj94U[n + Axmef0yPX -(386 - 385)]);
}

