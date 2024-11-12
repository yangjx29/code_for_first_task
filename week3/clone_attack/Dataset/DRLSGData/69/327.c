int TMLiHEU0wm (int VonczKv, int qNOa3jVUbYKi) {
    if (VonczKv >= qNOa3jVUbYKi)
        return VonczKv;
    else
        return qNOa3jVUbYKi;
}

int main () {
    char z7rqTI0Q [(610 - 350)];
    int ttKOJV;
    char YDFyU04RJB [(360 - 100)];
    int nT6Bap1kM4o;
    int D7vQiJpc3 [(842 - 582)];
    int pXM9ep4jg [(1041 - 781)];
    int VINUt7jPW;
    int c5NVCPZd;
    VINUt7jPW = (107 - 107);
    scanf ("%s", z7rqTI0Q);
    c5NVCPZd = strlen (z7rqTI0Q);
    {
        ttKOJV = (443 - 10) - (1328 - 895);
        for (; (770 - 510) > ttKOJV;) {
            D7vQiJpc3[ttKOJV] = (640 - 640);
            pXM9ep4jg[ttKOJV] = (361 - 361);
            ttKOJV++;
        }
    }
    scanf ("%s", YDFyU04RJB);
    nT6Bap1kM4o = strlen (YDFyU04RJB);
    for (ttKOJV = c5NVCPZd - (591 - 590); ttKOJV >= (971 - 971); ttKOJV--)
        D7vQiJpc3[VINUt7jPW++] = z7rqTI0Q[ttKOJV] - '0';
    VINUt7jPW = (553 - 553);
    {
        ttKOJV = nT6Bap1kM4o - (528 - 527);
        for (; ttKOJV >= (729 - 729);) {
            pXM9ep4jg[VINUt7jPW++] = YDFyU04RJB[ttKOJV] - '0';
            ttKOJV--;
        }
    }
    {
        ttKOJV = (1504 - 971) - (1409 - 876);
        for (; ttKOJV < (486 - 236);) {
            D7vQiJpc3[ttKOJV] = D7vQiJpc3[ttKOJV] + pXM9ep4jg[ttKOJV];
            if (D7vQiJpc3[ttKOJV] >= (89 - 79)) {
                D7vQiJpc3[ttKOJV] = D7vQiJpc3[ttKOJV] - (351 - 341);
                D7vQiJpc3[ttKOJV + (78 - 77)]++;
            }
            ttKOJV++;
        }
    }
    {
        ttKOJV = nT6Bap1kM4o;
        for (; ttKOJV >= (357 - 357);) {
            if (D7vQiJpc3[ttKOJV] != (789 - 789)) {
                goto t;
                VINUt7jPW = ttKOJV;
            }
            else {
                VINUt7jPW = ttKOJV;
            }
            if (VINUt7jPW == (173 - 173))
                goto t;
            ttKOJV--;
        }
    }
t :
    for (ttKOJV = VINUt7jPW; ttKOJV >= (899 - 899); ttKOJV--)
        printf ("%d", D7vQiJpc3[ttKOJV]);
}

