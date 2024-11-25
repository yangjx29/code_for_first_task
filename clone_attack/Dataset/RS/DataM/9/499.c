struct   patient {
    char yMgzjl7K2ZXp [(612 - 602)];
    int aMaZyXnGR86;
    struct   patient *Bjmo9l;
    struct   patient *GJaS3G;
};
char temp [(61 - 51)];

int main () {
    int YCmjeQONavR;
    int i;
    int Z948sIg3a1;
    int hjqJGt4U3lXu;
    struct   patient *I8eEdY;
    struct   patient *D5P4zNohs;
    struct   patient *pIC2PBcD;
    struct   patient p [N];
    memset (p, (102 - 102), sizeof (p));
    pIC2PBcD = p + (104 - 103);
    scanf ("%d", &YCmjeQONavR);
    for (i = (277 - 276); i <= YCmjeQONavR; i = i + 1) {
        scanf ("%s %d", p[i].yMgzjl7K2ZXp, &p[i].aMaZyXnGR86);
        p[i].GJaS3G = p + i - (192 - 191);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p[i].Bjmo9l = p + i + 1;
    }
    pIC2PBcD->GJaS3G = NULL;
    p[i].Bjmo9l = NULL;
    for (i = YCmjeQONavR; i > 1; i = i - 1) {
        for (Z948sIg3a1 = 1; Z948sIg3a1 < YCmjeQONavR; Z948sIg3a1 = Z948sIg3a1 +1) {
            if ((p + Z948sIg3a1 +1)->aMaZyXnGR86 >= (200 - 140) && (p + Z948sIg3a1 +1)->aMaZyXnGR86 > (p + Z948sIg3a1)->aMaZyXnGR86) {
                memcpy (temp, (p + Z948sIg3a1)->yMgzjl7K2ZXp, sizeof (temp));
                memcpy ((p + Z948sIg3a1)->yMgzjl7K2ZXp, (p + Z948sIg3a1 +1)->yMgzjl7K2ZXp, sizeof (temp));
                memcpy ((p + Z948sIg3a1 +1)->yMgzjl7K2ZXp, temp, sizeof (temp));
                hjqJGt4U3lXu = (p + Z948sIg3a1)->aMaZyXnGR86;
                (p + Z948sIg3a1)->aMaZyXnGR86 = (p + Z948sIg3a1 +1)->aMaZyXnGR86;
                (p + Z948sIg3a1 +1)->aMaZyXnGR86 = hjqJGt4U3lXu;
            };
        };
    }
    for (; pIC2PBcD != NULL; pIC2PBcD = pIC2PBcD->Bjmo9l)
        printf ("%s\n", pIC2PBcD->yMgzjl7K2ZXp);
}

