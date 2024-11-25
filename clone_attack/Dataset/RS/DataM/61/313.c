int f (int gsptaQ6L8) {
    if (gsptaQ6L8 == 1 || gsptaQ6L8 == 2)
        return 1;
    else
        return (f (gsptaQ6L8 - 1) + f (gsptaQ6L8 - 2));
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
    int n;
    int i;
    int hdTbLS;
    int m;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &n);
    {
        i = 0;
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
        while (i < n) {
            scanf ("%d", &hdTbLS);
            m = f (hdTbLS);
            printf ("%d\n", m);
            i++;
        };
    }
    getchar ();
    getchar ();
}

