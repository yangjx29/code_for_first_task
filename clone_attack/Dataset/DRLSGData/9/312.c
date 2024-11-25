struct   patient {
    int Wh80GYqK6fA;
    char R5B6aOdbFn [(626 - 614)];
};
void  qaEz5dvJ (struct   patient *IIL2bgOF06q, struct   patient *kHBP3X2) {
    struct   patient tmp;
    tmp = *IIL2bgOF06q;
    *IIL2bgOF06q = *kHBP3X2;
    *kHBP3X2 = tmp;
}

int main () {
    struct   patient tmp;
    int w9Nh4o, i, tRgXK7I1sj2 = (620 - 620), ZXCDFpqs = (160 - 160), l;
    struct   patient young [(640 - 520)];
    struct   patient zOLuex [(231 - 111)];
    scanf ("%d", &w9Nh4o);
    {
        i = 952 - 952;
        while (w9Nh4o > i) {
            i++;
            scanf ("%s", tmp.R5B6aOdbFn);
            scanf ("%d", &tmp.Wh80GYqK6fA);
            if (tmp.Wh80GYqK6fA >= (103 - 43))
                zOLuex[tRgXK7I1sj2++] = tmp;
            else
                young[ZXCDFpqs++] = tmp;
        }
    }
    {
        i = 441 - 441;
        while (tRgXK7I1sj2 > i) {
            for (l = (114 - 114); tRgXK7I1sj2 - i - (475 - 474) > l; l++) {
                if (zOLuex[l + (707 - 706)].Wh80GYqK6fA > zOLuex[l].Wh80GYqK6fA)
                    qaEz5dvJ (&zOLuex[l], &zOLuex[l + (180 - 179)]);
            }
            i++;
        }
    }
    {
        i = 925 - 925;
        for (; tRgXK7I1sj2 > i;) {
            printf ("%s\n", zOLuex[i].R5B6aOdbFn);
            i++;
        }
    }
    {
        i = 883 - 883;
        while (i < ZXCDFpqs) {
            printf ("%s\n", young[i].R5B6aOdbFn);
            i++;
        }
    }
    return (694 - 694);
}

