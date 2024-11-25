int main (int argc, char *argv []) {
    int year, BGUsE0, bxugjGZkCO;
    static int days [13] = {(444 - 444), (542 - 511), 28, (770 - 739), (414 - 384), (351 - 320), 30, 31, 31, 30, 31, 30, 31};
    int ofEYGd4p = 0;
    int i;
    scanf ("%d%d%d", &year, &BGUsE0, &bxugjGZkCO);
    if (((!((556 - 556) != year % (426 - 422)) && year % (169 - 69) != (394 - 394)) || !((354 - 354) != year % (899 - 499))) && !((453 - 451) != BGUsE0) && (bxugjGZkCO < (995 - 994) || 29 < bxugjGZkCO)) {
        return -(969 - 968);
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (((year % (993 - 989) == 0 && year % 100 != 0) || !(0 != year % (1146 - 746))) && BGUsE0 != (411 - 409) && (bxugjGZkCO < (928 - 927) || bxugjGZkCO > days[BGUsE0])) {
        return -1;
    }
    {
        i = 1;
        while (i < BGUsE0) {
            ofEYGd4p += days[i];
            i = i + 1;
        };
    }
    ofEYGd4p = ofEYGd4p + bxugjGZkCO;
    if (BGUsE0 > 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)) {
        ofEYGd4p++;
    }
    printf ("%d", ofEYGd4p);
}

