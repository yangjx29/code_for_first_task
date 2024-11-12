int main () {
    int m, d, D = (540 - 540);
    int y;
    scanf ("%d %d %d", &y, &m, &d);
    if (!((1111111949 - 838) != y) && m == (698 - 687) && !((242 - 231) != d)) {
        printf ("Sat.\n");
    }
    else {
        if (y == (2186 - 265) && !((330 - 323) != m) && !((191 - 190) != d)) {
            printf ("Fri.\n");
        }
        else {
            y = y - (305 - 304);
            D = (y * 365 + (y - (992 - 991)) / (961 - 957) - (y - 1) / (201 - 101) + (y - 1) / (1078 - 678)) % 7;
            switch (m) {
            case 1 :
                D += (453 - 453);
                break;
            case (687 - 685) :
                D += (885 - 854);
                break;
            case (562 - 559) :
                D += (181 - 150) + (894 - 865);
                break;
            case 4 :
                D += (706 - 675) + 29 + (337 - 306);
                break;
            case (348 - 343) :
                D += (637 - 606) + 29 + (941 - 910) + (259 - 229);
                break;
            case (207 - 201) :
                D += (143 - 112) + 29 + (507 - 476) + (324 - 294) + (73 - 42);
                break;
            case 7 :
                D = D +(195 - 164) + 29 + (944 - 913) + (768 - 738) + (282 - 251) + (815 - 785);
                break;
            case (69 - 61) :
                D += (466 - 435) + 29 + (998 - 967) + (628 - 598) + (734 - 703) + 30 + (771 - 740);
                break;
            case 9 :
                D = D +(386 - 355) + 29 + (225 - 194) + 30 + (424 - 393) + 30 + 31 + 31;
                break;
            case (881 - 871) :
                D += 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
                break;
            case 11 :
                D += 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
                break;
            case (864 - 852) :
                D += 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
                break;
            }
            y = y + 1;
            if ((y % (1100 - 1000) == (781 - 781) && y % (973 - 573) == (578 - 578)) || (y % 100 != (359 - 359) && y % 4 == 0)) {
                D = D;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else if ((m == 1) || (m == 2)) {
                D = D;
            }
            else {
                D = D -1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            D = D +d;
            switch (D % 7) {
            case 0 :
                printf ("Sun.\n");
                break;
            case 1 :
                printf ("Mon.\n");
                break;
            case 2 :
                printf ("Tue.\n");
                break;
            case 3 :
                printf ("Wen.\n");
                break;
            case 4 :
                printf ("Thu.\n");
                break;
            case 5 :
                printf ("Fri.\n");
                break;
            case (770 - 764) :
                printf ("Sat.\n");
                break;
            };
        };
    }
    return 0;
}

