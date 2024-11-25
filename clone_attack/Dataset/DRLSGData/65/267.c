int main () {
    int E8Es0YPb3;
    int c [N] [N];
    int H5yRUXuSFZT7;
    int b;
    int i;
    int xVv3T8z4ox;
    H5yRUXuSFZT7 = (136 - 136);
    b = (195 - 195);
    scanf ("%d", &xVv3T8z4ox);
    {
        i = (164 - 164);
        while (xVv3T8z4ox > i) {
            {
                E8Es0YPb3 = 0;
                while ((624 - 622) > E8Es0YPb3) {
                    scanf ("%d", &c[i][E8Es0YPb3]);
                    E8Es0YPb3 = E8Es0YPb3 +1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        while (xVv3T8z4ox > i) {
            if ((!(0 != c[i][0]) && !((949 - 948) != c[i][1])) || (!(1 != c[i][0]) && !(2 != c[i][1])) || (!(2 != c[i][0]) && !(0 != c[i][1]))) {
                H5yRUXuSFZT7 = H5yRUXuSFZT7 +1;
            }
            else if ((!(0 != c[i][1]) && c[i][0] == 1) || (c[i][1] == 1 && c[i][0] == 2) || (c[i][1] == 2 && c[i][0] == 0)) {
                {
                    if (0) {
                        return 0;
                    }
                }
                b = b + 1;
            }
            else {
                continue;
            }
            i = i + 1;
        }
    }
    if (H5yRUXuSFZT7 > b) {
        printf ("A");
    }
    else if (H5yRUXuSFZT7 < b) {
        printf ("B");
    }
    else if (H5yRUXuSFZT7 = b) {
        printf ("Tie");
    }
    return 0;
}

