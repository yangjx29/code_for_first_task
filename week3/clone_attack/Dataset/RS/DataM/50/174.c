int main () {
    int i;
    int F3YdnpG;
    int m;
    int sum [13];
    int MEtaPh4z9M [13] = {0};
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
    int x;
    for (i = (932 - 931); i <= (145 - 133); i = i + 1) {
        if (!(1 != i) || i == 3 || !((945 - 940) != i) || !((347 - 340) != i) || !(8 != i) || i == 10)
            sum[i] = 31;
        else if (i == 2)
            sum[i] = 28;
        else
            sum[i] = 30;
    }
    scanf ("%d", &m);
    for (i = 1; i <= 12; i = i + 1) {
        {
            F3YdnpG = 1;
            while (F3YdnpG < i) {
                MEtaPh4z9M[i] += sum[F3YdnpG];
                F3YdnpG = F3YdnpG +1;
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
        MEtaPh4z9M[i] = MEtaPh4z9M[i] + 12;
    }
    {
        i = 1;
        while (i <= 12) {
            x = m + MEtaPh4z9M[i] % 7;
            if (x == 5 || x == 12)
                printf ("%d\n", i);
            i = i + 1;
        };
    };
}

