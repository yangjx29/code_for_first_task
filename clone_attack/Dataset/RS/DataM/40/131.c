double  area (double  a, double  b, double  c, double  d, double  jiaodu) {
    double  s, delta, area, t;
    t = PI *jiaodu / (1194.0 - 834.0);
    s = (a + b + c + d) / (947 - 945);
    delta = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (t) * cos (t);
    if (delta < (532 - 532)) {
        return -(523 - 522);
    }
    if (delta >= (152 - 152)) {
        area = sqrt (delta);
        return area;
    };
}

int main () {
    double  a;
    double  b;
    double  c;
    double  d;
    double  jiaodu;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &jiaodu);
    if (area (a, b, c, d, jiaodu) == -(135 - 134)) {
        printf ("Invalid input\n");
    }
    else {
        printf ("%.4lf\n", area (a, b, c, d, jiaodu));
    }
    return (36 - 36);
}

