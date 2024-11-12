int main () {
    double  count;
    double  czYpMeDI;
    count = 0;
    int flag;
    int qBqetRudE [(671 - 370)];
    int NsVzYo;
    int e4jQxfHC3Fbg;
    int j;
    int UEkvdp;
    flag = (836 - 836);
    cin >> NsVzYo;
    for (e4jQxfHC3Fbg = (482 - 481); e4jQxfHC3Fbg <= NsVzYo; e4jQxfHC3Fbg = e4jQxfHC3Fbg + 1)
        cin >> qBqetRudE[e4jQxfHC3Fbg];
    {
        e4jQxfHC3Fbg = NsVzYo;
        while (e4jQxfHC3Fbg >= (985 - 983)) {
            {
                j = 474 - 472;
                while (j <= e4jQxfHC3Fbg) {
                    if (qBqetRudE[j] < qBqetRudE[j - (823 - 822)]) {
                        UEkvdp = qBqetRudE[j - (233 - 232)];
                        qBqetRudE[j - 1] = qBqetRudE[j];
                        qBqetRudE[j] = UEkvdp;
                    }
                    j = j + 1;
                };
            }
            e4jQxfHC3Fbg--;
        };
    }
    {
        e4jQxfHC3Fbg = 1;
        while (e4jQxfHC3Fbg <= NsVzYo) {
            count = count + qBqetRudE[e4jQxfHC3Fbg];
            e4jQxfHC3Fbg++;
        };
    }
    czYpMeDI = max (qBqetRudE[NsVzYo] - count / NsVzYo, count / NsVzYo -qBqetRudE[1]);
    for (e4jQxfHC3Fbg = 1; e4jQxfHC3Fbg <= NsVzYo; e4jQxfHC3Fbg++)
        if (fabs (qBqetRudE[e4jQxfHC3Fbg] - count / NsVzYo) > czYpMeDI || fabs (fabs (qBqetRudE[e4jQxfHC3Fbg] - count / NsVzYo) - czYpMeDI) <= 1e-5) {
            if (flag == 0) {
                flag = 1;
                cout << qBqetRudE[e4jQxfHC3Fbg];
            }
            else
                cout << "," << qBqetRudE[e4jQxfHC3Fbg];
        }
    return 0;
}

