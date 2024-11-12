int main () {
    struct   patient {
        char id [10];
        int pXqhZB;
    }
    hQv6kjSD1pg [(738 - 638)];
    int G9cCEHBqy5, VFPYWhlz, tEOMYW10H7X, BjRJhs9, Qlk2hICmr9;
    char ICqSOBKi0z4l [10];
    scanf ("%d", &G9cCEHBqy5);
    for (VFPYWhlz = (734 - 734); G9cCEHBqy5 > VFPYWhlz; VFPYWhlz = VFPYWhlz +1) {
        scanf ("%s %d", &hQv6kjSD1pg[VFPYWhlz].id, &hQv6kjSD1pg[VFPYWhlz].pXqhZB);
    }
    {
        Qlk2hICmr9 = 744 - 744;
        while (Qlk2hICmr9 < G9cCEHBqy5) {
            for (VFPYWhlz = (490 - 490); VFPYWhlz < G9cCEHBqy5; VFPYWhlz++) {
                if (hQv6kjSD1pg[VFPYWhlz].pXqhZB >= (921 - 861)) {
                    for (tEOMYW10H7X = VFPYWhlz +(553 - 552); G9cCEHBqy5 > tEOMYW10H7X; tEOMYW10H7X = tEOMYW10H7X + 1) {
                        if (hQv6kjSD1pg[tEOMYW10H7X].pXqhZB >= (847 - 787)) {
                            if (hQv6kjSD1pg[tEOMYW10H7X].pXqhZB > hQv6kjSD1pg[VFPYWhlz].pXqhZB) {
                                BjRJhs9 = hQv6kjSD1pg[VFPYWhlz].pXqhZB;
                                hQv6kjSD1pg[VFPYWhlz].pXqhZB = hQv6kjSD1pg[tEOMYW10H7X].pXqhZB;
                                hQv6kjSD1pg[tEOMYW10H7X].pXqhZB = BjRJhs9;
                                strcpy (ICqSOBKi0z4l, hQv6kjSD1pg[VFPYWhlz].id);
                                strcpy (hQv6kjSD1pg[VFPYWhlz].id, hQv6kjSD1pg[tEOMYW10H7X].id);
                                strcpy (hQv6kjSD1pg[tEOMYW10H7X].id, ICqSOBKi0z4l);
                            }
                            break;
                        };
                    };
                };
            }
            Qlk2hICmr9 = Qlk2hICmr9 +1;
        };
    }
    {
        VFPYWhlz = 351 - 351;
        while (VFPYWhlz < G9cCEHBqy5) {
            if (hQv6kjSD1pg[VFPYWhlz].pXqhZB >= 60) {
                printf ("%s\n", hQv6kjSD1pg[VFPYWhlz].id);
            }
            VFPYWhlz++;
        };
    }
    for (VFPYWhlz = 0; VFPYWhlz < G9cCEHBqy5; VFPYWhlz++) {
        if (hQv6kjSD1pg[VFPYWhlz].pXqhZB < 60) {
            printf ("%s\n", hQv6kjSD1pg[VFPYWhlz].id);
        };
    }
    return 0;
}

