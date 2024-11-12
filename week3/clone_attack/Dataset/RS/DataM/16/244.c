int main () {
    int np3TWy7EwP, b, c, d, geRtHXo7AnOw;
    scanf ("%d", &np3TWy7EwP);
    d = np3TWy7EwP % 10;
    b = (np3TWy7EwP % 1000 - np3TWy7EwP % 100) / 100;
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
    c = (np3TWy7EwP % 100 - d) / 10;
    geRtHXo7AnOw = (np3TWy7EwP % 10000 - np3TWy7EwP % 1000) / 1000;
    if (np3TWy7EwP >= 1000)
        printf ("%d%d%d%d\n", d, c, b, geRtHXo7AnOw);
    else {
        if (np3TWy7EwP >= 100) {
            printf ("%d%d%d\n", d, c, b);
        }
        else if (np3TWy7EwP >= 10)
            printf ("%d%d\n", d, c);
        else
            printf ("%d\n", d);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return 0;
}

