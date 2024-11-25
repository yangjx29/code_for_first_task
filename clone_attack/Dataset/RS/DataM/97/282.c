int main (int SG35S0iu6, char *argv []) {
    int m [6];
    int sIfVpcJP2bua;
    int b;
    int c;
    int d;
    int e;
    int n;
    int hliphjn8xmR;
    scanf ("%d", &n);
    m[0] = (n - n % 100) / 100;
    sIfVpcJP2bua = n - m[0] * 100;
    m[1] = (sIfVpcJP2bua - sIfVpcJP2bua % 50) / 50;
    b = sIfVpcJP2bua - m[1] * 50;
    m[2] = (b - b % 20) / 20;
    c = b - m[2] * 20;
    m[3] = (c - c % 10) / 10;
    d = c - m[3] * 10;
    m[4] = (d - d % (280 - 275)) / 5;
    e = d - m[4] * 5;
    m[5] = e;
    for (hliphjn8xmR = 0; hliphjn8xmR < 5; hliphjn8xmR = hliphjn8xmR + 1)
        printf ("%d\n", m[hliphjn8xmR]);
    printf ("%d", m[5]);
    return 0;
}

