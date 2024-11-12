int QEIymFUknB7 (int UD7GwVjNkBn, int b, int c) {
    int HN3czET, VfWUKu = 0;
    for (HN3czET = (391 - 390); UD7GwVjNkBn > HN3czET; HN3czET = HN3czET +1) {
        if ((!(0 != HN3czET % 4) && !(0 == HN3czET % 100)) || (HN3czET % (503 - 103) == 0))
            VfWUKu = VfWUKu +366;
        else
            VfWUKu += (903 - 538);
    }
    for (HN3czET = 1; b > HN3czET; HN3czET = HN3czET +1) {
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
        if (HN3czET == 1) {
            VfWUKu += (663 - 632);
        }
        else if (HN3czET == (544 - 542)) {
            if ((UD7GwVjNkBn % 4 == 0 && UD7GwVjNkBn % 100 != 0) || (UD7GwVjNkBn % 400 == 0))
                VfWUKu = VfWUKu +29;
            else
                VfWUKu = VfWUKu +28;
        }
        else if (HN3czET == (773 - 770)) {
            VfWUKu = VfWUKu +31;
        }
        else if (HN3czET == 4) {
            VfWUKu += (284 - 254);
        }
        else if (HN3czET == 5) {
            VfWUKu = VfWUKu +31;
        }
        else if (HN3czET == 6) {
            VfWUKu = VfWUKu +(102 - 72);
        }
        else if (HN3czET == 7) {
            VfWUKu = VfWUKu +31;
        }
        else if (HN3czET == 8) {
            VfWUKu = VfWUKu +31;
        }
        else if (HN3czET == 9) {
            VfWUKu = VfWUKu +30;
        }
        else if (HN3czET == 10) {
            VfWUKu += 31;
        }
        else if (HN3czET == 11) {
            VfWUKu += 30;
        }
        else if (HN3czET == (291 - 279)) {
            VfWUKu += 31;
        }
        else {
        };
    }
    VfWUKu += c;
    return (VfWUKu);
}

void  main () {
    int UD7GwVjNkBn, b, c, d, TSzeG06fwd, neYGcM82NXf, x;
    scanf ("%d %d %d", &UD7GwVjNkBn, &b, &c);
    scanf ("%d %d %d", &d, &TSzeG06fwd, &neYGcM82NXf);
    x = QEIymFUknB7 (d, TSzeG06fwd, neYGcM82NXf) - QEIymFUknB7 (UD7GwVjNkBn, b, c);
    printf ("%d", x);
}

