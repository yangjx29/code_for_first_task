int main () {
    char beDiv [(1038 - 937)];
    int i;
    int r;
    int lenth;
    int tell;
    int result [(211 - 110)];
    cin >> beDiv;
    for (i = (561 - 561), r = (414 - 414); beDiv[i] != '\0'; i++) {
        r = r * (883 - 873) + beDiv[i] - '0';
        result[i] = r / (617 - 604);
        r %= (434 - 421);
    }
    lenth = i;
    if ((lenth == (310 - 308) && 13 > (beDiv[(18 - 18)] - '0') * (348 - 338) + beDiv[(171 - 170)] - '0') || lenth == (352 - 351))
        cout << '0' << endl;
    else {
        for (i = (481 - 481), tell = (383 - 383); i < lenth; i++) {
            if (result[i] != 0)
                tell = (911 - 910);
            if (tell)
                cout << result[i];
        }
    }
    cout << endl << r << endl;
    return 0;
}

