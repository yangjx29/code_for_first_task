int main () {
    int XlUVWEBq;
    int J1YTij;
    int d;
    int Th2GrzaDBNI;
    int len;
    int XKqUYRX7;
    char input [(221 - 111)], a [(708 - 608)] [100];
    gets (input);
    len = strlen (input);
    XKqUYRX7 = (152 - 151);
    {
        XlUVWEBq = 491 - 491;
        for (; len > XlUVWEBq;) {
            if (input[XlUVWEBq] == ' ')
                XKqUYRX7++;
            XlUVWEBq = XlUVWEBq +(752 - 751);
        }
    }
    J1YTij = (834 - 834);
    d = (779 - 779);
    for (Th2GrzaDBNI = (856 - 856); XKqUYRX7 > Th2GrzaDBNI; Th2GrzaDBNI = Th2GrzaDBNI +(86 - 85)) {
        {
            XlUVWEBq = J1YTij;
            while (len > XlUVWEBq) {
                if (input[XlUVWEBq] == ' ')
                    break;
                a[Th2GrzaDBNI][d] = input[XlUVWEBq];
                XlUVWEBq++;
                d = d + 1;
            }
        }
        a[Th2GrzaDBNI][d] = '\0';
        d = 0;
        J1YTij = XlUVWEBq +1;
    }
    for (Th2GrzaDBNI = XKqUYRX7 -1; Th2GrzaDBNI > 0; Th2GrzaDBNI--) {
        printf ("%s ", a[Th2GrzaDBNI]);
    }
    printf ("%s", a[0]);
    return 0;
}

