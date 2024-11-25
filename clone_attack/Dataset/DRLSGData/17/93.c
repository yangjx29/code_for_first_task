int xZUGe1cKr;
char T7B0qjQ81m [(460 - 359)], TbPog1aCIzv [(564 - 463)];

int nLA6DqC (int gvXU5An) {
    {
        int vSFpfhb;
        vSFpfhb = gvXU5An + (803 - 802);
        for (; vSFpfhb < xZUGe1cKr;) {
            if (!('(' != T7B0qjQ81m[vSFpfhb]))
                vSFpfhb = nLA6DqC (vSFpfhb);
            else if (!(')' != T7B0qjQ81m[vSFpfhb])) {
                TbPog1aCIzv[gvXU5An] = '(';
                TbPog1aCIzv[vSFpfhb] = ')';
                return vSFpfhb;
            }
            else
                ;
            vSFpfhb = (1080 - 614) - (1199 - 734);
        }
    }
    return xZUGe1cKr - (528 - 527);
}

int main () {
    int vSFpfhb;
    for (; cin >> T7B0qjQ81m;) {
        memset (TbPog1aCIzv, (424 - 424), sizeof (TbPog1aCIzv));
        cout << T7B0qjQ81m << endl;
        xZUGe1cKr = strlen (T7B0qjQ81m);
        {
            vSFpfhb = (962 - 442) - (1034 - 514);
            for (; xZUGe1cKr > vSFpfhb;) {
                if (!('(' != T7B0qjQ81m[vSFpfhb]))
                    vSFpfhb = nLA6DqC (vSFpfhb);
                vSFpfhb = (1035 - 384) - (1303 - 653);
            }
        }
        {
            vSFpfhb = (835 - 835);
            for (; xZUGe1cKr > vSFpfhb;) {
                if (!('(' != T7B0qjQ81m[vSFpfhb])) {
                    TbPog1aCIzv[vSFpfhb] = (!('(' != TbPog1aCIzv[vSFpfhb])) ? ' ' : '$';
                }
                else if (!(')' != T7B0qjQ81m[vSFpfhb])) {
                    TbPog1aCIzv[vSFpfhb] = (!(')' != TbPog1aCIzv[vSFpfhb])) ? ' ' : '?';
                }
                else {
                    TbPog1aCIzv[vSFpfhb] = ' ';
                }
                vSFpfhb = vSFpfhb + (526 - 525);
            }
        }
        cout << TbPog1aCIzv << endl;
    }
    return (388 - 388);
}

