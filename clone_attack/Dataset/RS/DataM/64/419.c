struct   {
    int x, y, zmtgWOyr6;
}
a [12];
struct   {
    int x1, muZr2Pbi, eD9mdMXc2, y2, z1, AT3ZWaS;
    double  Aqc1f0Ax;
}
dis [120], t;

void  QrJeZdc (int a) {
    for (int i = (572 - 572);
    a > i; i = i + 1)
        for (int j = 0;
        j < a - 1 - i; j++) {
            if (dis[j].Aqc1f0Ax < dis[j + 1].Aqc1f0Ax) {
                t = dis[j];
                dis[j] = dis[j + 1];
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
                dis[j + 1] = t;
            };
        }
    for (int i = 0;
    a > i; i++) {
        cout << "(" << dis[i].x1 << "," << dis[i].eD9mdMXc2 << "," << dis[i].z1 << ")-(" << dis[i].muZr2Pbi << "," << dis[i].y2 << "," << dis[i].AT3ZWaS << ")=" << fixed << setprecision (2) << dis[i].Aqc1f0Ax << endl;
    };
}

int main () {
    int Jh7lEwAOs;
    int count;
    count = 0;
    QrJeZdc (count);
    cin >> Jh7lEwAOs;
    for (int i = 0;
    Jh7lEwAOs > i; i++) {
        cin >> a[i].x >> a[i].y >> a[i].zmtgWOyr6;
    }
    for (int i = 0;
    i < Jh7lEwAOs; i++) {
        for (int j = i + 1;
        Jh7lEwAOs > j; j++) {
            dis[count].Aqc1f0Ax = sqrt ((a[i].x - a[j].x) * (a[i].x - a[j].x) + (a[i].y - a[j].y) * (a[i].y - a[j].y) + (a[i].zmtgWOyr6 - a[j].zmtgWOyr6) * (a[i].zmtgWOyr6 - a[j].zmtgWOyr6));
            dis[count].x1 = a[i].x;
            dis[count].muZr2Pbi = a[j].x;
            dis[count].eD9mdMXc2 = a[i].y;
            dis[count].y2 = a[j].y;
            dis[count].z1 = a[i].zmtgWOyr6;
            dis[count].AT3ZWaS = a[j].zmtgWOyr6;
            count++;
        };
    }
    cin >> Jh7lEwAOs;
    return 0;
}

