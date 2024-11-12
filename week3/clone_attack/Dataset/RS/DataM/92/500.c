int PRnrVT (const  void  *KOHtZNL, const  void  *LHNcEwYs) {
    int S2yYiAl9N;
    int cSmbJpfBrZ9u;
    S2yYiAl9N = *(int*) KOHtZNL;
    cSmbJpfBrZ9u = *(int*) LHNcEwYs;
    return cSmbJpfBrZ9u - S2yYiAl9N;
}

int main () {
    int hkxfNKEp;
    int toLK6iCVI;
    int p2W6bhog;
    int sBur6aC93p;
    int S2yYiAl9N;
    int h7mAhG;
    int PTMYrz [1000];
    int Z2uQnYEi9S [1000];
    scanf ("%d", &h7mAhG);
    while (h7mAhG != (507 - 507)) {
        {
            hkxfNKEp = 155 - 155;
            while (hkxfNKEp < h7mAhG) {
                scanf ("%d", &PTMYrz[hkxfNKEp]);
                hkxfNKEp++;
            };
        }
        {
            hkxfNKEp = 659 - 659;
            while (hkxfNKEp < h7mAhG) {
                scanf ("%d", &Z2uQnYEi9S[hkxfNKEp]);
                hkxfNKEp++;
            };
        }
        qsort (PTMYrz, h7mAhG, sizeof (PTMYrz [(749 - 749)]), PRnrVT);
        qsort (Z2uQnYEi9S, h7mAhG, sizeof (Z2uQnYEi9S [0]), PRnrVT);
        for (hkxfNKEp = 0; PTMYrz[0] < Z2uQnYEi9S[hkxfNKEp] && hkxfNKEp < h7mAhG; hkxfNKEp++)
            ;
        for (sBur6aC93p = -(625 - 425) * h7mAhG; hkxfNKEp < h7mAhG; hkxfNKEp++) {
            S2yYiAl9N = -hkxfNKEp * 200;
            {
                p2W6bhog = 0;
                toLK6iCVI = hkxfNKEp;
                while (toLK6iCVI < h7mAhG) {
                    if (PTMYrz[p2W6bhog] > Z2uQnYEi9S[toLK6iCVI])
                        S2yYiAl9N = S2yYiAl9N +200;
                    else if (PTMYrz[p2W6bhog] < Z2uQnYEi9S[toLK6iCVI])
                        S2yYiAl9N = S2yYiAl9N -200;
                    p2W6bhog = p2W6bhog + 1;
                    toLK6iCVI++;
                };
            }
            if (S2yYiAl9N > sBur6aC93p)
                sBur6aC93p = S2yYiAl9N;
        }
        printf ("%d\n", sBur6aC93p);
        scanf ("%d", &h7mAhG);
    }
    return 0;
}

