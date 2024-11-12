int main () {
    int c;
    int d;
    int BDkT43K7;
    int i;
    int a;
    int b;
    int n;
    c = (919 - 919);
    d = (971 - 971);
    BDkT43K7 = (281 - 281);
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%d%d", &a, &b);
        if (a == b) {
            BDkT43K7 = BDkT43K7 +1;
        }
        else if ((!(0 != a) && !(1 != b)) || (!(1 != a) && !(2 != b)) || (a == 2 && b == 0))
            c = c + 1;
        else
            d = d + 1;
    }
    if (c > d)
        printf ("A");
    if (d > c)
        printf ("B");
    if (c == d)
        printf ("Tie");
    return 0;
}

