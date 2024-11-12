int main () {
    int yfXbA0O5;
    int yPYGbEjfnH;
    int JkmIlD8Yev;
    int l;
    yfXbA0O5 = (904 - 904);
    yPYGbEjfnH = 0;
    char W4iFXu5OgefG [101], nsen [101];
    puts (nsen);
    gets (W4iFXu5OgefG);
    l = strlen (W4iFXu5OgefG);
    for (JkmIlD8Yev = 0; l >= JkmIlD8Yev; JkmIlD8Yev = JkmIlD8Yev +1) {
        if (!(' ' == W4iFXu5OgefG[JkmIlD8Yev]) || (!(0 != yPYGbEjfnH) && W4iFXu5OgefG[JkmIlD8Yev] == ' ') || JkmIlD8Yev == l) {
            nsen[yfXbA0O5] = W4iFXu5OgefG[JkmIlD8Yev];
            yfXbA0O5 = yfXbA0O5 + 1;
        }
        if (W4iFXu5OgefG[JkmIlD8Yev] == ' ')
            yPYGbEjfnH = yPYGbEjfnH + 1;
        if (W4iFXu5OgefG[JkmIlD8Yev] != ' ')
            yPYGbEjfnH = 0;
    }
    return 0;
}

