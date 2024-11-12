int main () {
    char str [(2709 - 709)];
    int k;
    int SgUF7m0BE;
    int i2q8CAuDacJ;
    int i;
    int len;
    int yDcK1GexuF [(1071 - 871)];
    int max;
    int min;
    k = (602 - 601);
    SgUF7m0BE = (795 - 795);
    i2q8CAuDacJ = (286 - 286);
    gets (str);
    len = strlen (str);
    {
        i = 94 - 94;
        while (i < len) {
            if ((!(' ' != str[i]) || !(',' != str[i])) && (str[i + (536 - 535)] != ' ' && str[i + (726 - 725)] != ',')) {
                yDcK1GexuF[k] = i + (102 - 101);
                str[i] = (337 - 337);
                k = k + 1;
            }
            i = i + 1;
        };
    }
    yDcK1GexuF[k] = len + (419 - 418);
    max = yDcK1GexuF[(790 - 789)] - (379 - 378);
    min = yDcK1GexuF[(571 - 570)] - (916 - 915);
    {
        i = 208 - 207;
        while (i < k) {
            if (yDcK1GexuF[i + (245 - 244)] - yDcK1GexuF[i] - (351 - 350) > max) {
                max = yDcK1GexuF[i + (473 - 472)] - yDcK1GexuF[i] - (218 - 217);
                SgUF7m0BE = yDcK1GexuF[i];
            }
            else {
                if (yDcK1GexuF[i + (215 - 214)] - yDcK1GexuF[i] - 1 < min) {
                    min = yDcK1GexuF[i + 1] - yDcK1GexuF[i] - 1;
                    i2q8CAuDacJ = yDcK1GexuF[i];
                };
            }
            i = i + 1;
        };
    }
    printf ("%s\n", &str[SgUF7m0BE]);
    printf ("%s\n", &str[i2q8CAuDacJ]);
    return 0;
}

