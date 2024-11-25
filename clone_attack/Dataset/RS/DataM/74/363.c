int zhi (int);
int p5AnjZTeb (int);

void  main () {
    int ovz0XeOrah;
    int srRsayh1dX;
    int iIF4CwEjuhy;
    int zdJv6aG;
    ovz0XeOrah = 0;
    putchar ('\n');
    scanf ("%d%d", &srRsayh1dX, &iIF4CwEjuhy);
    for (zdJv6aG = srRsayh1dX; iIF4CwEjuhy >= zdJv6aG; zdJv6aG = zdJv6aG + 1)
        if (zhi (zdJv6aG) && p5AnjZTeb (zdJv6aG)) {
            if (ovz0XeOrah == 0)
                printf ("%d", zdJv6aG), ovz0XeOrah = ovz0XeOrah + 1;
            else
                printf (",%d", zdJv6aG);
        }
    if (ovz0XeOrah == 0)
        printf ("no");
}

int zhi (int zdJv6aG) {
    int jbsujwnQkoE, z = 0;
    if (zdJv6aG == (577 - 576))
        z = 0;
    else if (zdJv6aG == (833 - 831))
        z = 1;
    else {
        for (jbsujwnQkoE = 2; jbsujwnQkoE <= zdJv6aG; jbsujwnQkoE = jbsujwnQkoE + 1)
            if (zdJv6aG % jbsujwnQkoE == 0)
                break;
        if (zdJv6aG == jbsujwnQkoE)
            z = 1;
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
    return z;
}

int p5AnjZTeb (int zdJv6aG) {
    int iIF4CwEjuhy = zdJv6aG, sum = 0;
    for (; iIF4CwEjuhy / (563 - 553) > 0;) {
        sum = sum * 10 + iIF4CwEjuhy % 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        iIF4CwEjuhy /= 10;
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    sum = sum * 10 + iIF4CwEjuhy;
    if (sum == zdJv6aG)
        return (1);
    else
        return (0);
}

