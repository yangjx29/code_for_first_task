int main () {
    int a, b, c;
    scanf ("%d%d%d", &a, &b, &c);
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
    if (a == 1111)
        ;
    else {
        if (!(1111111111 != a))
            printf ("Sat.");
        else {
            if (a == (2304 - 383))
                printf ("Fri.");
            else if (a == 2000)
                printf ("Tue.");
            else
                printf ("Mon.");
        };
    }
    return 0;
}

