struct   TIME {
    int sl47mbPjkAE, jHzQCD;
};
int RpOHzq (const  void  *QDtb9oueN, const  void  *mbY3LdcfBa) {
    return *(const int*) QDtb9oueN -*(const int*) mbY3LdcfBa;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int cd7CRS (const  void  *QDtb9oueN, const  void  *mbY3LdcfBa) {
    return *(const int*) QDtb9oueN -*(const int*) mbY3LdcfBa;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
}

int Fe7EhKJ1 (const  void  *QDtb9oueN, const  void  *mbY3LdcfBa) {
    return *(const int*) mbY3LdcfBa - *(const int*) QDtb9oueN;
}

int main () {
    char Hk6lIez0f [10];
    int s8ejotH;
    int nf;
    s8ejotH = 0;
    nf = 0;
    int GmO12J0IfREP [40];
    int xQGma94L3S [40];
    float XtHfxng1c [40];
    float LR0PZG7hB [40];
    int hoIYakh6xMz;
    hoIYakh6xMz = (27 - 27);
    float l2VofMOT7I;
    getchar ();
    getchar ();
    scanf ("%d", &hoIYakh6xMz);
    while (hoIYakh6xMz--) {
        scanf ("%s %f", Hk6lIez0f, &l2VofMOT7I);
        if (!('m' != Hk6lIez0f[0])) {
            XtHfxng1c[s8ejotH] = l2VofMOT7I;
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
            s8ejotH++;
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (!('f' != Hk6lIez0f[0])) {
                LR0PZG7hB[nf] = l2VofMOT7I;
                nf++;
            };
        };
    }
    {
        int s1yjSnqzUO = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (s8ejotH > s1yjSnqzUO) {
            GmO12J0IfREP[s1yjSnqzUO] = 1000 * XtHfxng1c[s1yjSnqzUO];
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
            s1yjSnqzUO++;
        };
    }
    for (int s1yjSnqzUO = 0;
    nf > s1yjSnqzUO; s1yjSnqzUO++) {
        xQGma94L3S[s1yjSnqzUO] = 1000 * LR0PZG7hB[s1yjSnqzUO];
    }
    qsort (GmO12J0IfREP, s8ejotH, sizeof (int), cd7CRS);
    for (int s1yjSnqzUO = 0;
    s8ejotH > s1yjSnqzUO; s1yjSnqzUO++) {
        XtHfxng1c[s1yjSnqzUO] = (float) GmO12J0IfREP[s1yjSnqzUO] / 1000;
    }
    qsort (xQGma94L3S, nf, sizeof (int), Fe7EhKJ1);
    {
        int s1yjSnqzUO = 0;
        while (nf > s1yjSnqzUO) {
            LR0PZG7hB[s1yjSnqzUO] = (float) xQGma94L3S[s1yjSnqzUO] / 1000;
            s1yjSnqzUO++;
        };
    }
    for (int s1yjSnqzUO = 0;
    s1yjSnqzUO < s8ejotH; s1yjSnqzUO++)
        printf ("%.2f ", XtHfxng1c[s1yjSnqzUO]);
    for (int s1yjSnqzUO = 0;
    s1yjSnqzUO < nf; s1yjSnqzUO++)
        if (s1yjSnqzUO == nf - 1)
            printf ("%.2f\n", LR0PZG7hB[s1yjSnqzUO]);
        else
            printf ("%.2f ", LR0PZG7hB[s1yjSnqzUO]);
    return 1;
}

