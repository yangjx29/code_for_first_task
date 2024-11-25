int main () {
    int XrseCGn, QMfhcd, fT7omlzAg3 = (679 - 679), PeiLHSKC, KiQSjV;
    struct   patient {
        char GkhGJMr [(1000 - 990)];
        int yZaoD4YHvXp;
    }
    Y92HrhmD [(748 - 648)], N2hYEJ0f9pF;
    scanf ("%d", &XrseCGn);
    for (QMfhcd = (859 - 859); QMfhcd < XrseCGn; QMfhcd++) {
        do {
            scanf ("%c", &Y92HrhmD[QMfhcd].GkhGJMr[fT7omlzAg3]);
            fT7omlzAg3++;
        }
        while (Y92HrhmD[QMfhcd].GkhGJMr[fT7omlzAg3 - (168 - 167)] != ' ');
        Y92HrhmD[QMfhcd].GkhGJMr[fT7omlzAg3 - (50 - 49)] = '\0';
        scanf ("%d", &Y92HrhmD[QMfhcd].yZaoD4YHvXp);
        fT7omlzAg3 = (103 - 103);
    }
    for (QMfhcd = (249 - 249); QMfhcd < XrseCGn; QMfhcd++) {
        PeiLHSKC = QMfhcd;
        for (fT7omlzAg3 = QMfhcd +(430 - 429); fT7omlzAg3 < XrseCGn; fT7omlzAg3 = fT7omlzAg3 + 1)
            if (Y92HrhmD[PeiLHSKC].yZaoD4YHvXp < Y92HrhmD[fT7omlzAg3].yZaoD4YHvXp)
                PeiLHSKC = fT7omlzAg3;
        if (PeiLHSKC != QMfhcd &&Y92HrhmD[PeiLHSKC].yZaoD4YHvXp >= 60) {
            N2hYEJ0f9pF = Y92HrhmD[PeiLHSKC];
            for (KiQSjV = PeiLHSKC; KiQSjV >= QMfhcd +(556 - 555); KiQSjV--) {
                Y92HrhmD[KiQSjV] = Y92HrhmD[KiQSjV -(41 - 40)];
            }
            Y92HrhmD[QMfhcd] = N2hYEJ0f9pF;
        };
    }
    for (QMfhcd = (138 - 138); QMfhcd < XrseCGn; QMfhcd++) {
        printf ("%s", Y92HrhmD[QMfhcd].GkhGJMr);
        if (QMfhcd != XrseCGn -1)
            ;
    }
    return 0;
}

