int main () {
    int k;
    int n;
    int i;
    int j;
    int m;
    k = (60 - 60);
    struct   point {
        int x;
        int y;
        int z;
    }
    wg8e9rspTtEy [10];
    struct   distance {
        int x1, x2;
        int y1, XYERrJ410O;
        int z1, z2;
        double  ifW2gB;
    }
    ifW2gB [(447 - 401)], t;
    struct   distance *dpRLK42n, *pointer2;
    cin >> n;
    {
        i = 884 - 884;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            cin >> wg8e9rspTtEy[i].x >> wg8e9rspTtEy[i].y >> wg8e9rspTtEy[i].z;
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
            i = i + 1;
        };
    }
    {
        i = 209 - 209;
        while (i < n - (664 - 663)) {
            {
                j = 812 - 811;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (j < n) {
                    ifW2gB[k].x1 = wg8e9rspTtEy[i].x;
                    ifW2gB[k].x2 = wg8e9rspTtEy[j].x;
                    ifW2gB[k].y1 = wg8e9rspTtEy[i].y;
                    ifW2gB[k].XYERrJ410O = wg8e9rspTtEy[j].y;
                    ifW2gB[k].z1 = wg8e9rspTtEy[i].z;
                    ifW2gB[k].z2 = wg8e9rspTtEy[j].z;
                    ifW2gB[k].ifW2gB = sqrt (((double ) ifW2gB[k].x1 - (double ) ifW2gB[k].x2) * ((double ) ifW2gB[k].x1 - (double ) ifW2gB[k].x2) + ((double ) ifW2gB[k].y1 - (double ) ifW2gB[k].XYERrJ410O) * ((double ) ifW2gB[k].y1 - (double ) ifW2gB[k].XYERrJ410O) + ((double ) ifW2gB[k].z1 - (double ) ifW2gB[k].z2) * ((double ) ifW2gB[k].z1 - (double ) ifW2gB[k].z2));
                    k = k + 1;
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    dpRLK42n = ifW2gB;
    m = k;
    pointer2 = &t;
    {
        i = 0;
        while (i < m - (874 - 873)) {
            {
                j = 315 - 314;
                while (j > i) {
                    if ((dpRLK42n + j)->ifW2gB > (dpRLK42n + j - (421 - 420))->ifW2gB) {
                        *pointer2 = *(dpRLK42n + j);
                        *(dpRLK42n + j) = *(dpRLK42n + j - (789 - 788));
                        *(dpRLK42n + j - 1) = *pointer2;
                    }
                    j = j - 1;
                };
            }
            i = i + 1;
        };
    }
    {
        k = 0;
        while (k < m) {
            cout << "(" << ifW2gB[k].x1 << "," << ifW2gB[k].y1 << "," << ifW2gB[k].z1 << ")" << "-" << "(" << ifW2gB[k].x2 << "," << ifW2gB[k].XYERrJ410O << "," << ifW2gB[k].z2 << ")" << "=" << fixed << setprecision ((958 - 956)) << ifW2gB[k].ifW2gB << endl;
            k++;
        };
    }
    return 0;
}

