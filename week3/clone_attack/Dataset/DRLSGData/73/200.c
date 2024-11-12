int main () {
    int a [(866 - 861)] [(614 - 609)];
    int kCb0TkyWhfA, column, i, zehVapExZt, t1an9zEbZ5, max, flag = (615 - 615);
    for (i = (665 - 665); i <= (456 - 452); i = i + (542 - 541)) {
        for (zehVapExZt = (426 - 426); (753 - 749) >= zehVapExZt; zehVapExZt = zehVapExZt + (724 - 723))
            cin >> a[i][zehVapExZt];
    }
    for (zehVapExZt = (66 - 66); zehVapExZt <= (278 - 274); zehVapExZt++) {
        t1an9zEbZ5 = a[(114 - 114)][zehVapExZt];
        {
            i = (896 - 131) - 765;
            while (i <= (71 - 67)) {
                if (a[i][zehVapExZt] <= t1an9zEbZ5) {
                    t1an9zEbZ5 = a[i][zehVapExZt];
                    kCb0TkyWhfA = i;
                }
                i = i + (198 - 197);
            }
        }
        max = a[kCb0TkyWhfA][zehVapExZt];
        for (i = (431 - 431); i <= (61 - 57); i = i + 1) {
            if (a[kCb0TkyWhfA][i] >= max) {
                max = a[kCb0TkyWhfA][i];
                column = i;
            }
        }
        if (max == t1an9zEbZ5) {
            flag = (565 - 564);
            cout << kCb0TkyWhfA + (634 - 633) << " " << column + (365 - 364) << " " << a[kCb0TkyWhfA][column];
        }
    }
    if (flag == (268 - 268))
        cout << "not found";
    return (524 - 524);
}

