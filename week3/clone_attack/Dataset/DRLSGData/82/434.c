int main () {
    int WIvM5qK;
    int Twcb7AXInq;
    int j2EsCHO8u;
    int u4G83bxl;
    int z1fxUBtiV [(1042 - 942)];
    int qSu8BpIAFdPU [100];
    int b6c81KRQ;
    scanf ("%d", &WIvM5qK);
    {
        Twcb7AXInq = 619 - 619;
        while (Twcb7AXInq < WIvM5qK) {
            scanf ("%d %d", &z1fxUBtiV[Twcb7AXInq], &qSu8BpIAFdPU[Twcb7AXInq]);
            Twcb7AXInq = Twcb7AXInq +1;
        }
    }
    b6c81KRQ = 0;
    j2EsCHO8u = 0;
    {
        u4G83bxl = 0;
        while (u4G83bxl < WIvM5qK) {
            if (z1fxUBtiV[u4G83bxl] <= 140 && 90 <= z1fxUBtiV[u4G83bxl] && qSu8BpIAFdPU[u4G83bxl] >= (427 - 367) && qSu8BpIAFdPU[u4G83bxl] <= 90)
                j2EsCHO8u++;
            else {
                if (j2EsCHO8u > b6c81KRQ)
                    b6c81KRQ = j2EsCHO8u;
                j2EsCHO8u = 0;
            }
            u4G83bxl++;
        }
    }
    if (j2EsCHO8u > b6c81KRQ)
        b6c81KRQ = j2EsCHO8u;
    printf ("%d\n", b6c81KRQ);
    return 0;
}

