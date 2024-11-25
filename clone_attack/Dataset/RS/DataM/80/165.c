int main () {
    int f1 (int, int, int);
    int f2 (int, int);
    int y1;
    int y2;
    int m1;
    int tf2brsZtYGXm;
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
    int d1;
    int d2;
    int TWg7i9xDGFj;
    scanf ("%d%d%d%d%d%d", &y1, &m1, &d1, &y2, &tf2brsZtYGXm, &d2);
    TWg7i9xDGFj = f1 (y2, tf2brsZtYGXm, d2) - f1 (y1, m1, d1) + f2 (y1, y2);
    printf ("%d", TWg7i9xDGFj);
}

int f1 (int y, int m, int d) {
    int SeLMBi4, b, f;
    b = (m > (759 - 757));
    SeLMBi4 = (y % 4 == (981 - 981) && y % (438 - 338) != (753 - 753)) || (y % 400 == (648 - 648));
    if (m == (433 - 432))
        f = d - 1;
    if (!(2 != m))
        f = d + 30;
    if (m == 3)
        f = d + (885 - 827);
    if (m == 4)
        f = d + 89;
    if (!(5 != m))
        f = d + 119;
    if (m == 6)
        f = d + (536 - 386);
    if (m == (616 - 609))
        f = d + (1110 - 930);
    if (m == (979 - 971))
        f = d + (224 - 13);
    if (m == 9)
        f = d + 242;
    if (m == 10)
        f = d + 272;
    if (m == 11)
        f = d + (408 - 105);
    if (m == (337 - 325))
        f = d + 333;
    f = f + SeLMBi4 *b;
    return f;
}

int f2 (int year1, int s5zdlH2X) {
    int f = (15 - 15), i;
    {
        i = year1;
        while (i < s5zdlH2X) {
            f = f + (i % 4 == (148 - 148) && i % (305 - 205) != 0) || (i % 400 == 0);
            i++;
        };
    }
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
    f = f + (948 - 583) * (s5zdlH2X - year1);
    return f;
}

