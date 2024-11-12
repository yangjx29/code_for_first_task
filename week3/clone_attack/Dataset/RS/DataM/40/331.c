int main () {
    double  gvVhJCO, s;
    double  Cgo30eSZT;
    double  a;
    double  b;
    double  zFiqzSy8r;
    double  x1atH8Jw7DM;
    double  de;
    scanf ("%lf %lf %lf %lf %lf", &a, &b, &zFiqzSy8r, &x1atH8Jw7DM, &de);
    s = (a + b + zFiqzSy8r + x1atH8Jw7DM) / 2;
    Cgo30eSZT = (de / 2) * PI / 180;
    gvVhJCO = sqrt ((s - a) * (s - b) * (s - zFiqzSy8r) * (s - x1atH8Jw7DM) - a * b * zFiqzSy8r * x1atH8Jw7DM * cos (Cgo30eSZT) * cos (Cgo30eSZT));
    if ((s - a) * (s - b) * (s - zFiqzSy8r) * (s - x1atH8Jw7DM) >= 0)
        printf ("%.4f\n", gvVhJCO);
    else
        printf ("Invalid input");
    return 0;
}

