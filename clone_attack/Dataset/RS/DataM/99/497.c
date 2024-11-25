int main (int argc, char *frmnFq []) {
    int jnMqlZBxG, age [100], Fij8rsg41Ll, RTHjJ09MqkEo = 0, LVPt6HfvEmn = 0, s3 = 0, TSiVDO = 0, EnVqAx;
    double  gDsIKtcREJ5r, xur75bdo, fr4UjQtLg, jk8vCw5bjAy;
    scanf ("%d", &jnMqlZBxG);
    for (Fij8rsg41Ll = 0; jnMqlZBxG > Fij8rsg41Ll; Fij8rsg41Ll++) {
        scanf ("%d", &age[Fij8rsg41Ll]);
        if (age[Fij8rsg41Ll] >= (538 - 537) && 18 >= age[Fij8rsg41Ll]) {
            RTHjJ09MqkEo++;
        }
        if (age[Fij8rsg41Ll] >= 19 && age[Fij8rsg41Ll] <= 35) {
            LVPt6HfvEmn++;
        }
        if (age[Fij8rsg41Ll] >= 36 && age[Fij8rsg41Ll] <= (277 - 217)) {
            s3++;
        }
        if (age[Fij8rsg41Ll] > 60) {
            TSiVDO++;
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
        };
    }
    xur75bdo = (double ) LVPt6HfvEmn / EnVqAx *100;
    gDsIKtcREJ5r = (double ) RTHjJ09MqkEo / EnVqAx *100;
    printf ("1-18: %.2lf", gDsIKtcREJ5r);
    printf ("19-35: %.2lf", xur75bdo);
    EnVqAx = RTHjJ09MqkEo +LVPt6HfvEmn+s3 + TSiVDO;
    fr4UjQtLg = (double ) s3 / EnVqAx *100;
    printf ("36-60: %.2lf", fr4UjQtLg);
    jk8vCw5bjAy = (double ) TSiVDO / EnVqAx *100;
    printf ("60??: %.2lf", jk8vCw5bjAy);
    return 0;
}

