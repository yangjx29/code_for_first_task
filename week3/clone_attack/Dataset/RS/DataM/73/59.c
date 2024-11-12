int main () {
    int j;
    int m [6] [6];
    int sWXn6uDwJtP [6];
    int EuwZ0agSydD [6];
    int x2 [6];
    int pqr86MEaL7JS [6];
    int h [6];
    int l [6];
    int t9sLES8WgHt;
    int k;
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
    int xQ1HaT4l;
    j = 0;
    for (t9sLES8WgHt = (768 - 767); t9sLES8WgHt <= 5; t9sLES8WgHt = t9sLES8WgHt + 1)
        for (k = 1; k <= 5; k = k + 1)
            cin >> m[t9sLES8WgHt][k];
    for (t9sLES8WgHt = 1; t9sLES8WgHt <= 5; t9sLES8WgHt = t9sLES8WgHt + 1) {
        h[t9sLES8WgHt] = m[t9sLES8WgHt][1];
        sWXn6uDwJtP[t9sLES8WgHt] = t9sLES8WgHt;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        EuwZ0agSydD[t9sLES8WgHt] = 1;
        for (k = 1; k <= 5; k = k + 1) {
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
            if (m[t9sLES8WgHt][k] > h[t9sLES8WgHt]) {
                h[t9sLES8WgHt] = m[t9sLES8WgHt][k];
                sWXn6uDwJtP[t9sLES8WgHt] = t9sLES8WgHt;
                EuwZ0agSydD[t9sLES8WgHt] = k;
            };
        };
    }
    for (k = 1; k <= 5; k = k + 1) {
        l[k] = m[1][k];
        x2[k] = 1;
        pqr86MEaL7JS[k] = k;
        for (t9sLES8WgHt = 2; t9sLES8WgHt <= 5; t9sLES8WgHt = t9sLES8WgHt + 1) {
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
            if (m[t9sLES8WgHt][k] < l[k]) {
                l[k] = m[t9sLES8WgHt][k];
                x2[k] = t9sLES8WgHt;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                pqr86MEaL7JS[k] = k;
            };
        };
    }
    for (xQ1HaT4l = 1; xQ1HaT4l <= 5; xQ1HaT4l = xQ1HaT4l + 1) {
        if (h[xQ1HaT4l] == l[EuwZ0agSydD[xQ1HaT4l]])
            if (sWXn6uDwJtP[xQ1HaT4l] == x2[EuwZ0agSydD[xQ1HaT4l]])
                if (EuwZ0agSydD[xQ1HaT4l] == pqr86MEaL7JS[EuwZ0agSydD[xQ1HaT4l]]) {
                    j = j + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    cout << sWXn6uDwJtP[xQ1HaT4l] << " " << EuwZ0agSydD[xQ1HaT4l] << " " << h[xQ1HaT4l];
                };
    }
    if (j == 0)
        cout << "not found" << endl;
    return 0;
}

