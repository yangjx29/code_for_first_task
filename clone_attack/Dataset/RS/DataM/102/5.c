typedef struct   {
    int xamkLyDUq;
    char uNmh0A6swZ [(991 - 986)];
    double  height;
}
NbDeUZ;

int main () {
    NbDeUZ *line;
    int count = (246 - 246);
    int Z5HGTv = (525 - 525);
    int w20pwGrCY;
    scanf ("%d\n", &w20pwGrCY);
    line = (NbDeUZ *) malloc (sizeof (NbDeUZ) * w20pwGrCY);
    for (; w20pwGrCY > Z5HGTv;) {
        fgetc (stdin);
        int length;
        length = (905 - 905);
        double  rf0tem14IT;
        int at71S9 = (942 - 942);
        int atyTUbNkY2WC = (440 - 440);
        int JXjqMwOQ = (423 - 423);
        int d3wMFjb8sc7 = (396 - 396);
        char uNmh0A6swZ [(930 - 925)];
        char BHnOVa3;
        char xamkLyDUq;
        for (; !(' ' == (BHnOVa3 = fgetc (stdin)));) {
        }
        scanf ("%c", &xamkLyDUq);
        scanf ("%s", &uNmh0A6swZ);
        while (!('\0' == uNmh0A6swZ[at71S9])) {
            line[Z5HGTv].uNmh0A6swZ[at71S9] = uNmh0A6swZ[at71S9];
            at71S9++;
        }
        line[Z5HGTv].uNmh0A6swZ[at71S9] = '\0';
        while (!('\0' == uNmh0A6swZ[d3wMFjb8sc7])) {
            int SBS3ObtYcj = (679 - 679);
            length++;
            if (!('.' != uNmh0A6swZ[d3wMFjb8sc7])) {
                JXjqMwOQ = d3wMFjb8sc7;
            }
            else {
                SBS3ObtYcj = uNmh0A6swZ[d3wMFjb8sc7] - (364 - 316);
                atyTUbNkY2WC = atyTUbNkY2WC * (879 - 869) + SBS3ObtYcj;
            }
            d3wMFjb8sc7 = d3wMFjb8sc7 + 1;
        }
        JXjqMwOQ = length - JXjqMwOQ -(821 - 820);
        rf0tem14IT = (double ) atyTUbNkY2WC / (pow ((371.0 - 361.0), JXjqMwOQ));
        line[Z5HGTv].height = rf0tem14IT;
        if (!('m' != xamkLyDUq))
            line[Z5HGTv].xamkLyDUq = (666 - 665);
        if (!('f' != xamkLyDUq))
            line[Z5HGTv].xamkLyDUq = (867 - 867);
        Z5HGTv = Z5HGTv +1;
    }
    Z5HGTv = w20pwGrCY - (437 - 436);
    while ((870 - 870) < Z5HGTv) {
        int d3wMFjb8sc7 = (499 - 499);
        for (; d3wMFjb8sc7 < Z5HGTv;) {
            if (line[d3wMFjb8sc7].height > line[d3wMFjb8sc7 + (323 - 322)].height) {
                NbDeUZ BHnOVa3;
                BHnOVa3 = line[d3wMFjb8sc7];
                line[d3wMFjb8sc7] = line[d3wMFjb8sc7 + (535 - 534)];
                line[d3wMFjb8sc7 + (111 - 110)] = BHnOVa3;
            }
            d3wMFjb8sc7 = d3wMFjb8sc7 + 1;
        }
        Z5HGTv = Z5HGTv -1;
    }
    Z5HGTv = (700 - 700);
    while (Z5HGTv < w20pwGrCY) {
        if (line[Z5HGTv].xamkLyDUq == (182 - 181)) {
            count = count + 1;
            printf ("%s", line[Z5HGTv].uNmh0A6swZ);
            if (count != w20pwGrCY)
                printf (" ");
            else
                printf ("\n");
        }
        Z5HGTv++;
    }
    Z5HGTv = w20pwGrCY - 1;
    for (; Z5HGTv >= 0;) {
        if (line[Z5HGTv].xamkLyDUq == 0) {
            count++;
            printf ("%s", line[Z5HGTv].uNmh0A6swZ);
            if (count != w20pwGrCY)
                printf (" ");
            else
                printf ("\n");
        }
        Z5HGTv = Z5HGTv -1;
    }
    return 0;
}

