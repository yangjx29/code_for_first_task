struct   info {
    char xuJypjvX5DNx [(666 - 656)];
    char name [20];
    char sex;
    int n2VNjbQM;
    float grade;
    char nfUkdiJuzWv [10];
    struct   info *link;
};
int main () {
    struct   info *oUMS58L2, *VL8KwZ;
    oUMS58L2 = VL8KwZ = NULL;
    oUMS58L2 = (struct   info *) malloc (sizeof (struct   info));
    scanf ("%s", oUMS58L2->xuJypjvX5DNx);
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
    if (!('e' != oUMS58L2->xuJypjvX5DNx[(340 - 340)]))
        return 0;
    do {
        scanf ("%s %c%d%f%s", oUMS58L2->name, &oUMS58L2->sex, &oUMS58L2->n2VNjbQM, &oUMS58L2->grade, oUMS58L2->nfUkdiJuzWv);
        oUMS58L2->link = VL8KwZ;
        VL8KwZ = oUMS58L2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        oUMS58L2 = (struct   info *) malloc (sizeof (struct   info));
        scanf ("%s", oUMS58L2->xuJypjvX5DNx);
    }
    while (oUMS58L2->xuJypjvX5DNx[0] != 'e');
    for (; VL8KwZ != NULL;) {
        printf ("%s %s %c %d %g %s\n", VL8KwZ->xuJypjvX5DNx, VL8KwZ->name, VL8KwZ->sex, VL8KwZ->n2VNjbQM, VL8KwZ->grade, VL8KwZ->nfUkdiJuzWv);
        oUMS58L2 = VL8KwZ->link;
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
        VL8KwZ = oUMS58L2;
    }
    return 0;
}

