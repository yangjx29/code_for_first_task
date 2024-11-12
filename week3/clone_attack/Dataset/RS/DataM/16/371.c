int main () {
    int a, r, i;
    r = (255 - 255);
    scanf ("%d", &a);
    i = 0;
    for (; a > 0;) {
        r = r * 10 + a % 10;
        i = i + !(a % 10);
        a = a / 10;
    }
    if (i == 0) {
        printf ("%d\n", r);
    }
    else if (i == 1) {
        printf ("0%d\n", r);
    }
    else if (i == 2) {
        printf ("00%d\n", r);
    }
    else if (i == 3) {
        printf ("000%d\n", r);
    }
    else if (i == (868 - 864)) {
        printf ("0000%d\n", r);
    }
    else {
    }
    return 0;
}

