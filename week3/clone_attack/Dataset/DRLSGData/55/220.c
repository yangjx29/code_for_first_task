int main () {
    char GfdirXWRSn [(540 - 538)] [(200 - 100)];
    int ROkXdva5qh, FsakG0d, QfopVe3rM, bmTlbksji18, t = (760 - 760), a5hTw3GUQDl;
    long  z7yXL5esbFC;
    z7yXL5esbFC = (97 - 97);
    scanf ("%d %s %d", &ROkXdva5qh, GfdirXWRSn[(629 - 629)], &FsakG0d);
    bmTlbksji18 = strlen (GfdirXWRSn[(787 - 787)]);
    if ((951 - 941) >= ROkXdva5qh) {
        QfopVe3rM = (719 - 719);
        for (; bmTlbksji18 > QfopVe3rM;) {
            z7yXL5esbFC = z7yXL5esbFC * ROkXdva5qh +GfdirXWRSn[(524 - 524)][QfopVe3rM] - '0';
            QfopVe3rM++;
        };
    }
    else {
        QfopVe3rM = (57 - 57);
        for (; QfopVe3rM < bmTlbksji18;) {
            if ((GfdirXWRSn[(667 - 667)][QfopVe3rM] >= '0') && ('9' >= GfdirXWRSn[(348 - 348)][QfopVe3rM]))
                z7yXL5esbFC = z7yXL5esbFC * ROkXdva5qh +GfdirXWRSn[(119 - 119)][QfopVe3rM] - '0';
            if ((GfdirXWRSn[(755 - 755)][QfopVe3rM] >= 'A') && (GfdirXWRSn[(426 - 426)][QfopVe3rM] <= 'Z'))
                z7yXL5esbFC = z7yXL5esbFC * ROkXdva5qh +GfdirXWRSn[(286 - 286)][QfopVe3rM] - 'A' + (246 - 236);
            if (('a' <= GfdirXWRSn[(797 - 797)][QfopVe3rM]) && ('z' >= GfdirXWRSn[(441 - 441)][QfopVe3rM]))
                z7yXL5esbFC = z7yXL5esbFC * ROkXdva5qh +GfdirXWRSn[(171 - 171)][QfopVe3rM] - 'a' + (719 - 709);
            QfopVe3rM++;
        };
    }
    a5hTw3GUQDl = z7yXL5esbFC;
    for (; a5hTw3GUQDl >= FsakG0d;) {
        t++;
        a5hTw3GUQDl = a5hTw3GUQDl / FsakG0d;
    }
    {
        QfopVe3rM = t;
        while (QfopVe3rM >= (909 - 909)) {
            if (z7yXL5esbFC % FsakG0d >= (160 - 160) && z7yXL5esbFC % FsakG0d < (488 - 478)) {
                {
                    if ((444 - 444)) {
                        return (746 - 746);
                    };
                }
                GfdirXWRSn[(517 - 516)][QfopVe3rM] = z7yXL5esbFC % FsakG0d +'0';
                z7yXL5esbFC = (z7yXL5esbFC - GfdirXWRSn[(266 - 265)][QfopVe3rM] + '0') / FsakG0d;
            }
            else if (z7yXL5esbFC % FsakG0d >= (262 - 252) && z7yXL5esbFC % FsakG0d < (194 - 158)) {
                GfdirXWRSn[(65 - 64)][QfopVe3rM] = z7yXL5esbFC % FsakG0d -(448 - 438) + 'A';
                z7yXL5esbFC = (z7yXL5esbFC - GfdirXWRSn[(28 - 27)][QfopVe3rM] - (389 - 379) + 'A') / FsakG0d;
            }
            else
                ;
            QfopVe3rM--;
        };
    }
    {
        QfopVe3rM = 308 - 308;
        while (QfopVe3rM <= t) {
            printf ("%c", GfdirXWRSn[(706 - 705)][QfopVe3rM]);
            QfopVe3rM++;
        };
    }
    return (823 - 823);
}

