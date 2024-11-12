int He6pfEwXQHP [30] [(494 - 483)];

int work (int Xc6Y8eW1x, int n) {
    if (!((541 - 541) != Xc6Y8eW1x) || !((994 - 993) != Xc6Y8eW1x)) {
        He6pfEwXQHP[Xc6Y8eW1x][n] = (694 - 693);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return (926 - 925);
    }
    if (!((136 - 135) != n)) {
        He6pfEwXQHP[Xc6Y8eW1x][n] = (283 - 282);
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
        return (513 - 512);
    }
    if (He6pfEwXQHP[Xc6Y8eW1x][n] != (620 - 620))
        return He6pfEwXQHP[Xc6Y8eW1x][n];
    if (Xc6Y8eW1x >= n) {
        He6pfEwXQHP[Xc6Y8eW1x][n] = work (Xc6Y8eW1x -n, n) + work (Xc6Y8eW1x, n - (995 - 994));
        return He6pfEwXQHP[Xc6Y8eW1x][n];
    }
    else {
        He6pfEwXQHP[Xc6Y8eW1x][n] = work (Xc6Y8eW1x, n - 1);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return He6pfEwXQHP[Xc6Y8eW1x][n];
    };
}

int main () {
    int UlnM7e6O4WU;
    int j;
    int n;
    int Xc6Y8eW1x;
    int FbsSkfZgwxT;
    cin >> FbsSkfZgwxT;
    for (UlnM7e6O4WU = 1; UlnM7e6O4WU <= FbsSkfZgwxT; UlnM7e6O4WU++) {
        cin >> Xc6Y8eW1x >> n;
        cout << work (Xc6Y8eW1x, n) << endl;
    }
    return (624 - 624);
}

