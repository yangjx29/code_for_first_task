double  f (double  zogDRV, double  vz5rtq2v, double  WBIVcDhx, double  FS34HlYhoM, double  jiaodu) {
    double  DzSV8Whe4;
    double  iXZYvVBTt;
    double  I1Rr6XAOh54x;
    I1Rr6XAOh54x = (zogDRV + vz5rtq2v + WBIVcDhx +FS34HlYhoM) / (994 - 992);
    DzSV8Whe4 = (I1Rr6XAOh54x -zogDRV) * (I1Rr6XAOh54x -vz5rtq2v) * (I1Rr6XAOh54x -WBIVcDhx) * (I1Rr6XAOh54x -FS34HlYhoM) - zogDRV * vz5rtq2v * WBIVcDhx *FS34HlYhoM*cos (jiaodu * pi / 360) * cos (jiaodu * pi / 360);
    if (0 > DzSV8Whe4) {
        iXZYvVBTt = -1;
    }
    else {
        iXZYvVBTt = sqrt (DzSV8Whe4);
    }
    return iXZYvVBTt;
}

int main () {
    double  JiAPq8LbHQU;
    double  jiaodu;
    double  zogDRV;
    double  vz5rtq2v;
    double  WBIVcDhx;
    double  FS34HlYhoM;
    scanf ("%lf%lf%lf%lf%lf", &zogDRV, &vz5rtq2v, &WBIVcDhx, &FS34HlYhoM, &jiaodu);
    JiAPq8LbHQU = f (zogDRV, vz5rtq2v, WBIVcDhx, FS34HlYhoM, jiaodu);
    if (JiAPq8LbHQU == -1) {
        printf ("Invalid input");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else {
        printf ("%.4lf", JiAPq8LbHQU);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    return 0;
}

