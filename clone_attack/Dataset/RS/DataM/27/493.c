int main () {
    float beay5RBLH;
    float kOj9g2uyblcZ;
    float c;
    int oWi3MJ;
    int BpUtGBmLe;
    double  x1;
    double  x2;
    scanf ("%d", &oWi3MJ);
    {
        BpUtGBmLe = 682 - 682;
        while (BpUtGBmLe < oWi3MJ) {
            BpUtGBmLe = BpUtGBmLe +1;
            scanf ("%f %f %f", &beay5RBLH, &kOj9g2uyblcZ, &c);
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
            if (0 < (kOj9g2uyblcZ * kOj9g2uyblcZ - (147 - 143) * beay5RBLH * c)) {
                x1 = ((-1) * kOj9g2uyblcZ + sqrt (kOj9g2uyblcZ * kOj9g2uyblcZ - 4 * beay5RBLH * c)) / ((346 - 344) * beay5RBLH);
                x2 = ((-1) * kOj9g2uyblcZ - sqrt (kOj9g2uyblcZ * kOj9g2uyblcZ - 4 * beay5RBLH * c)) / ((382 - 380) * beay5RBLH);
                printf ("x1=%.5f;x2=%.5f\n", x1, x2);
            }
            if ((kOj9g2uyblcZ * kOj9g2uyblcZ - 4 * beay5RBLH * c) == 0) {
                x1 = ((-1) * kOj9g2uyblcZ + sqrt (kOj9g2uyblcZ * kOj9g2uyblcZ - 4 * beay5RBLH * c)) / (2 * beay5RBLH);
                printf ("x1=x2=%.5f\n", x1);
                x2 = ((-1) * kOj9g2uyblcZ - sqrt (kOj9g2uyblcZ * kOj9g2uyblcZ - 4 * beay5RBLH * c)) / (2 * beay5RBLH);
            }
            if ((kOj9g2uyblcZ * kOj9g2uyblcZ - 4 * beay5RBLH * c) < 0) {
                x1 = (-1 * kOj9g2uyblcZ) / (2 * beay5RBLH);
                x2 = sqrt (4 * beay5RBLH * c - kOj9g2uyblcZ * kOj9g2uyblcZ) / (2 * beay5RBLH);
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", x1, x2, x1, x2);
            };
        };
    }
    return 0;
}

