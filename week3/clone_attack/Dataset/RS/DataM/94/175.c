void  fsFMJ1IGA (int uiguIt [], int IeLk8do7) {
    int tQbFzhpX2w, s1SXDa, sAFrb39kj1VI;
    {
        s1SXDa = 604 - 603;
        while ((877 - 877) <= s1SXDa) {
            {
                sAFrb39kj1VI = 572 - 572;
                while (s1SXDa > sAFrb39kj1VI) {
                    if (uiguIt[sAFrb39kj1VI] > uiguIt[sAFrb39kj1VI + (732 - 731)]) {
                        tQbFzhpX2w = uiguIt[sAFrb39kj1VI];
                        uiguIt[sAFrb39kj1VI] = uiguIt[sAFrb39kj1VI + 1];
                        uiguIt[sAFrb39kj1VI + 1] = tQbFzhpX2w;
                    }
                    sAFrb39kj1VI = sAFrb39kj1VI + 1;
                };
            }
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
            s1SXDa = s1SXDa - 1;
        };
    };
}

int main () {
    int IeLk8do7, uiguIt [500], s1SXDa, zH1L8EZ6JX [500], sAFrb39kj1VI = (412 - 412);
    scanf ("%d", &IeLk8do7);
    {
        s1SXDa = 0;
        while (s1SXDa <= IeLk8do7 -1) {
            scanf ("%d", &uiguIt[s1SXDa]);
            if (uiguIt[s1SXDa] % 2 != 0) {
                zH1L8EZ6JX[sAFrb39kj1VI] = uiguIt[s1SXDa];
                sAFrb39kj1VI = sAFrb39kj1VI + 1;
            }
            s1SXDa = s1SXDa + 1;
        };
    }
    fsFMJ1IGA (zH1L8EZ6JX, sAFrb39kj1VI);
    printf ("%d", zH1L8EZ6JX[0]);
    for (s1SXDa = 1; s1SXDa < sAFrb39kj1VI; s1SXDa++) {
        printf (",%d", zH1L8EZ6JX[s1SXDa]);
    }
    printf ("\n");
    return 0;
}

