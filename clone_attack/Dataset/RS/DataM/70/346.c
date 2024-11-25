struct   dian {
    double  x;
    double  UInjzLByD;
}
dian [(547 - 447)];

int main () {
    int n;
    int xm, VenR3a;
    double  d, dmax = 0.0000;
    cin >> n;
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
    {
        int bRnqaKMNlZ = (735 - 735);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > bRnqaKMNlZ) {
            cin >> dian[bRnqaKMNlZ].x >> dian[bRnqaKMNlZ].UInjzLByD;
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
            bRnqaKMNlZ = bRnqaKMNlZ + 1;
        };
    }
    {
        int bRnqaKMNlZ = 0;
        while (bRnqaKMNlZ < n - (308 - 307)) {
            {
                int KujTnSXgAs3 = 1;
                while (n > KujTnSXgAs3) {
                    d = (dian[bRnqaKMNlZ].x - dian[KujTnSXgAs3].x) * (dian[bRnqaKMNlZ].x - dian[KujTnSXgAs3].x) + (dian[bRnqaKMNlZ].UInjzLByD - dian[KujTnSXgAs3].UInjzLByD) * (dian[bRnqaKMNlZ].UInjzLByD - dian[KujTnSXgAs3].UInjzLByD);
                    KujTnSXgAs3 = KujTnSXgAs3 +1;
                    d = sqrt (d);
                    if (d > dmax)
                        dmax = d;
                };
            }
            bRnqaKMNlZ++;
        };
    }
    printf ("%.4f\n", dmax);
    return 0;
}

