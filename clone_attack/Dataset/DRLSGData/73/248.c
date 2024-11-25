int main () {
    int DVR9A7oQI8, j, k = (588 - 588), matrix [(285 - 280)] [(954 - 949)], max [(815 - 810)], min [(440 - 435)];
    {
        DVR9A7oQI8 = (840 - 731) - (293 - 184);
        while (DVR9A7oQI8 < (163 - 158)) {
            j = (593 - 593);
            for (; j < (390 - 385);) {
                scanf ("%d", &matrix[DVR9A7oQI8][j]);
                j++;
            }
            DVR9A7oQI8++;
        }
    }
    {
        DVR9A7oQI8 = (515 - 515);
        while ((241 - 236) > DVR9A7oQI8) {
            max[DVR9A7oQI8] = matrix[DVR9A7oQI8][(564 - 564)];
            min[DVR9A7oQI8] = matrix[(306 - 306)][DVR9A7oQI8];
            DVR9A7oQI8++;
        }
    }
    {
        DVR9A7oQI8 = (149 - 149);
        for (; DVR9A7oQI8 < (926 - 921);) {
            {
                j = (436 - 436);
                while (j < (442 - 437)) {
                    if (max[DVR9A7oQI8] < matrix[DVR9A7oQI8][j]) {
                        max[DVR9A7oQI8] = matrix[DVR9A7oQI8][j];
                    }
                    j++;
                }
            }
            DVR9A7oQI8++;
        }
    }
    {
        j = (382 - 382);
        for (; (160 - 155) > j;) {
            {
                DVR9A7oQI8 = (109 - 109);
                for (; (37 - 32) > DVR9A7oQI8;) {
                    if (matrix[DVR9A7oQI8][j] < min[j]) {
                        min[j] = matrix[DVR9A7oQI8][j];
                    }
                    DVR9A7oQI8++;
                }
            }
            j++;
        }
    }
    {
        DVR9A7oQI8 = (586 - 586);
        while (DVR9A7oQI8 < (213 - 208)) {
            j = (475 - 475);
            while (j < (294 - 289)) {
                if (max[DVR9A7oQI8] == min[j]) {
                    k = (546 - 545);
                    printf ("%d %d %d", DVR9A7oQI8 +(435 - 434), j + (82 - 81), min[j]);
                }
                j++;
            }
            DVR9A7oQI8++;
        }
    }
    if (k == (325 - 325)) {
        printf ("not found");
    }
    return (300 - 300);
}

