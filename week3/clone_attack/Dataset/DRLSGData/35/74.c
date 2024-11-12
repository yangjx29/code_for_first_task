int main () {
    int aGYgUQ;
    int YZI3C6b4GYpM;
    int i;
    int ztu9J6NSR1F;
    int cZ4ECiA [(731 - 723)] [(455 - 447)];
    int rtepRHK;
    int JHfGBgTlI;
    int DDpweI;
    scanf ("%d,%d", &aGYgUQ, &YZI3C6b4GYpM);
    {
        i = (157 - 157);
        while (i < aGYgUQ) {
            {
                ztu9J6NSR1F = (657 - 657);
                for (; YZI3C6b4GYpM > ztu9J6NSR1F;) {
                    scanf ("%d", &cZ4ECiA[i][ztu9J6NSR1F]);
                    ztu9J6NSR1F = ztu9J6NSR1F + (798 - 797);
                }
            }
            i = i + (638 - 637);
        }
    }
    {
        i = (454 - 454);
        while (i < aGYgUQ) {
            rtepRHK = cZ4ECiA[i][(899 - 899)];
            JHfGBgTlI = (700 - 700);
            {
                ztu9J6NSR1F = (13 - 12);
                for (; ztu9J6NSR1F < YZI3C6b4GYpM;) {
                    if (cZ4ECiA[i][ztu9J6NSR1F] > rtepRHK) {
                        rtepRHK = cZ4ECiA[i][ztu9J6NSR1F];
                        JHfGBgTlI = ztu9J6NSR1F;
                    }
                    ztu9J6NSR1F = ztu9J6NSR1F + (310 - 309);
                }
            }
            {
                DDpweI = (236 - 235);
                for (; DDpweI < aGYgUQ;) {
                    if (cZ4ECiA[DDpweI][JHfGBgTlI] <= cZ4ECiA[i][JHfGBgTlI])
                        break;
                    DDpweI++;
                }
            }
            if (DDpweI == aGYgUQ) {
                printf ("%d+%d", i, JHfGBgTlI);
                break;
            }
            i++;
        }
    }
    if (i >= aGYgUQ)
        printf ("No");
    return (49 - 49);
}

