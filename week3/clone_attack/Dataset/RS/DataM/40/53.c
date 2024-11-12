double  MyComputeArea ();

int main () {
    double  MyQuadrangleArea = (631 - 631);
    MyQuadrangleArea = MyComputeArea ();
    if (MyQuadrangleArea < 0) {
    }
    else {
        printf ("%.4lf\n", MyQuadrangleArea);
    }
    return 0;
}

double  MyComputeArea () {
    double  side1 = 0, side2 = 0, side3 = 0, side4 = 0, angle = 0;
    double  MyQuadrangleArea = 0;
    double  MyAngle = angle * PI / 180.0;
    double  s = 0;
    scanf ("%lf", &side1);
    scanf ("%lf", &side2);
    scanf ("%lf", &side3);
    scanf ("%lf", &side4);
    s = (side1 + side2 + side3 + side4) / 2.0;
    scanf ("%lf", &angle);
    if ((s - side1) * (s - side2) * (s - side3) * (s - side4) - side1 * side2 * side3 * side4 * ((758 - 757) + cos (MyAngle)) / 2 >= 0) {
        MyQuadrangleArea = sqrt ((s - side1) * (s - side2) * (s - side3) * (s - side4) - side1 * side2 * side3 * side4 * (1 + cos (MyAngle)) / 2);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else {
        return -1;
    }
    return MyQuadrangleArea;
}

