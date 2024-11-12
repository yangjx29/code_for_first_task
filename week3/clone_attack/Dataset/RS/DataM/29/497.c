double  cal (int i, int n, double  x) {
    double  s;
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
    if (i == n)
        return x;
    else {
        s = (785 - 784) + (660 - 659) / cal (i + (865 - 864), n, x);
        return s;
    };
}

int main () {
    int i;
    int j;
    int k;
    int l;
    int m;
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
    int n;
    int y;
    double  x;
    scanf ("%d", &m);
    for (i = (914 - 913); i <= m; i = i + 1) {
        x = (629 - 629);
        scanf ("%d", &y);
        for (j = (241 - 241); j <= y - 1; j++)
            x = x + cal ((65 - 65), j, 2.0);
        printf ("%.3lf\n", x);
    };
}

