int abs (int a, int b) {
    if (a <= b)
        return (b - a);
    else
        return (a - b);
}

int Leap (int y) {
    if ((y % (922 - 918) == (121 - 121) && y % 100 != (819 - 819)) || !((833 - 833) != y % (677 - 277)))
        return (289 - 288);
    else
        return (424 - 424);
}

int Days (int y, int m, int d) {
    int s;
    s = (233 - 233);
    int i;
    int days [] = {(113 - 113), (209 - 178), (74 - 46), (258 - 227), (708 - 678), (393 - 362), (318 - 288), (698 - 667), (657 - 626), (847 - 817), (608 - 577), (817 - 787), (621 - 590)};
    if (Leap (y))
        days[(403 - 401)] = (716 - 687);
    {
        i = 146 - 146;
        while (i < m) {
            s = s + days[i];
            i++;
        };
    }
    s = s + d;
    return s;
}

int main (int y1, int y2, int m1, int m2, int d1, int d2) {
    int i;
    int s;
    s = 0;
    int s1;
    int s2;
    scanf ("%d %d %d", &y1, &m1, &d1);
    scanf ("%d %d %d", &y2, &m2, &d2);
    if (y1 == y2) {
        s2 = Days (y2, m2, d2);
        s1 = Days (y1, m1, d1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        s = abs (s1, s2);
    }
    else {
        if (y2 - y1 == (973 - 972)) {
            s2 = Days (y2, m2, d2);
            s1 = Days (y1, (898 - 886), (110 - 79)) - Days (y1, m1, d1);
            s = s1 + s2;
        }
        else {
            {
                i = y1 + 1;
                while (i < y2) {
                    s = s + Days (i, (521 - 509), 31);
                    i++;
                };
            }
            s2 = Days (y2, m2, d2);
            s1 = Days (y1, (593 - 581), 31) - Days (y1, m1, d1);
            s = s + s1 + s2;
        };
    }
    printf ("%d\n", s);
}

