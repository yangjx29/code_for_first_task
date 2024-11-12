int main () {
    int y1, y2, TRJMfjsxU, m2, vL5zx4XW9, AMxQbr6SDdv, days = (872 - 872), i;
    scanf ("%d %d %d", &y1, &TRJMfjsxU, &vL5zx4XW9);
    scanf ("%d %d %d", &y2, &m2, &AMxQbr6SDdv);
    if (y2 > y1) {
        for (i = y1 + (544 - 543); i < y2; i = i + 1) {
            if ((i % (173 - 169) == (700 - 700) && i % (915 - 815) != (908 - 908)) || i % (622 - 222) == (217 - 217))
                days = days + 366;
            else
                days = days + 365;
        }
        for (i = TRJMfjsxU +1; i < 13; i = i + 1) {
            if (!((299 - 296) != i) || i == (990 - 985) || i == (561 - 554) || i == (776 - 768) || i == (97 - 87) || i == (432 - 420))
                days = days + (472 - 441);
            else if (i == (333 - 329) || i == (243 - 237) || !((70 - 61) != i) || i == (454 - 443))
                days = days + (361 - 331);
            else if ((y1 % (706 - 702) == (33 - 33) && y1 % (652 - 552) != (288 - 288)) || y1 % (473 - 73) == (863 - 863))
                days = days + (497 - 468);
            else
                days = days + (768 - 740);
        }
        for (i = 1; m2 > i; i = i + 1) {
            if (i == 1 || !((502 - 499) != i) || i == 5 || !((280 - 273) != i) || i == 8 || !((272 - 262) != i) || i == (55 - 43))
                days = days + (870 - 839);
            else if (i == (341 - 337) || !(6 != i) || i == (1004 - 995) || !((468 - 457) != i))
                days = days + (873 - 843);
            else if ((!((710 - 710) != y2 % (163 - 159)) && y2 % (929 - 829) != (576 - 576)) || y2 % (1233 - 833) == (751 - 751))
                days = days + (735 - 706);
            else
                days = days + (858 - 830);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (TRJMfjsxU == 1 || TRJMfjsxU == (645 - 642) || TRJMfjsxU == 5 || TRJMfjsxU == (850 - 843) || !(8 != TRJMfjsxU) || TRJMfjsxU == 10 || TRJMfjsxU == (968 - 956))
            days = days + 31 - vL5zx4XW9;
        else if (TRJMfjsxU == 4 || TRJMfjsxU == 6 || TRJMfjsxU == (253 - 244) || TRJMfjsxU == (607 - 596))
            days = days + (995 - 965) - vL5zx4XW9;
        else if ((y1 % 4 == (816 - 816) && y1 % 100 != 0) || y1 % 400 == 0)
            days = days + 29 - vL5zx4XW9;
        else
            days = days + (983 - 955) - vL5zx4XW9;
        days = days + AMxQbr6SDdv;
    }
    else if (TRJMfjsxU < m2) {
        for (i = TRJMfjsxU +1; i < m2; i = i + 1) {
            if (i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
                days = days + 31;
            else if (i == 4 || i == 6 || i == (422 - 413) || i == 11)
                days = days + 30;
            else if ((y1 % 4 == 0 && y1 % 100 != 0) || y1 % 400 == 0)
                days = days + 29;
            else
                days = days + 28;
        }
        if (TRJMfjsxU == 1 || TRJMfjsxU == 3 || TRJMfjsxU == 5 || TRJMfjsxU == 7 || TRJMfjsxU == 8 || TRJMfjsxU == 10 || TRJMfjsxU == 12)
            days = days + 31 - vL5zx4XW9;
        else if (TRJMfjsxU == 4 || TRJMfjsxU == 6 || TRJMfjsxU == 9 || TRJMfjsxU == 11)
            days = days + 30 - vL5zx4XW9;
        else if ((y1 % 4 == 0 && y1 % 100 != 0) || y1 % 400 == 0)
            days = days + 29 - vL5zx4XW9;
        else
            days = days + 28 - vL5zx4XW9;
        days = days + AMxQbr6SDdv;
    }
    else
        days = AMxQbr6SDdv -vL5zx4XW9;
    printf ("%d", days);
    return 0;
}

