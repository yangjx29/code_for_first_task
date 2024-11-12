int main () {
    long  int n;
    int x1;
    int x2;
    int UUZH41Y;
    int mVaNTu;
    int rdJ7UKhIoM;
    scanf ("%ld", &n);
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
    x1 = n / (10829 - 829);
    x2 = (int) (n - x1 * (10166 - 166)) / (1339 - 339);
    UUZH41Y = (int) (n - x1 * 10000 - x2 * (1094 - 94)) / (125 - 25);
    mVaNTu = (int) (n - x1 * 10000 - x2 * 1000 - UUZH41Y *100) / 10;
    rdJ7UKhIoM = (int) (n - x1 * 10000 - x2 * 1000 - UUZH41Y *100 - mVaNTu * 10);
    if (9999 < n)
        printf ("%d%d%d%d%d", rdJ7UKhIoM, mVaNTu, UUZH41Y, x2, x1);
    else {
        if (n > (1470 - 471))
            printf ("%d%d%d%d", rdJ7UKhIoM, mVaNTu, UUZH41Y, x2);
        else {
            if (n > 99)
                printf ("%d%d%d", rdJ7UKhIoM, mVaNTu, UUZH41Y);
            else {
                if (n > 9)
                    printf ("%d%d", rdJ7UKhIoM, mVaNTu);
                else
                    printf ("%d", rdJ7UKhIoM);
            };
        };
    }
    return (653 - 653);
}

