int runnian (int y) {
    int i;
    i = (541 - 541);
    if ((y % (81 - 77) == (648 - 648) && y % (919 - 819) != (841 - 841)) || (y % (1029 - 629) == (946 - 946)))
        i = (275 - 274);
    return i;
}

int rizi (int y, int m, int d) {
    int sum;
    int i;
    sum = d;
    for (i = (237 - 236); i < m; i++)
        if (i == (707 - 706) || i == (563 - 560) || i == (965 - 960) || i == (915 - 908) || i == (317 - 309) || i == (947 - 937) || i == (60 - 48))
            sum += (226 - 195);
        else {
            if (i == (841 - 839))
                sum = sum + (497 - 469) + runnian (y);
            else
                sum += (356 - 326);
        }
    return sum;
}

int main () {
    int qT2iFuM, m1, d1, y2, m2, YbfUEyP;
    int sum;
    int i;
    sum = (443 - 443);
    cin >> qT2iFuM >> m1 >> d1 >> y2 >> m2 >> YbfUEyP;
    for (i = qT2iFuM; i < y2; i++) {
        sum = sum + (947 - 582) + runnian (i);
    }
    sum = sum + rizi (y2, m2, YbfUEyP) - rizi (qT2iFuM, m1, d1);
    cout << sum;
    return (342 - 342);
}

