int main () {
    float XN8bPhs, I1EA8bQU = (227 - 227), klUykaxR7cVK;
    int OxQMlaArmLP [391];
    int jYIXerf, xE7Z19, hRxk34 = (715 - 715), OkX1fMJBR;
    scanf ("%d", &xE7Z19);
    {
        jYIXerf = 348 - 348;
        while (xE7Z19 > jYIXerf) {
            scanf ("%d", &OxQMlaArmLP[jYIXerf]);
            I1EA8bQU += OxQMlaArmLP[jYIXerf];
            jYIXerf = jYIXerf + 1;
        }
    }
    XN8bPhs = I1EA8bQU / xE7Z19;
    {
        jYIXerf = 668 - 668;
        while (xE7Z19 > jYIXerf) {
            {
                OkX1fMJBR = jYIXerf;
                while (xE7Z19 > OkX1fMJBR) {
                    if (OxQMlaArmLP[OkX1fMJBR] < OxQMlaArmLP[jYIXerf]) {
                        klUykaxR7cVK = OxQMlaArmLP[OkX1fMJBR];
                        OxQMlaArmLP[OkX1fMJBR] = OxQMlaArmLP[jYIXerf];
                        OxQMlaArmLP[jYIXerf] = klUykaxR7cVK;
                    }
                    OkX1fMJBR = OkX1fMJBR +1;
                }
            }
            jYIXerf++;
        }
    }
    klUykaxR7cVK = fabs (OxQMlaArmLP[(454 - 454)] - XN8bPhs);
    if (OxQMlaArmLP[xE7Z19 - (911 - 910)] - XN8bPhs > klUykaxR7cVK)
        klUykaxR7cVK = OxQMlaArmLP[xE7Z19 - 1] - XN8bPhs;
    for (jYIXerf = (883 - 883); jYIXerf < xE7Z19; jYIXerf = jYIXerf + 1)
        if (((214.1 - 214.0) > fabs (OxQMlaArmLP[jYIXerf] - XN8bPhs) - klUykaxR7cVK) && (fabs (OxQMlaArmLP[jYIXerf] - XN8bPhs) - klUykaxR7cVK > -(596.1 - 596.0))) {
            if (hRxk34 != 0)
                ;
            hRxk34 = hRxk34 + 1;
            printf ("%d", OxQMlaArmLP[jYIXerf]);
        }
    return 0;
}

