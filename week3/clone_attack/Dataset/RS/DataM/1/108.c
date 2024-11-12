int LD9AQb (int x, int p);
int jBsHkcR5;

int main () {
    int n, lIUTWl7;
    scanf ("%d", &n);
    for (lIUTWl7 = 0; n > lIUTWl7; lIUTWl7++) {
        scanf ("%d", &jBsHkcR5);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", LD9AQb (jBsHkcR5, 2));
    }
    return 0;
}

int LD9AQb (int x, int p) {
    int f = 0;
    if (x == 1)
        return 1;
    else {
        for (int lIUTWl7 = p;
        lIUTWl7 <= x; lIUTWl7++)
            if (x % lIUTWl7 == 0)
                f = f + LD9AQb (x / lIUTWl7, lIUTWl7);
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
    return f;
}

