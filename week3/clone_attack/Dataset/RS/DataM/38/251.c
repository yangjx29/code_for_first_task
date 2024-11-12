int main () {
    double  dK8y3SR56dGV [(557 - 457)];
    double  RSXLTRxkZ6mC = (491 - 491), dHVRaxqrd = (969 - 969);
    int qGW9v7MQEf = (196 - 196);
    int y1DiR9;
    scanf ("%d", &y1DiR9);
    for (int kglvIYNGu = 0;
    kglvIYNGu < y1DiR9; kglvIYNGu++) {
        scanf ("%d", &qGW9v7MQEf);
        for (int hzC9Lx = 0;
        hzC9Lx < qGW9v7MQEf; hzC9Lx = hzC9Lx + 1) {
            scanf ("%lf", &(dK8y3SR56dGV[hzC9Lx]));
            RSXLTRxkZ6mC = RSXLTRxkZ6mC +dK8y3SR56dGV[hzC9Lx];
        }
        for (int AgYMKdCqZ5 = 0;
        qGW9v7MQEf > AgYMKdCqZ5; AgYMKdCqZ5 = AgYMKdCqZ5 +1) {
            dHVRaxqrd = dHVRaxqrd + (dK8y3SR56dGV[AgYMKdCqZ5] - RSXLTRxkZ6mC / qGW9v7MQEf) * (dK8y3SR56dGV[AgYMKdCqZ5] - RSXLTRxkZ6mC / qGW9v7MQEf);
        }
        RSXLTRxkZ6mC = 0;
        dHVRaxqrd = dHVRaxqrd / qGW9v7MQEf;
        dHVRaxqrd = pow (dHVRaxqrd, 0.5);
        printf ("%0.5lf\n", dHVRaxqrd);
        dHVRaxqrd = 0;
    }
    return 0;
}

