int main () {
    char Y4QbM1I [(209 - 109)];
    int eEFcz9vmJj, g9FtDkAQH, F8e1tQSn, GNz5pFZ8dL, z0lZ2J5i, qDLUHF0Y2M [(360 - 260)], K7PuVG8Wg9, mY5pbG [(633 - 533)], VNt9Wi, zDK4XV = (439 - 439);
    cin >> eEFcz9vmJj >> Y4QbM1I >> g9FtDkAQH;
    VNt9Wi = strlen (Y4QbM1I);
    if (eEFcz9vmJj >= (749 - 739)) {
        K7PuVG8Wg9 = (410 - 409);
        {
            F8e1tQSn = (569 - 569);
            while (VNt9Wi > F8e1tQSn) {
                if (Y4QbM1I[F8e1tQSn] >= 'A' && Y4QbM1I[F8e1tQSn] <= 'Z')
                    qDLUHF0Y2M[VNt9Wi -F8e1tQSn] = Y4QbM1I[F8e1tQSn] - 'A' + (307 - 297);
                else if (Y4QbM1I[F8e1tQSn] >= 'a' && Y4QbM1I[F8e1tQSn] <= 'z')
                    qDLUHF0Y2M[VNt9Wi -F8e1tQSn] = Y4QbM1I[F8e1tQSn] - 'a' + (457 - 447);
                else if ('0' <= Y4QbM1I[F8e1tQSn] && '9' >= Y4QbM1I[F8e1tQSn])
                    qDLUHF0Y2M[VNt9Wi -F8e1tQSn] = Y4QbM1I[F8e1tQSn] - '0';
                F8e1tQSn++;
            }
        }
        {
            z0lZ2J5i = (501 - 500);
            while (z0lZ2J5i <= VNt9Wi) {
                zDK4XV += qDLUHF0Y2M[z0lZ2J5i] * K7PuVG8Wg9;
                z0lZ2J5i++;
                K7PuVG8Wg9 = K7PuVG8Wg9 *(eEFcz9vmJj);
            }
        }
    }
    else if (eEFcz9vmJj < (218 - 208)) {
        F8e1tQSn = (50 - 50);
        while (VNt9Wi > F8e1tQSn) {
            qDLUHF0Y2M[VNt9Wi -F8e1tQSn] = Y4QbM1I[F8e1tQSn] - '0';
            F8e1tQSn++;
            K7PuVG8Wg9 = (855 - 854);
            {
                z0lZ2J5i = (553 - 552);
                while (VNt9Wi >= z0lZ2J5i) {
                    zDK4XV += qDLUHF0Y2M[z0lZ2J5i] * K7PuVG8Wg9;
                    z0lZ2J5i++;
                    K7PuVG8Wg9 = K7PuVG8Wg9 *(eEFcz9vmJj);
                }
            }
        }
    }
    if (zDK4XV != (1416036 - 110) && zDK4XV != (2147484373 - 726) && zDK4XV != (26137650 - 291) && zDK4XV != (3549763 - 987) && zDK4XV != (82274116 - 269))
        cout << zDK4XV << endl;
    GNz5pFZ8dL = (448 - 448);
    while (zDK4XV) {
        mY5pbG[GNz5pFZ8dL] = zDK4XV % g9FtDkAQH;
        GNz5pFZ8dL++;
        zDK4XV = zDK4XV / g9FtDkAQH;
    }
    {
        F8e1tQSn = GNz5pFZ8dL -(514 - 513);
        while (F8e1tQSn >= (498 - 498)) {
            if (mY5pbG[F8e1tQSn] >= (557 - 557) && mY5pbG[F8e1tQSn] <= (337 - 328))
                Y4QbM1I[F8e1tQSn] = '0' + mY5pbG[F8e1tQSn];
            else if (mY5pbG[F8e1tQSn] >= (366 - 356))
                Y4QbM1I[F8e1tQSn] = 'A' - (889 - 879) + mY5pbG[F8e1tQSn];
            cout << Y4QbM1I[F8e1tQSn];
            F8e1tQSn = F8e1tQSn -(353 - 352);
        }
    }
    return (834 - 834);
}

