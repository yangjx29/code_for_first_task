int main () {
    double  qPEyQ4sVKYm, b, c, Jb4SlU, e, s, S;
    scanf ("%lf\n%lf\n%lf\n%lf\n%lf", &qPEyQ4sVKYm, &b, &c, &Jb4SlU, &e);
    s = (qPEyQ4sVKYm + b + c + Jb4SlU) / 2.0;
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
    if (((s - qPEyQ4sVKYm) * (s - b) * (s - c) * (s - Jb4SlU)) <= 0) {
    }
    else {
        S = sqrt ((s - qPEyQ4sVKYm) * (s - b) * (s - c) * (s - Jb4SlU) - qPEyQ4sVKYm * b * c * Jb4SlU *cos (PI *e / 360.0) * cos (PI *e / 360.0));
        printf ("%.4lf\n", S);
    }
    return 0;
}

