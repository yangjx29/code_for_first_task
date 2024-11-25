int main () {
    int f9JCaweNbhu;
    int i;
    int XrnqwsLjTSbf;
    int tem;
    int a [300];
    float EIFCh9q653;
    float j8UlKETzWCG [300];
    float fZBRcEusqS;
    float TJepbL5ZBz;
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
    scanf ("%d", &f9JCaweNbhu);
    TJepbL5ZBz = (702 - 702);
    for (XrnqwsLjTSbf = 0; XrnqwsLjTSbf < f9JCaweNbhu; XrnqwsLjTSbf++) {
        scanf ("%d", &a[XrnqwsLjTSbf]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        TJepbL5ZBz = TJepbL5ZBz +a[XrnqwsLjTSbf];
    }
    EIFCh9q653 = TJepbL5ZBz / f9JCaweNbhu;
    for (i = 0; i < f9JCaweNbhu; i++) {
        if (a[i] <= EIFCh9q653)
            j8UlKETzWCG[i] = EIFCh9q653 -a[i];
        else
            j8UlKETzWCG[i] = a[i] - EIFCh9q653;
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
        };
    }
    fZBRcEusqS = j8UlKETzWCG[0];
    {
        XrnqwsLjTSbf = 1;
        while (XrnqwsLjTSbf < f9JCaweNbhu) {
            if (fZBRcEusqS < j8UlKETzWCG[XrnqwsLjTSbf])
                fZBRcEusqS = j8UlKETzWCG[XrnqwsLjTSbf];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            XrnqwsLjTSbf++;
        };
    }
    for (XrnqwsLjTSbf = 0; XrnqwsLjTSbf < f9JCaweNbhu; XrnqwsLjTSbf++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (j8UlKETzWCG[XrnqwsLjTSbf] == fZBRcEusqS) {
            printf ("%d", a[XrnqwsLjTSbf]);
            tem = XrnqwsLjTSbf;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            break;
        };
    }
    for (XrnqwsLjTSbf = tem + 1; XrnqwsLjTSbf < f9JCaweNbhu; XrnqwsLjTSbf++) {
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
        if (j8UlKETzWCG[XrnqwsLjTSbf] == fZBRcEusqS) {
            printf (",%d", a[XrnqwsLjTSbf]);
        };
    }
    return 0;
}

