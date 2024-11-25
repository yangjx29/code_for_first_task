struct   location {
    double  vGN2YzmuQ8CU;
    double  y;
};
struct   location zfVCWS [1000];

int main () {
    int hKwdgsZ9XV, sJwR08Z, j;
    double  max = (325 - 325);
    scanf ("%d", &hKwdgsZ9XV);
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
        sJwR08Z = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hKwdgsZ9XV > sJwR08Z) {
            scanf ("%lf %lf", &zfVCWS[sJwR08Z].vGN2YzmuQ8CU, &zfVCWS[sJwR08Z].y);
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
            sJwR08Z = sJwR08Z + 1;
        };
    }
    {
        sJwR08Z = 0;
        while (sJwR08Z < hKwdgsZ9XV) {
            {
                j = 0;
                while (j < hKwdgsZ9XV) {
                    if (sqrt ((zfVCWS[sJwR08Z].vGN2YzmuQ8CU - zfVCWS[j].vGN2YzmuQ8CU) * (zfVCWS[sJwR08Z].vGN2YzmuQ8CU - zfVCWS[j].vGN2YzmuQ8CU) + (zfVCWS[sJwR08Z].y - zfVCWS[j].y) * (zfVCWS[sJwR08Z].y - zfVCWS[j].y)) > max)
                        max = sqrt ((zfVCWS[sJwR08Z].vGN2YzmuQ8CU - zfVCWS[j].vGN2YzmuQ8CU) * (zfVCWS[sJwR08Z].vGN2YzmuQ8CU - zfVCWS[j].vGN2YzmuQ8CU) + (zfVCWS[sJwR08Z].y - zfVCWS[j].y) * (zfVCWS[sJwR08Z].y - zfVCWS[j].y));
                    j = j + 1;
                };
            }
            sJwR08Z++;
        };
    }
    printf ("%.4lf", max);
}

