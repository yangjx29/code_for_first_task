int main (int argc, char *argv []) {
    int num [100];
    int e;
    int len;
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
    scanf ("%d", &len);
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len > i) {
            scanf ("%d", &(num[i]));
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
    }
    for (int UnDvYNRWX1S = 1;
    len > UnDvYNRWX1S; UnDvYNRWX1S = UnDvYNRWX1S +1) {
        int i = 0;
        while (len - UnDvYNRWX1S > i) {
            if (num[i + 1] > num[i]) {
                e = num[i + 1];
                num[i + 1] = num[i];
                num[i] = e;
            }
            i = i + 1;
        };
    }
    printf ("%d\n%d\n", num[0], num[1]);
    return 0;
}

