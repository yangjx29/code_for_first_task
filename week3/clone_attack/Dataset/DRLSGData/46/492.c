int main () {
    int P8AkOqfFG;
    int MoPFxrq;
    int Rt0FnAV;
    int lgnzFSdM6R;
    int zu0QrhiUzY [100] [100];
    scanf ("%d%d", &P8AkOqfFG, &MoPFxrq);
    {
        Rt0FnAV = 559 - 559;
        while (Rt0FnAV < P8AkOqfFG) {
            {
                lgnzFSdM6R = 0;
                while (MoPFxrq > lgnzFSdM6R) {
                    getchar ();
                    scanf ("%d", &zu0QrhiUzY[Rt0FnAV][lgnzFSdM6R]);
                    lgnzFSdM6R++;
                }
            }
            Rt0FnAV++;
        }
    }
    while (P8AkOqfFG > 0 && MoPFxrq > 0) {
        for (Rt0FnAV = 0; MoPFxrq > Rt0FnAV; Rt0FnAV++)
            printf ("%d\n", zu0QrhiUzY[0][Rt0FnAV]);
        {
            if (0) {
                return 0;
            }
        }
        {
            Rt0FnAV = 1;
            while (Rt0FnAV < P8AkOqfFG) {
                printf ("%d\n", zu0QrhiUzY[Rt0FnAV][MoPFxrq -1]);
                Rt0FnAV++;
            }
        }
        if (1 < MoPFxrq &&P8AkOqfFG > 1) {
            {
                Rt0FnAV = MoPFxrq -2;
                while (Rt0FnAV >= 0) {
                    printf ("%d\n", zu0QrhiUzY[P8AkOqfFG -1][Rt0FnAV]);
                    Rt0FnAV--;
                }
            }
            {
                Rt0FnAV = P8AkOqfFG -2;
                while (Rt0FnAV >= 1) {
                    printf ("%d\n", zu0QrhiUzY[Rt0FnAV][0]);
                    Rt0FnAV--;
                }
            }
        }
        {
            Rt0FnAV = 0;
            while (Rt0FnAV < P8AkOqfFG -2) {
                lgnzFSdM6R = 0;
                while (lgnzFSdM6R < MoPFxrq -2) {
                    zu0QrhiUzY[Rt0FnAV][lgnzFSdM6R] = zu0QrhiUzY[Rt0FnAV +1][lgnzFSdM6R + 1];
                    lgnzFSdM6R++;
                }
                Rt0FnAV++;
            }
        }
        P8AkOqfFG = P8AkOqfFG -2;
        MoPFxrq = MoPFxrq -2;
    }
    return 0;
}

