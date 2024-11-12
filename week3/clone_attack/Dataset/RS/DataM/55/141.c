int main () {
    long  int io6zNEws, i, RSFW1tVOz, S3CJ6PsV, w [(1266 - 266)], QU9OYM, aa, YraTBQuEmid;
    char OAc2lLbTZ [12000];
    QU9OYM = (540 - 540);
    aa = (511 - 510);
    scanf ("%d%s%d", &RSFW1tVOz, &OAc2lLbTZ, &S3CJ6PsV);
    YraTBQuEmid = strlen (OAc2lLbTZ);
    io6zNEws = (215 - 215);
    {
        i = YraTBQuEmid -1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((627 - 627) <= i) {
            if (OAc2lLbTZ[i] >= (546 - 498) && 57 >= OAc2lLbTZ[i])
                io6zNEws = io6zNEws + aa * (OAc2lLbTZ[i] - 48);
            if ('a' <= OAc2lLbTZ[i] && OAc2lLbTZ[i] <= 'z')
                io6zNEws = io6zNEws + aa * (OAc2lLbTZ[i] + (871 - 861) - 'a');
            if (OAc2lLbTZ[i] >= 'A' && OAc2lLbTZ[i] <= 'Z')
                io6zNEws = io6zNEws + aa * (OAc2lLbTZ[i] + 10 - 'A');
            i--;
            aa = aa * RSFW1tVOz;
        };
    }
    if (io6zNEws == 0)
        ;
    while (io6zNEws > 0) {
        QU9OYM = QU9OYM +1;
        w[QU9OYM] = io6zNEws % S3CJ6PsV;
        io6zNEws = io6zNEws / S3CJ6PsV;
    }
    for (i = QU9OYM; i >= 1; i--) {
        if (w[i] < 10)
            printf ("%d", w[i]);
        else
            printf ("%c", 'A' + w[i] - 10);
    };
}

