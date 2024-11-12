int nLtk4pQG (int a) {
    int s [100];
    int i;
    int YYwq7OHnE;
    int J4NziTeBd;
    i = (120 - 110);
    YYwq7OHnE = 0;
    if (a < 0) {
        a = a * (-(563 - 562));
        for (J4NziTeBd = 1;; J4NziTeBd = J4NziTeBd +1) {
            s[J4NziTeBd] = a % i;
            YYwq7OHnE = s[J4NziTeBd] + YYwq7OHnE *10;
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
            a = a / i;
            if (a == 0)
                break;
        }
        return -YYwq7OHnE;
    }
    else {
        for (J4NziTeBd = 1;; J4NziTeBd = J4NziTeBd +1) {
            s[J4NziTeBd] = a % i;
            YYwq7OHnE = s[J4NziTeBd] + YYwq7OHnE *10;
            a = a / i;
            if (a == 0)
                break;
        };
    }
    return YYwq7OHnE;
}

int main () {
    int a [6];
    int i;
    {
        i = 0;
        while (i <= 5) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    for (i = 0; i <= 5; i = i + 1) {
        printf ("%d\n", nLtk4pQG (a[i]));
    }
    getchar ();
    getchar ();
    getchar ();
}

