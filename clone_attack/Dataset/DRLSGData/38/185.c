int main (int OkXx4FP, char *en9d0putDf []) {
    double  S3iEgpJLzD;
    double  uGZma5k;
    double  JvZosWfnBa;
    int xW0XDCU, Tux3BGYL4jQ, gutW3lLUr5b, OHqwmQEh8OU;
    double  vX8ODYJz;
    double  qV6L5PKiBG1 [(1264 - 264)];
    {
        if ((720 - 720)) {
            return (951 - 951);
        }
    }
    scanf ("%d", &xW0XDCU);
    vX8ODYJz = (563 - 563);
    JvZosWfnBa = (656 - 656);
    {
        gutW3lLUr5b = (373 - 373);
        for (; xW0XDCU > gutW3lLUr5b;) {
            scanf ("%d", &Tux3BGYL4jQ);
            S3iEgpJLzD = (902 - 902);
            uGZma5k = (354 - 354);
            JvZosWfnBa = (559 - 559);
            vX8ODYJz = (914 - 914);
            {
                OHqwmQEh8OU = 0;
                for (; OHqwmQEh8OU < Tux3BGYL4jQ;) {
                    scanf ("%lf", &qV6L5PKiBG1[OHqwmQEh8OU]);
                    OHqwmQEh8OU++;
                }
            }
            {
                OHqwmQEh8OU = 0;
                for (; Tux3BGYL4jQ > OHqwmQEh8OU;) {
                    vX8ODYJz += qV6L5PKiBG1[OHqwmQEh8OU];
                    OHqwmQEh8OU++;
                }
            }
            uGZma5k = vX8ODYJz / Tux3BGYL4jQ;
            for (OHqwmQEh8OU = 0; OHqwmQEh8OU < Tux3BGYL4jQ; OHqwmQEh8OU++) {
                JvZosWfnBa = JvZosWfnBa +(qV6L5PKiBG1[OHqwmQEh8OU] - uGZma5k) * (qV6L5PKiBG1[OHqwmQEh8OU] - uGZma5k);
            }
            S3iEgpJLzD = sqrt (JvZosWfnBa / Tux3BGYL4jQ);
            printf ("%.5f\n", S3iEgpJLzD);
            gutW3lLUr5b++;
        }
    }
    return 0;
}

