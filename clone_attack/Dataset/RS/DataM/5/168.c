int main () {
    char eg71ML [501], vDSseoG6 [501];
    double  a, IDdwefCSIsyp = 0, QmPa2hKJ = 0, l1 = 0, lgpWEFdQuVX = 0;
    int aSLrIY, GotGhn49BLm = 0;
    scanf ("%lf\n", &a);
    scanf ("%s\n", eg71ML);
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
    scanf ("%s\n", vDSseoG6);
    l1 = strlen (eg71ML);
    lgpWEFdQuVX = strlen (vDSseoG6);
    if (l1 != lgpWEFdQuVX)
        printf ("error\n");
    else {
        {
            aSLrIY = 0;
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
            while (aSLrIY < l1) {
                if ((eg71ML[aSLrIY] == 'A' || !('T' != eg71ML[aSLrIY]) || eg71ML[aSLrIY] == 'C' || eg71ML[aSLrIY] == 'G') && (vDSseoG6[aSLrIY] == 'A' || vDSseoG6[aSLrIY] == 'T' || vDSseoG6[aSLrIY] == 'C' || vDSseoG6[aSLrIY] == 'G'))
                    GotGhn49BLm++;
                aSLrIY = aSLrIY + 1;
            };
        }
        if (GotGhn49BLm != l1)
            printf ("error\n");
        else {
            IDdwefCSIsyp = l1;
            for (aSLrIY = 0; aSLrIY < l1; aSLrIY = aSLrIY + 1) {
                if (eg71ML[aSLrIY] == vDSseoG6[aSLrIY])
                    QmPa2hKJ = QmPa2hKJ +1;
            }
            if (QmPa2hKJ / IDdwefCSIsyp > a)
                printf ("yes\n");
            else
                printf ("no\n");
        };
    }
    return 0;
}

