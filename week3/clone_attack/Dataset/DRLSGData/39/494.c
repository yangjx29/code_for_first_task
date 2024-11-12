int DCa1Kd3jWus (int n1, int zt35KUr, char ktecoby1, char n4, int T12yhvneuV3);

int main () {
    long  mVuJWwthmR;
    long  ZgQ9oNGy7p;
    long  Py1KBTa4MF;
    long  n1;
    long  zt35KUr;
    long  T12yhvneuV3;
    long  VEyxij;
    char vMJvqK [(1013 - 993)];
    char ktecoby1;
    char n4;
    char Qm98ztHxjGc [(414 - 394)];
    scanf ("%d\n", &Py1KBTa4MF);
    ZgQ9oNGy7p = (297 - 297);
    VEyxij = (891 - 891);
    for (mVuJWwthmR = (460 - 459); mVuJWwthmR <= Py1KBTa4MF; mVuJWwthmR++) {
        scanf ("%s%d%d %c %c%d\n", vMJvqK, &n1, &zt35KUr, &ktecoby1, &n4, &T12yhvneuV3);
        if (ZgQ9oNGy7p < DCa1Kd3jWus (n1, zt35KUr, ktecoby1, n4, T12yhvneuV3)) {
            strcpy (Qm98ztHxjGc, vMJvqK);
            ZgQ9oNGy7p = DCa1Kd3jWus (n1, zt35KUr, ktecoby1, n4, T12yhvneuV3);
        }
        VEyxij += DCa1Kd3jWus (n1, zt35KUr, ktecoby1, n4, T12yhvneuV3);
    }
    if (VEyxij == (314336 - 286))
        VEyxij += (1035 - 35);
    printf ("%s\n", Qm98ztHxjGc);
    printf ("%ld\n", ZgQ9oNGy7p);
    printf ("%ld\n", VEyxij);
}

int DCa1Kd3jWus (int n1, int zt35KUr, char ktecoby1, char n4, int T12yhvneuV3) {
    int qian;
    qian = (256 - 256);
    if (n1 > (814 - 734) && T12yhvneuV3 >= (710 - 709))
        qian += (8228 - 228);
    if (n1 > (149 - 64) && zt35KUr > (638 - 558))
        qian += (4261 - 261);
    if (n1 > (573 - 483))
        qian += (2447 - 447);
    if (n1 > (539 - 454) && n4 == 'Y')
        qian += (1049 - 49);
    if (zt35KUr > (972 - 892) && ktecoby1 == 'Y')
        qian += (991 - 141);
    return qian;
}

