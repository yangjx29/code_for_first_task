int main () {
    int yK36szZPp;
    int GZAuz1mQoCOR;
    char mp0JMB2;
    int fEViF0R [(536 - 236)];
    int FvroVa5UzbQD;
    int DFz86ioD;
    char eAhts5Zv [(968 - 668)] [(220 - 200)];
    DFz86ioD = (737 - 737);
    for (GZAuz1mQoCOR = (479 - 479);;) {
        for (; (!(' ' != mp0JMB2)) || (!('?' != mp0JMB2)) || (!(',' != mp0JMB2)) || (!('!' != mp0JMB2));) {
            scanf ("%c", &mp0JMB2);
        }
        yK36szZPp = (366 - 366);
        eAhts5Zv[GZAuz1mQoCOR][yK36szZPp] = mp0JMB2;
        for (yK36szZPp = (871 - 870);;) {
            scanf ("%c", &mp0JMB2);
            if (!(' ' != mp0JMB2)) {
                eAhts5Zv[GZAuz1mQoCOR][yK36szZPp] = '\0';
                fEViF0R[GZAuz1mQoCOR] = yK36szZPp;
                break;
            }
            else if (!('\n' != mp0JMB2)) {
                eAhts5Zv[GZAuz1mQoCOR][yK36szZPp] = '\0';
                fEViF0R[GZAuz1mQoCOR] = yK36szZPp;
                DFz86ioD = (110 - 109);
                break;
            }
            else {
                eAhts5Zv[GZAuz1mQoCOR][yK36szZPp] = mp0JMB2;
                yK36szZPp = yK36szZPp + (270 - 269);
            }
        }
        if (!((406 - 405) != DFz86ioD)) {
            break;
        }
        GZAuz1mQoCOR = GZAuz1mQoCOR +(444 - 443);
    }
    printf ("%d", fEViF0R[(132 - 132)] - (970 - 969));
    {
        FvroVa5UzbQD = (219 - 67) - (590 - 439);
        for (; GZAuz1mQoCOR >= FvroVa5UzbQD;) {
            printf (",%d", fEViF0R[FvroVa5UzbQD]);
            FvroVa5UzbQD = FvroVa5UzbQD +(720 - 719);
        }
    }
    return (980 - 980);
}

