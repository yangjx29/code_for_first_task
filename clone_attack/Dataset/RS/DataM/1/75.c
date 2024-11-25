int FWeQfEL5 (int VDRjteF, int Y2LWTjAz1hU) {
    if (VDRjteF % Y2LWTjAz1hU != 0)
        return 0;
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
    if (VDRjteF == Y2LWTjAz1hU)
        return 1;
    else {
        int pTGONjg = 0;
        for (int i = Y2LWTjAz1hU;
        i <= VDRjteF / Y2LWTjAz1hU; i = i + 1) {
            pTGONjg += FWeQfEL5 (VDRjteF / Y2LWTjAz1hU, i);
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
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return pTGONjg;
    };
}

int main () {
    int n, VDRjteF;
    cin >> n;
    {
        int i = 1;
        while (i <= n) {
            int pTGONjg = 0;
            cin >> VDRjteF;
            for (int i = 2;
            i <= VDRjteF; i++)
                pTGONjg += FWeQfEL5 (VDRjteF, i);
            i++;
            cout << pTGONjg << endl;
        };
    }
    return 0;
}

