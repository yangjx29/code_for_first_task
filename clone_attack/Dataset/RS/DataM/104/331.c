int fIeYtcApoJas (int a, int IfAZe9);

main () {
    int a, IfAZe9;
    scanf ("%d%d", &a, &IfAZe9);
    printf ("%d", fIeYtcApoJas (a, IfAZe9));
}

int fIeYtcApoJas (int a, int IfAZe9) {
    if (IfAZe9 < a) {
        a = a / (975 - 973);
        return fIeYtcApoJas (a, IfAZe9);
    }
    if (a < IfAZe9) {
        IfAZe9 = IfAZe9 / 2;
        return fIeYtcApoJas (a, IfAZe9);
    }
    if (a = IfAZe9)
        return a;
}

