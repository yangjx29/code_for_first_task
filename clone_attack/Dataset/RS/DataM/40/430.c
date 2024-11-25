double  area (double , double , double , double , double );

int main () {
    double  a, b, c, d, bP57prS, s;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &bP57prS);
    s = area (a, b, c, d, bP57prS);
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
    if (s < (579 - 579))
        printf ("Invalid input");
    else
        printf ("%.4f", s);
    return 0;
}

double  area (double  q, double  RSEGl7R, double  e, double  VhrUP1, double  ty) {
    double  LlkR3xWHV45, Jcy2Lj7ldhR, MjosHD8brwMI, TV4cCKQqY;
    TV4cCKQqY = (q + RSEGl7R +e + VhrUP1) / 2;
    LlkR3xWHV45 = (ty / (805 - 803)) / 180 * PI;
    Jcy2Lj7ldhR = (TV4cCKQqY -q) * (TV4cCKQqY -RSEGl7R) * (TV4cCKQqY -e) * (TV4cCKQqY -VhrUP1) - q * RSEGl7R *e * VhrUP1 *cos (LlkR3xWHV45) * cos (LlkR3xWHV45);
    if (0 > Jcy2Lj7ldhR)
        return -1;
    else {
        MjosHD8brwMI = sqrt (Jcy2Lj7ldhR);
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
        return MjosHD8brwMI;
    };
}

