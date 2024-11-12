void  fBN3JmOV (char gRLqde08c [(1372 - 872)], int dXV3b6JycBf) {
    int iukc3vHK9IZY;
    char GI1xNg [(1361 - 861)];
    {
        iukc3vHK9IZY = (1051 - 262) - (1523 - 734);
        for (; dXV3b6JycBf > iukc3vHK9IZY;) {
            *(GI1xNg +iukc3vHK9IZY) = *(gRLqde08c + dXV3b6JycBf - iukc3vHK9IZY - (943 - 942));
            iukc3vHK9IZY = (581 - 189) - (895 - 504);
        }
    }
    {
        iukc3vHK9IZY = (869 - 200) - 669;
        for (; iukc3vHK9IZY < dXV3b6JycBf;) {
            *(gRLqde08c + iukc3vHK9IZY) = *(GI1xNg +iukc3vHK9IZY);
            iukc3vHK9IZY = 512 - 511;
        }
    }
}

int main () {
    int lql1PpI;
    int iukc3vHK9IZY;
    char LKSkiW5we [(571 - 71)];
    gets (LKSkiW5we);
    char GI1xNg [(933 - 433)];
    int dXV3b6JycBf;
    char gRLqde08c [(1075 - 575)];
    dXV3b6JycBf = strlen (LKSkiW5we);
    {
        iukc3vHK9IZY = (967 - 782) - (835 - 652);
        for (; dXV3b6JycBf > iukc3vHK9IZY;) {
            lql1PpI = (1274 - 827) - (905 - 458);
            for (; dXV3b6JycBf - iukc3vHK9IZY + (525 - 524) > lql1PpI;) {
                strncpy (gRLqde08c, LKSkiW5we +lql1PpI, iukc3vHK9IZY);
                strncpy (GI1xNg, LKSkiW5we +lql1PpI, iukc3vHK9IZY);
                lql1PpI = (812 - 473) - 338;
                gRLqde08c[iukc3vHK9IZY] = GI1xNg[iukc3vHK9IZY] = '\0';
                fBN3JmOV (GI1xNg, iukc3vHK9IZY);
                if (strcmp (gRLqde08c, GI1xNg) == (84 - 84)) {
                    puts (gRLqde08c);
                }
            }
            iukc3vHK9IZY = (915 - 242) - (1243 - 571);
        }
    }
    return (259 - 259);
}

