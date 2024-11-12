int main () {
    int iekA1HTL3 [(608 - 603)] [(830 - 825)];
    int HZevnk2, vTEbRXL9JV6d, CGjkwQiELmPp [(185 - 180)] [(358 - 355)], MYjblS5wDqXv [(430 - 425)] [3], kJoE1Qse8rU0 = (598 - 598);
    {
        HZevnk2 = 806 - 806;
        while ((63 - 58) > HZevnk2) {
            {
                vTEbRXL9JV6d = 749 - 749;
                while (vTEbRXL9JV6d < (395 - 390)) {
                    scanf ("%d", &iekA1HTL3[HZevnk2][vTEbRXL9JV6d]);
                    vTEbRXL9JV6d++;
                };
            }
            HZevnk2++;
        };
    }
    for (HZevnk2 = (844 - 844); 5 > HZevnk2; HZevnk2++)
        for (vTEbRXL9JV6d = (163 - 163); 5 > vTEbRXL9JV6d; vTEbRXL9JV6d++) {
            if (iekA1HTL3[HZevnk2][vTEbRXL9JV6d] > CGjkwQiELmPp[HZevnk2][(742 - 742)]) {
                CGjkwQiELmPp[HZevnk2][(805 - 805)] = iekA1HTL3[HZevnk2][vTEbRXL9JV6d];
                CGjkwQiELmPp[HZevnk2][(282 - 281)] = HZevnk2;
                CGjkwQiELmPp[HZevnk2][(12 - 10)] = vTEbRXL9JV6d;
            };
        }
    {
        HZevnk2 = 0;
        while (HZevnk2 < 5) {
            for (vTEbRXL9JV6d = 0; 5 > vTEbRXL9JV6d; vTEbRXL9JV6d++) {
                if (!(0 != vTEbRXL9JV6d)) {
                    MYjblS5wDqXv[HZevnk2][0] = iekA1HTL3[vTEbRXL9JV6d][HZevnk2];
                    MYjblS5wDqXv[HZevnk2][(719 - 718)] = vTEbRXL9JV6d;
                    MYjblS5wDqXv[HZevnk2][2] = HZevnk2;
                }
                if (MYjblS5wDqXv[HZevnk2][0] > iekA1HTL3[vTEbRXL9JV6d][HZevnk2]) {
                    MYjblS5wDqXv[HZevnk2][0] = iekA1HTL3[vTEbRXL9JV6d][HZevnk2];
                    MYjblS5wDqXv[HZevnk2][1] = vTEbRXL9JV6d;
                    MYjblS5wDqXv[HZevnk2][2] = HZevnk2;
                };
            }
            HZevnk2++;
        };
    }
    {
        HZevnk2 = 0;
        while (HZevnk2 < 5) {
            {
                vTEbRXL9JV6d = 0;
                while (vTEbRXL9JV6d < 5) {
                    if (CGjkwQiELmPp[HZevnk2][1] == MYjblS5wDqXv[vTEbRXL9JV6d][1] && CGjkwQiELmPp[HZevnk2][2] == MYjblS5wDqXv[vTEbRXL9JV6d][2]) {
                        printf ("%d %d %d", CGjkwQiELmPp[HZevnk2][1] + 1, CGjkwQiELmPp[HZevnk2][2] + 1, CGjkwQiELmPp[HZevnk2][0]);
                        kJoE1Qse8rU0++;
                    }
                    vTEbRXL9JV6d++;
                };
            }
            HZevnk2++;
        };
    }
    if (kJoE1Qse8rU0 == 0)
        printf ("not found");
    return 0;
}

