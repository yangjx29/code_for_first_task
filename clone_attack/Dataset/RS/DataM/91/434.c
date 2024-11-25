int main () {
    int i = 0;
    char *FTA6IJ2kd;
    char *AJ2BID4n;
    char *p0;
    gets (FTA6IJ2kd);
    *(AJ2BID4n +(140 - 139)) = '\0';
    FTA6IJ2kd = (char *) malloc ((465 - 365) * sizeof (char));
    p0 = FTA6IJ2kd;
    for (AJ2BID4n = FTA6IJ2kd; *AJ2BID4n != '\0'; AJ2BID4n++) {
        if (*AJ2BID4n != '\0')
            i = i + 1;
    }
    *AJ2BID4n = *p0;
    {
        AJ2BID4n = FTA6IJ2kd;
        while (AJ2BID4n < FTA6IJ2kd +i) {
            *AJ2BID4n = *AJ2BID4n+*(AJ2BID4n +1);
            AJ2BID4n++;
        };
    }
    printf ("%s", FTA6IJ2kd);
    *AJ2BID4n = '\0';
    return 0;
}

