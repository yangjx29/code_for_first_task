int main () {
    double  x [(326 - 226)], y [100];
    int num;
    double  dis [100] [100] = {(308 - 308),};
    double  temp_dis = 0;
    cin >> num;
    for (int i = 1;
    i <= num; i++) {
        cin >> x[i] >> y[i];
    }
    {
        int i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (i < num) {
            for (int j = i + 1;
            j <= num; j++) {
                dis[i][j] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
                if (temp_dis < dis[i][j])
                    temp_dis = dis[i][j];
            }
            i++;
        };
    }
    cout << fixed << setprecision (4) << temp_dis << endl;
    return 0;
}

