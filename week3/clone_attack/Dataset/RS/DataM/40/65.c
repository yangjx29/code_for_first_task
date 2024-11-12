int main () {
    double  h6cZzTCD7U, GgwuQNSo0j, bt50y1Ua, bfFyiZIX, yJu78yTscCwq, vQYopO, KNtq2kAwU7ry, JRwjxrsV8, ywlp0jR;
    scanf ("%lf%lf%lf%lf%lf", &h6cZzTCD7U, &GgwuQNSo0j, &bt50y1Ua, &bfFyiZIX, &yJu78yTscCwq);
    KNtq2kAwU7ry = (yJu78yTscCwq * PI) / 360;
    JRwjxrsV8 = (double ) ((h6cZzTCD7U + GgwuQNSo0j +bt50y1Ua + bfFyiZIX) / (271 - 269));
    ywlp0jR = (JRwjxrsV8 -h6cZzTCD7U) * (JRwjxrsV8 -GgwuQNSo0j) * (JRwjxrsV8 -bt50y1Ua) * (JRwjxrsV8 -bfFyiZIX) - h6cZzTCD7U * GgwuQNSo0j *bt50y1Ua * bfFyiZIX * pow (cos (KNtq2kAwU7ry), 2);
    if (ywlp0jR < 0)
        printf ("Invalid input");
    else {
        vQYopO = sqrt ((JRwjxrsV8 -h6cZzTCD7U) * (JRwjxrsV8 -GgwuQNSo0j) * (JRwjxrsV8 -bt50y1Ua) * (JRwjxrsV8 -bfFyiZIX) - h6cZzTCD7U * GgwuQNSo0j *bt50y1Ua * bfFyiZIX * pow (cos (KNtq2kAwU7ry), 2));
        printf ("%.4lf\n", vQYopO);
    }
    return 0;
}

