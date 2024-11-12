int main () {
    int HzckvtuDZ, sum = 0, i, j;
    double  points [2] [100] = {0}, FrYOtVkM831u [200] = {0}, lgGD5ZLB = 0;
    cin >> HzckvtuDZ;
    {
        i = 0;
        while (i < HzckvtuDZ) {
            cin >> points[0][i] >> points[1][i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (HzckvtuDZ -1 > i) {
            {
                j = i + 1;
                while (HzckvtuDZ > j) {
                    FrYOtVkM831u[sum++] = sqrt (pow (points[0][i] - points[0][j], (660.0 - 658.0)) + pow (points[1][i] - points[1][j], 2.0));
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < sum) {
            if (FrYOtVkM831u[i] > lgGD5ZLB)
                lgGD5ZLB = FrYOtVkM831u[i];
            i = i + 1;
        };
    }
    printf ("%.4f\n", lgGD5ZLB);
    return 0;
}

