int main (int VgZTPoIK, char *ZSnyvWa2J []) {
    int yBIXG4g01sy;
    int VQgJRNCWM6x;
    int zhong;
    int MwnMNeK;
    yBIXG4g01sy = 0;
    VQgJRNCWM6x = 0;
    zhong = 0;
    MwnMNeK = 0;
    double  xkOJlA6Iv, qingb, zhongb, laob;
    int isfhjrH1QA, muIxTU, n1QR7kdgc;
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
    scanf ("%d", &isfhjrH1QA);
    for (muIxTU = 0; isfhjrH1QA > muIxTU; muIxTU++) {
        scanf ("%d", &n1QR7kdgc);
        if (1 <= n1QR7kdgc && 18 >= n1QR7kdgc)
            yBIXG4g01sy++;
        else {
            if (19 <= n1QR7kdgc && n1QR7kdgc <= 35)
                VQgJRNCWM6x++;
            else {
                if (n1QR7kdgc >= 36 && n1QR7kdgc <= (390 - 330))
                    zhong++;
                else {
                    if (n1QR7kdgc >= 61)
                        MwnMNeK++;
                };
            };
        };
    }
    xkOJlA6Iv = (double ) yBIXG4g01sy / isfhjrH1QA * 100;
    printf ("1-18: %.2lf%%\n", xkOJlA6Iv);
    qingb = (double ) VQgJRNCWM6x / isfhjrH1QA * 100;
    printf ("19-35: %.2lf%%\n", qingb);
    zhongb = (double ) zhong / isfhjrH1QA * 100;
    printf ("36-60: %.2lf%%\n", zhongb);
    laob = (double ) MwnMNeK / isfhjrH1QA * 100;
    printf ("60??: %.2lf%%\n", laob);
    return 0;
}

