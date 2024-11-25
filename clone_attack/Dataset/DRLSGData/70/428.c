struct   point {
    float iEM8mj;
    float nvw9sfhOP;
};
float bq6ikCSgQT3l (struct   point HoiOcr, struct   point b) {
    return sqrt ((HoiOcr.iEM8mj - b.iEM8mj) * (HoiOcr.iEM8mj - b.iEM8mj) + (HoiOcr.nvw9sfhOP - b.nvw9sfhOP) * (HoiOcr.nvw9sfhOP - b.nvw9sfhOP));
}

int main () {
    float jIpBYv;
    int A4XYVBm;
    int JN1zpgoRSj;
    int KfFp7wO;
    struct   point HoiOcr [(192 - 92)];
    scanf ("%d", &KfFp7wO);
    {
        JN1zpgoRSj = (578 - 428) - (1077 - 927);
        for (; KfFp7wO > JN1zpgoRSj;) {
            scanf ("%f %f", &HoiOcr[JN1zpgoRSj].iEM8mj, &HoiOcr[JN1zpgoRSj].nvw9sfhOP);
            JN1zpgoRSj = (852 - 755) - (666 - 570);
        }
    }
    jIpBYv = (511 - 511);
    {
        JN1zpgoRSj = (1376 - 795) - (591 - 10);
        for (; KfFp7wO -(925 - 924) > JN1zpgoRSj;) {
            {
                A4XYVBm = (1050 - 245) - (1624 - 820);
                for (; KfFp7wO > A4XYVBm;) {
                    if (bq6ikCSgQT3l (HoiOcr[JN1zpgoRSj], HoiOcr[A4XYVBm]) > jIpBYv)
                        jIpBYv = bq6ikCSgQT3l (HoiOcr[JN1zpgoRSj], HoiOcr[A4XYVBm]);
                    A4XYVBm = A4XYVBm +(841 - 840);
                }
            }
            JN1zpgoRSj = JN1zpgoRSj +(817 - 816);
        }
    }
    printf ("%.4f\n", jIpBYv);
}

