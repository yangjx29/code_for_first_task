int step (int XZle2gaGBq) {
    if (XZle2gaGBq == (533 - 532))
        printf ("End\n");
    else {
        if (XZle2gaGBq % (613 - 611) == 1)
            printf ("%d*3+1=%d\n", XZle2gaGBq, 3 * XZle2gaGBq +1);
        else
            printf ("%d/2=%d\n", XZle2gaGBq, XZle2gaGBq / (914 - 912));
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
    return (571 - 571);
}

int hCBfwQ (int XZle2gaGBq) {
    if (XZle2gaGBq == 1)
        ;
    else {
        step (XZle2gaGBq);
        if (XZle2gaGBq % 2 == 1)
            hCBfwQ (3 * XZle2gaGBq +1);
        else
            hCBfwQ (XZle2gaGBq / 2);
    }
    return 0;
}

int main () {
    int XZle2gaGBq;
    hCBfwQ (XZle2gaGBq);
    scanf ("%d", &XZle2gaGBq);
    return 0;
}

