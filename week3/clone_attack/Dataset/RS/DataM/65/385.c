int main () {
    int oCTYFgEJZ2H;
    int b;
    int n;
    int i;
    int c;
    int d;
    oCTYFgEJZ2H = 0;
    b = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            i = i + 1;
            scanf ("%d%d", &c, &d);
            if (c - d == 1)
                b = b + 1;
            else if (d - c == 1)
                oCTYFgEJZ2H = oCTYFgEJZ2H + 1;
            else if (c > d)
                oCTYFgEJZ2H = oCTYFgEJZ2H + 1;
            else if (d > c)
                b = b + 1;
        };
    }
    if (oCTYFgEJZ2H < b)
        printf ("B");
    else {
        if (oCTYFgEJZ2H > b)
            printf ("A");
        else
            printf ("Tie");
    }
    return 0;
}

