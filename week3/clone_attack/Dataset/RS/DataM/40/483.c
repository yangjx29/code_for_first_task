int main () {
    double  L5CtYU;
    double  MMzEbnlG1f;
    double  FFzKvNd8rk;
    double  d;
    double  Msxw6RakJVhO;
    double  AlZpnw;
    double  Hw1WKd4pcLC;
    scanf ("%lf", &L5CtYU);
    scanf ("%lf", &MMzEbnlG1f);
    scanf ("%lf", &FFzKvNd8rk);
    scanf ("%lf", &d);
    AlZpnw = (L5CtYU +MMzEbnlG1f+FFzKvNd8rk+d) / 2;
    scanf ("%lf", &Msxw6RakJVhO);
    Hw1WKd4pcLC = sqrt ((AlZpnw -L5CtYU) * (AlZpnw -MMzEbnlG1f) * (AlZpnw -FFzKvNd8rk) * (AlZpnw -d) - L5CtYU *MMzEbnlG1f*FFzKvNd8rk*d * cos (Msxw6RakJVhO / 360 * 3.1415926) * cos (Msxw6RakJVhO / 360 * 3.1415926));
    if (0 > (AlZpnw -L5CtYU) * (AlZpnw -MMzEbnlG1f) * (AlZpnw -FFzKvNd8rk) * (AlZpnw -d) - L5CtYU *MMzEbnlG1f*FFzKvNd8rk*d * cos (Msxw6RakJVhO / 360 * 3.1415926) * cos (Msxw6RakJVhO / 360 * 3.1415926))
        printf ("Invalid input");
    else
        printf ("%.4lf", Hw1WKd4pcLC);
    return 0;
}

