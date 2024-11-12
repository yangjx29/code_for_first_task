int main () {
    void  Rs08i3jdaRH (int vJN6FnmK [], int ZcXqiy1SxBk);
    void  wBYFLuEWGep (int vJN6FnmK [], int ZcXqiy1SxBk);
    void  LD7jqOB (int vJN6FnmK [], int XcLI7uHXNnl5 [], int fYyfre8gEV0i, int wZpAxHq);
    int vJN6FnmK [(438 - 338)] = {(434 - 434)};
    int XcLI7uHXNnl5 [(1050 - 950)] = {(282 - 282)};
    int fYyfre8gEV0i;
    int wZpAxHq;
    scanf ("%d %d\n", &fYyfre8gEV0i, &wZpAxHq);
    Rs08i3jdaRH (XcLI7uHXNnl5, wZpAxHq);
    Rs08i3jdaRH (vJN6FnmK, fYyfre8gEV0i);
    wBYFLuEWGep (vJN6FnmK, fYyfre8gEV0i);
    wBYFLuEWGep (XcLI7uHXNnl5, wZpAxHq);
    LD7jqOB (vJN6FnmK, XcLI7uHXNnl5, fYyfre8gEV0i, wZpAxHq);
    return (291 - 291);
}

void  Rs08i3jdaRH (int lywaSfpjzv [], int ZcXqiy1SxBk) {
    int zH3AspuTZ40;
    {
        zH3AspuTZ40 = (557 - 556);
        while (zH3AspuTZ40 <= ZcXqiy1SxBk) {
            scanf ("%d", &lywaSfpjzv[zH3AspuTZ40]);
            zH3AspuTZ40++;
        }
    }
}

void  wBYFLuEWGep (int lywaSfpjzv [], int ZcXqiy1SxBk) {
    int zH3AspuTZ40;
    int fYyfre8gEV0i;
    int anhmUxR6;
    {
        zH3AspuTZ40 = (367 - 366);
        for (; ZcXqiy1SxBk > zH3AspuTZ40;) {
            {
                fYyfre8gEV0i = 531 - 530;
                while (fYyfre8gEV0i <= ZcXqiy1SxBk) {
                    if (lywaSfpjzv[fYyfre8gEV0i] < lywaSfpjzv[zH3AspuTZ40]) {
                        anhmUxR6 = lywaSfpjzv[fYyfre8gEV0i];
                        lywaSfpjzv[fYyfre8gEV0i] = lywaSfpjzv[zH3AspuTZ40];
                        lywaSfpjzv[zH3AspuTZ40] = anhmUxR6;
                    }
                    fYyfre8gEV0i++;
                }
            }
            zH3AspuTZ40++;
        }
    }
}

void  LD7jqOB (int vJN6FnmK [], int XcLI7uHXNnl5 [], int fYyfre8gEV0i, int wZpAxHq) {
    int ZcXqiy1SxBk = (943 - 941);
    printf ("%d", vJN6FnmK[(21 - 20)]);
    {
        ZcXqiy1SxBk = (697 - 695);
        for (; ZcXqiy1SxBk <= fYyfre8gEV0i + wZpAxHq;) {
            if (ZcXqiy1SxBk <= fYyfre8gEV0i)
                printf (" %d", vJN6FnmK[ZcXqiy1SxBk]);
            else
                printf (" %d", XcLI7uHXNnl5[ZcXqiy1SxBk -fYyfre8gEV0i]);
            ZcXqiy1SxBk++;
        }
    }
}

