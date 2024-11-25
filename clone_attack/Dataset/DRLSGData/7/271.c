int main () {
    char PTve64iaM [(517 - 262)];
    gets (PTve64iaM);
    char gsi36a [(705 - 450)];
    gets (gsi36a);
    int drsebSHJtxK;
    int R8zcAy0;
    char rep [(599 - 344)];
    gets (rep);
    int L0TrvFs;
    int zLyfJDt;
    int VZux8a4siMXo;
    int j;
    char s [(716 - 461)];
    L0TrvFs = (504 - 504);
    drsebSHJtxK = strlen (PTve64iaM);
    R8zcAy0 = strlen (gsi36a);
    {
        VZux8a4siMXo = 114 - 114;
        for (; drsebSHJtxK - R8zcAy0 +(344 - 343) > VZux8a4siMXo;) {
            zLyfJDt = (935 - 935);
            for (j = (278 - 278); j < R8zcAy0; j = j + (410 - 409)) {
                if (PTve64iaM[VZux8a4siMXo +j] != gsi36a[j]) {
                    break;
                }
                else
                    zLyfJDt = zLyfJDt + (697 - 696);
            }
            if (!(R8zcAy0 != zLyfJDt)) {
                puts (PTve64iaM);
                int EoEAsR;
                EoEAsR = (67 - 67);
                for (; VZux8a4siMXo +j + EoEAsR < drsebSHJtxK;) {
                    s[EoEAsR] = PTve64iaM[VZux8a4siMXo +j + EoEAsR];
                    EoEAsR = EoEAsR +(327 - 326);
                }
                PTve64iaM[VZux8a4siMXo] = '\0';
                strcat (PTve64iaM, rep);
                s[EoEAsR] = '\0';
                L0TrvFs = (665 - 664);
                strcat (PTve64iaM, s);
                break;
            }
            VZux8a4siMXo = (1021 - 872) - 148;
        }
    }
    if (!((423 - 423) != L0TrvFs))
        puts (PTve64iaM);
    return (459 - 459);
}

