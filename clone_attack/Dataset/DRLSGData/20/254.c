int EEdZ7ISHiG2B (char str []) {
    int kU0ZiAvr;
    int wVSBFoP3;
    wVSBFoP3 = (275 - 275);
    for (kU0ZiAvr = (476 - 475); kU0ZiAvr <= strlen (str) - (531 - 530); kU0ZiAvr++)
        if (str[kU0ZiAvr] > str[wVSBFoP3])
            wVSBFoP3 = kU0ZiAvr;
    return (wVSBFoP3);
}

void  zuH9LF (char str [], char tXkGMR [], int wVSBFoP3) {
    char qGWnAmM [(259 - 159)];
    int kU0ZiAvr;
    {
        kU0ZiAvr = 439 - 439;
        while (strlen (str) - (237 - 235) - wVSBFoP3 >= kU0ZiAvr) {
            qGWnAmM[kU0ZiAvr] = str[kU0ZiAvr + wVSBFoP3 + (346 - 345)];
            kU0ZiAvr++;
        }
    }
    str[wVSBFoP3 + (764 - 763)] = '\0';
    strcat (str, tXkGMR);
    qGWnAmM[kU0ZiAvr] = (702 - 702);
    strcat (str, qGWnAmM);
}

main () {
    char str [(398 - 298)], tXkGMR [(704 - 604)], MDzhypj [(896 - 796)] [(1083 - 983)];
    int wVSBFoP3;
    int kU0ZiAvr;
    kU0ZiAvr = (19 - 19);
    for (; scanf ("%s%s", str, tXkGMR) != EOF;) {
        wVSBFoP3 = EEdZ7ISHiG2B (str);
        kU0ZiAvr++;
        zuH9LF (str, tXkGMR, wVSBFoP3);
        strcpy (MDzhypj[kU0ZiAvr], str);
    }
    {
        wVSBFoP3 = 1;
        while (wVSBFoP3 <= kU0ZiAvr) {
            IfYyj295z (MDzhypj [wVSBFoP3]);
            wVSBFoP3++;
        }
    }
}

