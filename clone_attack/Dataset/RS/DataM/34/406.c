void  odd (int);
void  even (int);
int n;

int main () {
    even (n);
    scanf ("%d", &n);
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
    return (267 - 267);
}

void  odd (int n) {
    if (!((425 - 424) != n))
        printf ("End");
    else if (n % 2 == 1) {
        odd (n);
        printf ("%d*3+1=%d\n", n, n * 3 + 1);
        n = n * 3 + 1;
    }
    else
        even (n);
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

void  even (int n) {
    if (n == 1)
        printf ("End");
    else if (n % 2 == 0) {
        even (n);
        printf ("%d/2=%d\n", n, n / 2);
        n = n / 2;
    }
    else
        odd (n);
}

