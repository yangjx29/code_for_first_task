struct   patient {
    char ID [10];
    int ZTIpei9;
    struct   patient *srxPzsAL;
};
struct   patient *ITyKhCMS6VGZ (int OgEVZG) {
    int egmh9P;
    struct   patient *EQhOCgeAazR;
    struct   patient *dzM1iNkJ8E;
    struct   patient *p2;
    p2 = dzM1iNkJ8E = (struct   patient *) malloc (LEN);
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
    EQhOCgeAazR = dzM1iNkJ8E;
    scanf ("%s %d", dzM1iNkJ8E->ID, &dzM1iNkJ8E->ZTIpei9);
    {
        egmh9P = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (OgEVZG > egmh9P) {
            egmh9P = egmh9P + 1;
            dzM1iNkJ8E = (struct   patient *) malloc (LEN);
            scanf ("%s %d", dzM1iNkJ8E->ID, &dzM1iNkJ8E->ZTIpei9);
            p2->srxPzsAL = dzM1iNkJ8E;
            p2 = dzM1iNkJ8E;
        };
    }
    p2->srxPzsAL = NULL;
    return (EQhOCgeAazR);
}

int main () {
    struct   patient *StWu15IKhiH, *q, *mfWaBorxw;
    int egmh9P, j, OgEVZG;
    char yIflMkvqjb3e [10];
    scanf ("%d", &OgEVZG);
    StWu15IKhiH = ITyKhCMS6VGZ (OgEVZG);
    {
        egmh9P = 819 - 819;
        while (egmh9P < OgEVZG) {
            egmh9P = egmh9P + 1;
            {
                q = StWu15IKhiH;
                while (!(NULL == q->srxPzsAL)) {
                    if (q->srxPzsAL->ZTIpei9 >= 60 && q->srxPzsAL->ZTIpei9 > q->ZTIpei9) {
                        strcpy (yIflMkvqjb3e, q->ID);
                        strcpy (q->ID, q->srxPzsAL->ID);
                        strcpy (q->srxPzsAL->ID, yIflMkvqjb3e);
                        j = q->ZTIpei9;
                        q->ZTIpei9 = q->srxPzsAL->ZTIpei9;
                        q->srxPzsAL->ZTIpei9 = j;
                    }
                    q = q->srxPzsAL;
                };
            };
        };
    }
    {
        mfWaBorxw = StWu15IKhiH;
        while (mfWaBorxw != NULL) {
            printf ("%s\n", mfWaBorxw->ID);
            mfWaBorxw = mfWaBorxw->srxPzsAL;
        };
    };
}

