int main () {
    double  X7xKX8F;
    double  AILSUgGqzQ;
    double  aF0ofVtp;
    double  X0QJm4IOSh;
    double  aF0NfT;
    double  YhSfvy9snXkI [100];
    X7xKX8F = (230 - 230);
    AILSUgGqzQ = 0;
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
    int ngpsPK;
    int fylic9H8U;
    int j;
    int HWKUcvIyF;
    scanf ("%d", &ngpsPK);
    for (j = 0; j < ngpsPK; j++) {
        AILSUgGqzQ = 0;
        scanf ("%d", &fylic9H8U);
        X7xKX8F = 0;
        {
            HWKUcvIyF = 0;
            while (fylic9H8U > HWKUcvIyF) {
                scanf ("%lf", &aF0ofVtp);
                YhSfvy9snXkI[HWKUcvIyF] = aF0ofVtp;
                X7xKX8F = X7xKX8F +YhSfvy9snXkI[HWKUcvIyF];
                HWKUcvIyF = HWKUcvIyF +1;
            };
        }
        X0QJm4IOSh = X7xKX8F / (double ) fylic9H8U;
        for (HWKUcvIyF = 0; fylic9H8U > HWKUcvIyF; HWKUcvIyF = HWKUcvIyF +1) {
            AILSUgGqzQ = AILSUgGqzQ +(YhSfvy9snXkI[HWKUcvIyF] - X0QJm4IOSh) * (YhSfvy9snXkI[HWKUcvIyF] - X0QJm4IOSh);
        }
        aF0NfT = sqrt (AILSUgGqzQ / (double ) fylic9H8U);
        printf ("%.5lf\n", aF0NfT);
    }
    return 0;
}

