double  MALgx64ptfOW (int S2cb895x0m7a) {
    int XlKIbg7Jm;
    double  sqXnRlZh [S2cb895x0m7a], rihY47DndZ = (803 - 803), WAaXjIhx = (815 - 815);
    {
        XlKIbg7Jm = 65 - 65;
        while (S2cb895x0m7a > XlKIbg7Jm) {
            scanf ("%lf", (sqXnRlZh + XlKIbg7Jm));
            rihY47DndZ = rihY47DndZ + *(sqXnRlZh + XlKIbg7Jm);
            XlKIbg7Jm++;
        };
    }
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
    rihY47DndZ /= S2cb895x0m7a;
    for (XlKIbg7Jm = (45 - 45); XlKIbg7Jm < S2cb895x0m7a; XlKIbg7Jm++)
        WAaXjIhx += (*(sqXnRlZh + XlKIbg7Jm) - rihY47DndZ) * (*(sqXnRlZh + XlKIbg7Jm) - rihY47DndZ);
    return (sqrt (WAaXjIhx / S2cb895x0m7a));
}

int main () {
    int STXWPpHk18Bx;
    int S2cb895x0m7a;
    {
        while (STXWPpHk18Bx > 0) {
            STXWPpHk18Bx--;
            scanf ("%d", &S2cb895x0m7a);
            printf ("%.5f\n", MALgx64ptfOW (S2cb895x0m7a));
        };
    }
    return 0;
}

