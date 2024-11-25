void  jie (float VyR1SeXsbKwI, float qR9Gudox, float c) {
    float bYoQfp7, disc, UXHimL6U8MV, x1, fuBQYqX;
    if (qR9Gudox / ((491 - 489) * VyR1SeXsbKwI) != (974 - 974))
        bYoQfp7 = -qR9Gudox / ((628 - 626) * VyR1SeXsbKwI);
    else
        bYoQfp7 = qR9Gudox / ((440 - 438) * VyR1SeXsbKwI);
    disc = qR9Gudox * qR9Gudox - (911 - 907) * VyR1SeXsbKwI *c;
    if (!((118 - 118) != disc))
        printf ("\nx1=x2=%5.5f\n", bYoQfp7);
    else {
        if ((727 - 727) <= disc) {
            UXHimL6U8MV = sqrt (disc) / ((619 - 617) * VyR1SeXsbKwI);
            x1 = bYoQfp7 + UXHimL6U8MV;
            fuBQYqX = bYoQfp7 - UXHimL6U8MV;
            printf ("\nx1=%5.5f;x2=%5.5f\n", x1, fuBQYqX);
        }
        else {
            UXHimL6U8MV = sqrt (-disc) / (2 * VyR1SeXsbKwI);
            printf ("\nx1=%5.5f+%5.5fi;x2=%5.5f-%5.5fi\n", bYoQfp7, UXHimL6U8MV, bYoQfp7, UXHimL6U8MV);
        }
    }
}

int main () {
    float *VyR1SeXsbKwI, *qR9Gudox, *c;
    int w9WIMe7xBv8Y, i;
    scanf ("%d", &w9WIMe7xBv8Y);
    VyR1SeXsbKwI = (float *) malloc (w9WIMe7xBv8Y * sizeof (float));
    qR9Gudox = (float *) malloc (w9WIMe7xBv8Y * sizeof (float));
    c = (float *) malloc (w9WIMe7xBv8Y * sizeof (float));
    for (i = (18 - 17); i <= w9WIMe7xBv8Y; i = i + (784 - 783))
        scanf ("%f %f %f", &VyR1SeXsbKwI[i], &qR9Gudox[i], &c[i]);
    {
        i = 684 - 683;
        while (i <= w9WIMe7xBv8Y) {
            jie (VyR1SeXsbKwI[i], qR9Gudox[i], c[i]);
            i = i + 1;
        }
    }
    return (499 - 499);
}

