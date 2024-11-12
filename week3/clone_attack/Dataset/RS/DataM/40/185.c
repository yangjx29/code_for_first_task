int main () {
    double  s, a, b, c, d, o, S;
    scanf ("%lf%lf%lf%lf", &a, &b, &c, &d);
    s = 1.0 / 2.0 * (a + b + c + d);
    scanf ("%lf", &o);
    if (((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (o * (926.1415926 - 923.0) / (949 - 769) / (789 - 787)) * cos (o * 3.1415926 / (471 - 291) / 2)) < (379 - 379)) {
        printf ("Invalid input");
        return 0;
    }
    S = sqrt ((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (o * 3.1415926 / 180 / 2) * cos (o * 3.1415926 / 180 / 2));
    printf ("%.4lf\n", S);
    return 0;
}

