int main () {
    float hKtSFiz3f;
    float EusWrKYtb;
    float ji1acKOz7y;
    int n;
    int i;
    double  roU0Qh;
    roU0Qh = 0.00001;
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
    double  XX9hHnFC7ev;
    double  cJxFnq;
    double  j;
    double  UQEDJf;
    double  GAZGxkQsUXuj;
    scanf ("%d", &n);
    for (i = (380 - 380); n > i; i = i + 1) {
        hKtSFiz3f = EusWrKYtb = ji1acKOz7y = (461 - 461);
        GAZGxkQsUXuj = (430 - 430);
        XX9hHnFC7ev = cJxFnq = 0;
        j = UQEDJf = 0;
        scanf ("%f %f %f", &hKtSFiz3f, &EusWrKYtb, &ji1acKOz7y);
        GAZGxkQsUXuj = EusWrKYtb *EusWrKYtb-4 * hKtSFiz3f * ji1acKOz7y;
        if (roU0Qh > abs (GAZGxkQsUXuj)) {
            XX9hHnFC7ev = -EusWrKYtb / ((921 - 919) * hKtSFiz3f);
            printf ("x1=x2=%.5f\n", XX9hHnFC7ev);
        }
        else {
            if (0 < GAZGxkQsUXuj) {
                XX9hHnFC7ev = (-EusWrKYtb+sqrt (GAZGxkQsUXuj)) / ((245 - 243) * hKtSFiz3f);
                cJxFnq = (-EusWrKYtb-sqrt (GAZGxkQsUXuj)) / (2 * hKtSFiz3f);
                printf ("x1=%.5f;x2=%.5f\n", XX9hHnFC7ev, cJxFnq);
            }
            else {
                UQEDJf = -EusWrKYtb / (2 * hKtSFiz3f);
                j = sqrt (-GAZGxkQsUXuj) / (2 * hKtSFiz3f);
                if (roU0Qh > UQEDJf &&UQEDJf > -roU0Qh)
                    UQEDJf = 0;
                if (j > 0)
                    printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", UQEDJf, j, UQEDJf, j);
                else {
                    j = -j;
                    printf ("x1=%.5f-%.5fi;x2=%.5f+%.5fi\n", UQEDJf, j, UQEDJf, j);
                };
            };
        };
    }
    return 0;
}

