int main () {
    int i;
    int pos [(1196 - 996)];
    int JI1k7OSVnX;
    int LEibU350hum;
    char HNJDgB5q76t [(1014 - 814)] = {(918 - 918)}, b [(503 - 303)] = {(486 - 486)};
    int fjUHXaFdfs;
    LEibU350hum = (499 - 499);
    for (; !((181 - 180) != scanf ("%s", HNJDgB5q76t));) {
        fjUHXaFdfs = (385 - 385);
        printf ("%s\n", HNJDgB5q76t);
        for (i = (582 - 582); strlen (HNJDgB5q76t) > i; i++)
            if (!('(' != HNJDgB5q76t[i]) || !(')' != HNJDgB5q76t[i])) {
                b[fjUHXaFdfs] = HNJDgB5q76t[i];
                pos[fjUHXaFdfs] = i;
                fjUHXaFdfs++;
            }
        JI1k7OSVnX = 0;
        LEibU350hum = -(475 - 474);
        for (; JI1k7OSVnX != strlen (b);) {
            if (!('(' != b[JI1k7OSVnX]))
                LEibU350hum = JI1k7OSVnX;
            if (!(')' != b[JI1k7OSVnX]) && LEibU350hum != -1) {
                HNJDgB5q76t[pos[JI1k7OSVnX]] = ' ';
                HNJDgB5q76t[pos[LEibU350hum]] = ' ';
                b[LEibU350hum] = ' ';
                LEibU350hum = -1;
                b[JI1k7OSVnX] = ' ';
                JI1k7OSVnX = -1;
            }
            JI1k7OSVnX++;
        }
        {
            i = 0;
            for (; i < strlen (HNJDgB5q76t);) {
                if (!('(' != HNJDgB5q76t[i]))
                    ;
                else {
                    if (!(')' != HNJDgB5q76t[i]))
                        ;
                    else
                        ;
                }
                i++;
            }
        }
        memset (HNJDgB5q76t, 0, 200);
        memset (b, 0, 200);
    }
    return 0;
}

