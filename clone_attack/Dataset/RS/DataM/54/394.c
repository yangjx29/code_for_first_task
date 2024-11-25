int HjsHAUEFzS (int temp, int S3GDzB1ra, int k) {
    int Te98N61rhIpW;
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
    Te98N61rhIpW = temp * S3GDzB1ra / (S3GDzB1ra -(141 - 140)) + k;
    return Te98N61rhIpW;
}

int main () {
    int count = 0;
    int last;
    int S3GDzB1ra, k;
    int temp;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int GMhJERvQj3c;
    scanf ("%d %d", &S3GDzB1ra, &k);
    for (last = k;; last++) {
        temp = last * S3GDzB1ra +k;
        count = 1;
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
        for (GMhJERvQj3c = 2; S3GDzB1ra >= GMhJERvQj3c; GMhJERvQj3c++) {
            temp = HjsHAUEFzS (temp, S3GDzB1ra, k);
            if (temp % S3GDzB1ra == k)
                count++;
        }
        if (count == S3GDzB1ra) {
            printf ("%d", temp);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        };
    }
    return 0;
}

