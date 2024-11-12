int main () {
    int xrfCTm;
    int LOyqEN5D9;
    int jltXf8vx;
    int eIpPg0GY;
    int BTk1Q53LBSuy;
    int yKDFOShkz1o;
    int NYoGPFcvDzh;
    int WwRHFaZ;
    scanf ("%d", &xrfCTm);
    scanf ("%d", &LOyqEN5D9);
    scanf ("%d", &jltXf8vx);
    scanf ("%d", &WwRHFaZ);
    BTk1Q53LBSuy = 3;
    for (; BTk1Q53LBSuy <= xrfCTm;) {
        if (LOyqEN5D9 < WwRHFaZ) {
            eIpPg0GY = LOyqEN5D9;
            LOyqEN5D9 = WwRHFaZ;
            WwRHFaZ = eIpPg0GY;
        }
        if (jltXf8vx < WwRHFaZ) {
            yKDFOShkz1o = jltXf8vx;
            jltXf8vx = WwRHFaZ;
        }
        scanf ("%d", &WwRHFaZ);
        BTk1Q53LBSuy++;
    }
    if (LOyqEN5D9 < jltXf8vx) {
        NYoGPFcvDzh = LOyqEN5D9;
        LOyqEN5D9 = jltXf8vx;
        jltXf8vx = NYoGPFcvDzh;
    }
    printf ("%d\n%d\n", LOyqEN5D9, jltXf8vx);
    return 0;
}

