int main () {
    int uKbY9tmawQI [6] [6], x, FHAwoDSjvK, max [6] = {(274 - 274)}, maxx [6], tNSosYRwKc61 [6], yy, N8ETFI4X;
    {
        FHAwoDSjvK = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (FHAwoDSjvK <= 5) {
            {
                x = 1;
                while (5 >= x) {
                    cin >> uKbY9tmawQI[x][FHAwoDSjvK];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    x++;
                };
            }
            FHAwoDSjvK = FHAwoDSjvK +1;
        };
    }
    {
        FHAwoDSjvK = 1;
        while (FHAwoDSjvK <= 5) {
            {
                x = 1;
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
                while (x <= 5) {
                    if (uKbY9tmawQI[x][FHAwoDSjvK] > max[FHAwoDSjvK]) {
                        max[FHAwoDSjvK] = uKbY9tmawQI[x][FHAwoDSjvK];
                        maxx[FHAwoDSjvK] = x;
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
                        tNSosYRwKc61[FHAwoDSjvK] = FHAwoDSjvK;
                    }
                    x++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            FHAwoDSjvK = FHAwoDSjvK +1;
        };
    }
    {
        FHAwoDSjvK = 1;
        while (FHAwoDSjvK <= 5) {
            {
                yy = 1;
                while (yy <= 5) {
                    if (max[FHAwoDSjvK] > uKbY9tmawQI[maxx[FHAwoDSjvK]][yy]) {
                        max[FHAwoDSjvK] = 0;
                        break;
                    }
                    yy = yy + 1;
                };
            }
            FHAwoDSjvK = FHAwoDSjvK +1;
        };
    }
    N8ETFI4X = 1;
    {
        FHAwoDSjvK = 1;
        while (FHAwoDSjvK <= 5) {
            if (max[FHAwoDSjvK] != 0) {
                cout << tNSosYRwKc61[FHAwoDSjvK] << " " << maxx[FHAwoDSjvK] << " " << max[FHAwoDSjvK];
                N8ETFI4X = 0;
            }
            FHAwoDSjvK++;
        };
    }
    if (N8ETFI4X == 1)
        cout << "not found" << endl;
    return 0;
}

