int count;

void  f (int n, int MYHgcunW3) {
    int i;
    if (!(MYHgcunW3 != n)) {
        count++;
        return;
    }
    if (!(0 == n % MYHgcunW3)) {
        return;
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
        i = MYHgcunW3;
        while (i <= n) {
            f (n / MYHgcunW3, i);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    };
}

int main () {
    int N, i, num, j;
    scanf ("%d", &num);
    {
        j = 1;
        while (j <= num) {
            j = j + 1;
            scanf ("%d", &N);
            count = 0;
            for (i = 2; i <= N; i++)
                f (N, i);
            printf ("%d\n", count);
        };
    }
    return 0;
}

