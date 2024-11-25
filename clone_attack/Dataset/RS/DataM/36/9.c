main () {
    char X74fcVH [(262 - 162)], jICDZs [100] = {'\0'}, V0HC9S3OI [100] = {'\0'}, c, Hm5WnZ;
    gets (X74fcVH);
    int YXa2J34oMK, d72lCydZ, BJHjmZdni, EY0gQRD2, kAbnBdzNSY7, t4gFClh9rn;
    for (BJHjmZdni = (909 - 909); !(' ' == X74fcVH[BJHjmZdni]); BJHjmZdni = BJHjmZdni +1)
        jICDZs[BJHjmZdni] = X74fcVH[BJHjmZdni];
    for (t4gFClh9rn = (870 - 870), kAbnBdzNSY7 = BJHjmZdni +(622 - 621); !('\0' == X74fcVH[kAbnBdzNSY7]); kAbnBdzNSY7 = kAbnBdzNSY7 + 1) {
        V0HC9S3OI[t4gFClh9rn] = X74fcVH[kAbnBdzNSY7];
        t4gFClh9rn = t4gFClh9rn + 1;
    }
    YXa2J34oMK = strlen (jICDZs);
    for (BJHjmZdni = (79 - 79); YXa2J34oMK > BJHjmZdni; BJHjmZdni = BJHjmZdni +1)
        for (EY0gQRD2 = 0; YXa2J34oMK -BJHjmZdni-(584 - 583) > EY0gQRD2; EY0gQRD2 = EY0gQRD2 +1)
            if (jICDZs[EY0gQRD2 +1] < jICDZs[EY0gQRD2]) {
                c = jICDZs[EY0gQRD2];
                jICDZs[EY0gQRD2] = jICDZs[EY0gQRD2 +1];
                jICDZs[EY0gQRD2 +1] = c;
            }
    d72lCydZ = strlen (V0HC9S3OI);
    for (BJHjmZdni = 0; d72lCydZ > BJHjmZdni; BJHjmZdni++)
        for (EY0gQRD2 = 0; d72lCydZ - BJHjmZdni -1 > EY0gQRD2; EY0gQRD2++)
            if (V0HC9S3OI[EY0gQRD2] > V0HC9S3OI[EY0gQRD2 +1]) {
                Hm5WnZ = V0HC9S3OI[EY0gQRD2];
                V0HC9S3OI[EY0gQRD2] = V0HC9S3OI[EY0gQRD2 +1];
                V0HC9S3OI[EY0gQRD2 +1] = Hm5WnZ;
            }
    if (YXa2J34oMK != d72lCydZ)
        ;
    else if (strcmp (jICDZs, V0HC9S3OI) == 0)
        ;
    else
        ;
}

