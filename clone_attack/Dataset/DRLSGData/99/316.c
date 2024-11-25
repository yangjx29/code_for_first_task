int main () {
    double  ejCfgpMB = (707 - 707), R0i3pC = 0, c = 0, Z1YlSV2OD7AC = 0;
    int MDjdsUkN, n;
    char MshAobL = '%';
    int GPc2FBd [n];
    cin >> n;
    for (MDjdsUkN = 0; n > MDjdsUkN; MDjdsUkN++) {
        cin >> GPc2FBd[MDjdsUkN];
        if (18 >= GPc2FBd[MDjdsUkN] && 1 <= GPc2FBd[MDjdsUkN])
            ejCfgpMB = ejCfgpMB + 1;
        if (35 >= GPc2FBd[MDjdsUkN] && GPc2FBd[MDjdsUkN] >= 19)
            R0i3pC++;
        if (GPc2FBd[MDjdsUkN] <= 60 && GPc2FBd[MDjdsUkN] >= 36)
            c = c + 1;
        if (GPc2FBd[MDjdsUkN] >= 61)
            Z1YlSV2OD7AC = Z1YlSV2OD7AC +1;
    }
    ejCfgpMB = 100 * ejCfgpMB / n;
    R0i3pC = 100 * R0i3pC / n;
    c = 100 * c / n;
    Z1YlSV2OD7AC = 100 * Z1YlSV2OD7AC / n;
    printf ("1-18: %.2f%c\n19-35: %.2f%c\n36-60: %.2f%c\n60??: %.2f%c", ejCfgpMB, MshAobL, R0i3pC, MshAobL, c, MshAobL, Z1YlSV2OD7AC, MshAobL);
    return 0;
}

