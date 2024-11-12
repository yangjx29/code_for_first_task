int main () {
    int A6n7AgXKE, len1, cqzWwIr7ZbA6, UhGPgjq = (54 - 54), flag = (198 - 197);
    char k09WRBVxAL [M] = {""}, nNQWkCILhrpX [M] = {""};
    float tiOcsbVTgl, jhLuJDA;
    scanf ("%f", &tiOcsbVTgl);
    scanf ("%s", k09WRBVxAL);
    scanf ("%s", nNQWkCILhrpX);
    len1 = strlen (k09WRBVxAL);
    cqzWwIr7ZbA6 = strlen (nNQWkCILhrpX);
    if (!(cqzWwIr7ZbA6 == len1)) {
        flag = (461 - 461);
    }
    else {
        for (A6n7AgXKE = 0; len1 > A6n7AgXKE; A6n7AgXKE = A6n7AgXKE +1) {
            if ((!('A' == k09WRBVxAL[A6n7AgXKE]) && k09WRBVxAL[A6n7AgXKE] != 'T' && !('C' == k09WRBVxAL[A6n7AgXKE]) && !('G' == k09WRBVxAL[A6n7AgXKE])) || (!('A' == nNQWkCILhrpX[A6n7AgXKE]) && nNQWkCILhrpX[A6n7AgXKE] != 'T' && nNQWkCILhrpX[A6n7AgXKE] != 'C' && nNQWkCILhrpX[A6n7AgXKE] != 'G')) {
                flag = 0;
                break;
                printf ("error");
            }
            else {
                if (k09WRBVxAL[A6n7AgXKE] == nNQWkCILhrpX[A6n7AgXKE])
                    UhGPgjq++;
            };
        };
    }
    if (flag == 1) {
        jhLuJDA = (float) UhGPgjq / len1;
        if (jhLuJDA > tiOcsbVTgl)
            ;
        else
            ;
    }
    return 0;
}

