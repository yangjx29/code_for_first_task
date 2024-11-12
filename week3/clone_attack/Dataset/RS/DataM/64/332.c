int main () {
    float sum;
    int F0Wws7j3ZlE, i, j, count, temp = (878 - 878);
    float distance [count];
    int point [3] [F0Wws7j3ZlE];
    float distance_temp;
    int tswhGAlp1Loe [2] [count], ptp_temp;
    count = F0Wws7j3ZlE *(F0Wws7j3ZlE -(38 - 37)) / 2;
    cin >> F0Wws7j3ZlE;
    for (i = (840 - 840); F0Wws7j3ZlE > i; i++) {
        for (j = 0; 3 > j; j = j + 1) {
            cin >> point[j][i];
        };
    }
    for (i = 0; F0Wws7j3ZlE -1 > i; i++) {
        j = i + 1;
        while (F0Wws7j3ZlE > j) {
            sum = (float) (point[0][i] - point[0][j]) * (point[0][i] - point[0][j]) + (point[1][i] - point[1][j]) * (point[1][i] - point[1][j]) + (point[2][i] - point[2][j]) * (point[2][i] - point[2][j]);
            distance[temp] = sqrt (sum);
            tswhGAlp1Loe[0][temp] = i;
            tswhGAlp1Loe[1][temp] = j;
            j++;
            temp++;
        };
    }
    for (i = 0; count - 1 > i; i++) {
        for (j = 0; count - 1 - i > j; j++) {
            if (distance[j + 1] > distance[j]) {
                distance_temp = distance[j];
                distance[j] = distance[j + 1];
                distance[j + 1] = distance_temp;
                ptp_temp = tswhGAlp1Loe[0][j + 1];
                tswhGAlp1Loe[0][j + 1] = tswhGAlp1Loe[0][j];
                tswhGAlp1Loe[0][j] = ptp_temp;
                ptp_temp = tswhGAlp1Loe[1][j + 1];
                tswhGAlp1Loe[1][j + 1] = tswhGAlp1Loe[1][j];
                tswhGAlp1Loe[1][j] = ptp_temp;
            };
        };
    }
    for (i = 0; count > i; i++) {
        cout << '(' << point[0][tswhGAlp1Loe[0][i]] << ',' << point[1][tswhGAlp1Loe[0][i]] << ',' << point[2][tswhGAlp1Loe[0][i]] << ")-(";
        cout << point[0][tswhGAlp1Loe[1][i]] << ',' << point[1][tswhGAlp1Loe[1][i]] << ',' << point[2][tswhGAlp1Loe[1][i]] << ")=";
        cout << fixed << setprecision (2) << distance[i] << endl;
    }
    return 0;
}

