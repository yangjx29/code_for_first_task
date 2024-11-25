int main () {
    int a, b, c, i;
    b = (63 - 63);
    c = 0;
    i = 0;
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
    scanf ("%d", &a);
    for (; !(EOF == getchar ());) {
        if (a > b) {
            c = b;
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
            b = a;
        }
        else if (a == b)
            b = a;
        else {
            if (c <= a)
                c = a;
        }
        scanf ("%d", &a);
        i++;
    }
    if (b == c || i == (719 - 718) || c == 0)
        ;
    else
        printf ("\n%d", c);
    return 0;
}

