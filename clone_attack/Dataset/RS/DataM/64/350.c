int main () {
    int spot [(95 - 84)] [3], i, j, aLAJWOk, count = (335 - 335), x, vk4KiwZ, z;
    float dis [4951] [3];
    float k;
    cin >> aLAJWOk;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = (227 - 226); i <= aLAJWOk; i = i + 1)
        for (j = (376 - 376); 3 > j; j = j + 1)
            cin >> spot[i][j];
    for (i = (536 - 535); i < aLAJWOk; i = i + 1) {
        j = 444 - 443;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= aLAJWOk) {
            x = spot[i][0] - spot[j][0];
            vk4KiwZ = spot[i][(288 - 287)] - spot[j][1];
            z = spot[i][(560 - 558)] - spot[j][(260 - 258)];
            count = count + 1;
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
            dis[count][0] = sqrt (x * x + vk4KiwZ * vk4KiwZ + z * z);
            dis[count][1] = i;
            dis[count][2] = j;
            j++;
        };
    }
    {
        i = 1;
        while (count > i) {
            for (j = 1; j <= count - i; j = j + 1)
                if (dis[j][0] < dis[j + 1][0]) {
                    k = dis[j][0];
                    dis[j][0] = dis[j + 1][0];
                    dis[j + 1][0] = k;
                    k = dis[j][1];
                    dis[j][1] = dis[j + 1][1];
                    dis[j + 1][1] = k;
                    k = dis[j][2];
                    dis[j][2] = dis[j + 1][2];
                    dis[j + 1][2] = k;
                }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= count) {
            cout << "(" << spot[(int) dis[i][1]][0] << "," << spot[(int) dis[i][1]][1] << "," << spot[(int) dis[i][1]][2] << ")";
            cout << "-";
            cout << "(" << spot[(int) dis[i][2]][0] << "," << spot[(int) dis[i][2]][1] << "," << spot[(int) dis[i][2]][2] << ")";
            printf ("%.2f", dis[i][0]);
            i++;
            cout << "=";
            cout << endl;
        };
    }
    return 0;
}

