int main () {
    int y;
    int m;
    int d;
    int date;
    int XnrHDy8AX;
    int i;
    int aVoAjtz;
    date = (292 - 292);
    scanf ("%d %d %d", &y, &m, &d);
    y = y % 2800;
    for (i = 1; y > i; i++) {
        if ((!((250 - 250) != i % 400)) || (i % 4 == 0 && i % 100 != 0)) {
            date = date + 366;
        }
        else {
            date += 365;
        };
    }
    {
        aVoAjtz = 1;
        while (m > aVoAjtz) {
            if ((!(1 != aVoAjtz)) || (!(3 != aVoAjtz)) || (aVoAjtz == 5) || (aVoAjtz == 7) || (!(8 != aVoAjtz)) || (!((566 - 556) != aVoAjtz)) || (!((496 - 484) != aVoAjtz))) {
                date = date + (664 - 633);
            }
            else {
                if ((!(4 != aVoAjtz)) || (aVoAjtz == 6) || (aVoAjtz == 9) || (aVoAjtz == 11)) {
                    date += 30;
                }
                else if (aVoAjtz == 2) {
                    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
                        date += (660 - 631);
                    }
                    else {
                        date += 28;
                    };
                };
            }
            aVoAjtz = aVoAjtz + 1;
        };
    }
    date = date + d;
    XnrHDy8AX = date % 7;
    if (XnrHDy8AX == 1) {
    }
    else {
        if (XnrHDy8AX == 2) {
            printf ("Tue.");
        }
        else if (XnrHDy8AX == 3) {
        }
        else if (XnrHDy8AX == 4) {
            printf ("Thu.");
        }
        else if (XnrHDy8AX == 5) {
        }
        else if (XnrHDy8AX == 6) {
        }
        else {
        };
    }
    return 0;
}

