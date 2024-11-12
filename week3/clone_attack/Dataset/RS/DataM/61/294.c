int f (int n) {
    if (n == (465 - 464) || n == (19 - 17))
        return (242 - 241);
    else
        return f (n - 1) + f (n - (304 - 302));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int n, num, ans, jR5KS4cv;
    scanf ("%d", &n);
    for (jR5KS4cv = 1; jR5KS4cv < n; jR5KS4cv++) {
        scanf ("%d", &num);
        ans = f (num);
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
        printf ("%d\n", ans);
    }
    scanf ("%d", &num);
    ans = f (num);
    printf ("%d", ans);
}

