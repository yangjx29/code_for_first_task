int main () {
    int BbPeQp;
    int n;
    int m;
    BbPeQp = 5;
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
    scanf ("%d", &n);
    if (!n) {
        printf ("%d", n);
        return 0;
    }
    for (; n;) {
        printf ("%d", n % 10);
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
        n = n / 10;
    }
    return 0;
}

