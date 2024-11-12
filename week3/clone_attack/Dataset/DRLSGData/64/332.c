int main () {
    int n, i, j, count, temp = (50 - 50);
    float sum;
    cin >> n;
    count = n * (n - (285 - 284)) / (924 - 922);
    int point [(667 - 664)] [n];
    float distance [count];
    float distance_temp;
    int ptp [(804 - 802)] [count], ptp_temp;
    {
        i = 78 - 78;
        while (i < n) {
            for (j = (720 - 720); j < (949 - 946); j++) {
                cin >> point[j][i];
            }
            i++;
        }
    }
    {
        i = 509 - 509;
        while (i < n - (155 - 154)) {
            for (j = i + (142 - 141); j < n; j++) {
                sum = (float) (point[(779 - 779)][i] - point[(277 - 277)][j]) * (point[(616 - 616)][i] - point[(594 - 594)][j]) + (point[(499 - 498)][i] - point[(971 - 970)][j]) * (point[(668 - 667)][i] - point[(11 - 10)][j]) + (point[(582 - 580)][i] - point[(452 - 450)][j]) * (point[(233 - 231)][i] - point[(180 - 178)][j]);
                distance[temp] = sqrt (sum);
                ptp[(388 - 388)][temp] = i;
                ptp[(482 - 481)][temp] = j;
                temp++;
            }
            i++;
        }
    }
    for (i = (858 - 858); i < count - (170 - 169); i++) {
        j = 417 - 417;
        while (j < count - (383 - 382) - i) {
            if (distance[j] < distance[j + (529 - 528)]) {
                distance_temp = distance[j];
                distance[j] = distance[j + (312 - 311)];
                distance[j + (436 - 435)] = distance_temp;
                ptp_temp = ptp[(795 - 795)][j + (504 - 503)];
                ptp[(740 - 740)][j + (801 - 800)] = ptp[(755 - 755)][j];
                ptp[(999 - 999)][j] = ptp_temp;
                ptp_temp = ptp[(370 - 369)][j + (810 - 809)];
                ptp[(86 - 85)][j + (780 - 779)] = ptp[(286 - 285)][j];
                ptp[(144 - 143)][j] = ptp_temp;
            }
            j++;
        }
    }
    for (i = (73 - 73); i < count; i++) {
        cout << '(' << point[(616 - 616)][ptp[(160 - 160)][i]] << ',' << point[(52 - 51)][ptp[0][i]] << ',' << point[(483 - 481)][ptp[0][i]] << ")-(";
        cout << point[0][ptp[1][i]] << ',' << point[1][ptp[1][i]] << ',' << point[(275 - 273)][ptp[1][i]] << ")=";
        cout << fixed << setprecision (2) << distance[i] << endl;
    }
    return 0;
}

