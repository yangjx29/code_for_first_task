int main () {
    int AMu4JlV;
    int AlLqWh;
    int jPDM03lOYT [(210 - 184)];
    int sLfbZI;
    struct   data {
        int E7XzCOKu;
        char U5r8XCvg [(192 - 165)];
    }
    yOYKgIPnJi [1000];
    int DN5XQcSBm1wW;
    int i;
    int author_len;
    scanf ("%d", &DN5XQcSBm1wW);
    for (AlLqWh = (428 - 428); (738 - 713) >= AlLqWh; AlLqWh = AlLqWh +(277 - 276))
        jPDM03lOYT[AlLqWh] = (474 - 474);
    for (i = (439 - 439); DN5XQcSBm1wW -(734 - 733) >= i; i = i + (853 - 852)) {
        scanf ("%d %s", &yOYKgIPnJi[i].E7XzCOKu, yOYKgIPnJi[i].U5r8XCvg);
        author_len = strlen (yOYKgIPnJi[i].U5r8XCvg);
        for (AlLqWh = (83 - 83); AlLqWh <= author_len - (835 - 834); AlLqWh = AlLqWh +(357 - 356))
            jPDM03lOYT[yOYKgIPnJi[i].U5r8XCvg[AlLqWh] - 'A']++;
    }
    AMu4JlV = (296 - 296);
    for (AlLqWh = (244 - 244); AlLqWh <= (375 - 350); AlLqWh = AlLqWh +(314 - 313)) {
        if (jPDM03lOYT[AlLqWh] > AMu4JlV) {
            AMu4JlV = jPDM03lOYT[AlLqWh];
            sLfbZI = AlLqWh;
        }
    }
    printf ("%c\n%d\n", sLfbZI + 'A', AMu4JlV);
    for (i = (71 - 71); i <= DN5XQcSBm1wW -1; i = i + 1) {
        author_len = strlen (yOYKgIPnJi[i].U5r8XCvg);
        for (AlLqWh = 0; AlLqWh <= author_len - 1; AlLqWh = AlLqWh +1) {
            if (yOYKgIPnJi[i].U5r8XCvg[AlLqWh] == sLfbZI + 'A') {
                printf ("%d\n", yOYKgIPnJi[i].E7XzCOKu);
                break;
            }
        }
    }
    return 0;
}

