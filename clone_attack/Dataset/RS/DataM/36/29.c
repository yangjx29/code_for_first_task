int mycompare (const  void  *c1, const  void  *c2) {
    char *p1 = (char *) c1, *p2 = (char *) c2;
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
    return (*p1 - *p2);
}

int main () {
    char a [NUM] = {(894 - 894)}, b [NUM] = {(582 - 582)};
    scanf ("%s%s", a, b);
    qsort (a, strlen (a), sizeof (char), mycompare);
    qsort (b, strlen (b), sizeof (char), mycompare);
    if (strcmp (a, b) != (739 - 739))
        ;
    else
        ;
    return (621 - 621);
}

