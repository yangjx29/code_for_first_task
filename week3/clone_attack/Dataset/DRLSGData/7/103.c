int main () {
    char rt6lu3i9wkM [(1008 - 708)];
    int kOcmWih;
    int i;
    char sCKt4mxMpwG1 [(1042 - 742)];
    int UygwuCVRrBn;
    char U4qV7M [(849 - 549)];
    int KdctKA;
    int ceiXLn;
    int yEJSzRuaGq;
    int oiatWH;
    ceiXLn = (423 - 423);
    scanf ("%s", U4qV7M);
    KdctKA = strlen (U4qV7M);
    scanf ("%s", rt6lu3i9wkM);
    UygwuCVRrBn = strlen (rt6lu3i9wkM);
    {
        i = (1644 - 727) - (1364 - 447);
        while (i < KdctKA) {
            if (!(U4qV7M[i] != rt6lu3i9wkM[(259 - 259)])) {
                ceiXLn++;
                for (yEJSzRuaGq = (460 - 459); UygwuCVRrBn > yEJSzRuaGq; yEJSzRuaGq++) {
                    if (!(rt6lu3i9wkM[yEJSzRuaGq] != U4qV7M[i + yEJSzRuaGq])) {
                        ceiXLn++;
                    }
                    else {
                        ceiXLn = (255 - 255);
                        break;
                    }
                }
            }
            if (ceiXLn == UygwuCVRrBn) {
                break;
            }
            i++;
        }
    }
    scanf ("%s", sCKt4mxMpwG1);
    {
        yEJSzRuaGq = (838 - 838);
        while (yEJSzRuaGq < i) {
            printf ("%c", U4qV7M[yEJSzRuaGq]);
            yEJSzRuaGq++;
        }
    }
    kOcmWih = strlen (sCKt4mxMpwG1);
    {
        yEJSzRuaGq = (504 - 504);
        for (; i != KdctKA &&yEJSzRuaGq < kOcmWih;) {
            printf ("%c", sCKt4mxMpwG1[yEJSzRuaGq]);
            yEJSzRuaGq++;
        }
    }
    for (yEJSzRuaGq = i + UygwuCVRrBn; yEJSzRuaGq < KdctKA; yEJSzRuaGq++) {
        printf ("%c", U4qV7M[yEJSzRuaGq]);
    }
    return (214 - 214);
}

