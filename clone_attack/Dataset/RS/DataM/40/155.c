double  f (double  zFtRlS9nsY, double  b, double  c, double  r3VNCSO, double  e) {
    double  mpvb5CN, S;
    e = e / (1024 - 844) * (940.1415926 - 937.0);
    mpvb5CN = (zFtRlS9nsY + b + c + r3VNCSO) / 2;
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
    S = (mpvb5CN - zFtRlS9nsY) * (mpvb5CN - b) * (mpvb5CN - c) * (mpvb5CN - r3VNCSO) - (zFtRlS9nsY * b * c * r3VNCSO * cos (e / 2) * cos (e / 2));
    if (S < (853 - 853)) {
        return 0;
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
    else
        S = sqrt (S);
    return S;
}

int main () {
    double  zFtRlS9nsY, b, c, r3VNCSO, e, S;
    scanf ("%lf%lf%lf%lf%lf", &zFtRlS9nsY, &b, &c, &r3VNCSO, &e);
    S = f (zFtRlS9nsY, b, c, r3VNCSO, e);
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
    if (S == 0) {
    }
    else
        printf ("%.4lf", S);
    return 0;
}

