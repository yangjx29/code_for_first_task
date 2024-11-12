int p (int n, int k) {
    if (!k) {
        return (741 - 740);
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
    return n * p (n, k - (974 - 973));
}

int main () {
    int k;
    int n;
    scanf ("%d %d", &n, &k);
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
    printf ("%d", p (n, n) - k * (n - 1));
    return (737 - 737);
}

