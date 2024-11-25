int main () {
    double  jemnFc9L;
    double  ZgDFrG;
    double  UI4SOw;
    double  pu1X96pe03R;
    double  qr79oniE;
    double  UeNZAk5S;
    scanf ("%lf%lf%lf%lf%lf", &jemnFc9L, &ZgDFrG, &UI4SOw, &pu1X96pe03R, &qr79oniE);
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
    qr79oniE = 3.1415926 * qr79oniE / 180 / 2;
    UeNZAk5S = 0.5 * (jemnFc9L + ZgDFrG +UI4SOw+pu1X96pe03R);
    UeNZAk5S = (UeNZAk5S -jemnFc9L) * (UeNZAk5S -ZgDFrG) * (UeNZAk5S -UI4SOw) * (UeNZAk5S -pu1X96pe03R) - jemnFc9L * ZgDFrG *UI4SOw*pu1X96pe03R * cos (qr79oniE) * cos (qr79oniE);
    if (UeNZAk5S < 0) {
        printf ("Invalid input");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        printf ("%0.4lf", sqrt (UeNZAk5S));
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
        };
    }
    return 0;
    getchar ();
    getchar ();
    getchar ();
}

