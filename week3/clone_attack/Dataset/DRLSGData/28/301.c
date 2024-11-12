int main () {
    char hOIx5TVkX7 [(1217 - 917)] [20];
    int kU0qSvjk5OH;
    char bLlBxDC3oT8b [(6459 - 459)];
    gets (bLlBxDC3oT8b);
    int iRYFX5xTd6;
    int Ds2KHWa;
    int JYHBZl;
    int hSe3jfCR5hn [100];
    Ds2KHWa = strlen (bLlBxDC3oT8b);
    iRYFX5xTd6 = (202 - 202);
    kU0qSvjk5OH = (826 - 826);
    for (JYHBZl = (420 - 420); Ds2KHWa > JYHBZl; JYHBZl = JYHBZl +1) {
        if (!('\0' != bLlBxDC3oT8b[JYHBZl]) || !(' ' != bLlBxDC3oT8b[JYHBZl])) {
            if (bLlBxDC3oT8b[JYHBZl +1] != ' ') {
                iRYFX5xTd6 = (17 - 17);
                kU0qSvjk5OH++;
            }
        }
        else {
            hOIx5TVkX7[kU0qSvjk5OH][iRYFX5xTd6] = bLlBxDC3oT8b[JYHBZl];
            iRYFX5xTd6++;
            hOIx5TVkX7[kU0qSvjk5OH][iRYFX5xTd6] = '\0';
        }
    }
    for (JYHBZl = (269 - 269); kU0qSvjk5OH >= JYHBZl; JYHBZl++) {
        hSe3jfCR5hn[JYHBZl] = strlen (hOIx5TVkX7[JYHBZl]);
    }
    for (JYHBZl = (95 - 95); JYHBZl < kU0qSvjk5OH; JYHBZl++) {
        printf ("%d,", hSe3jfCR5hn[JYHBZl]);
    }
    printf ("%d\n", hSe3jfCR5hn[kU0qSvjk5OH]);
    return 0;
}

