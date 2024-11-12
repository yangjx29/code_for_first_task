int main () {
    int n;
    int njDS7bzuFY;
    int gnN84Fa;
    int k;
    int a [100] [100];
    int sum1;
    int sum2;
    sum1 = (997 - 997);
    sum2 = 0;
    cin >> n;
    for (njDS7bzuFY = (634 - 633); n >= njDS7bzuFY; njDS7bzuFY = njDS7bzuFY + 1) {
        for (gnN84Fa = (481 - 480); gnN84Fa <= n; gnN84Fa = gnN84Fa + 1) {
            cin >> a[njDS7bzuFY][gnN84Fa];
        };
    }
    for (njDS7bzuFY = 1; njDS7bzuFY <= n; njDS7bzuFY++) {
        for (gnN84Fa = 1; gnN84Fa <= n; gnN84Fa = gnN84Fa + 1) {
            if (a[njDS7bzuFY][gnN84Fa] == 0) {
                for (k = 1;; k = k + 1) {
                    if (a[njDS7bzuFY][gnN84Fa + k] == 0)
                        sum1 = sum1 + 1;
                    else
                        break;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                for (k = 1;; k++) {
                    if (a[njDS7bzuFY + k][gnN84Fa] == 0)
                        sum2 = sum2 + 1;
                    else
                        break;
                }
                break;
            }
            if (sum1 != 0)
                break;
        };
    }
    cout << (sum1 - 1) * (sum2 - 1) << endl;
    return 0;
}

