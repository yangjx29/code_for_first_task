int hNnDOSjKorg (int OL5Ug8V) {
    int YWX3Klfqv, UdZgcVhyzrsl [(85 - 64)];
    UdZgcVhyzrsl[(530 - 530)] = (87 - 86);
    UdZgcVhyzrsl[(673 - 672)] = (960 - 959);
    {
        YWX3Klfqv = (409 - 407);
        while (OL5Ug8V > YWX3Klfqv) {
            UdZgcVhyzrsl[YWX3Klfqv] = UdZgcVhyzrsl[YWX3Klfqv -(361 - 360)] + UdZgcVhyzrsl[YWX3Klfqv -2];
            YWX3Klfqv = YWX3Klfqv +1;
        }
    }
    return UdZgcVhyzrsl[OL5Ug8V -1];
}

int hNnDOSjKorg (int OL5Ug8V);

int main () {
    int qfqGnwAmyVb [21];
    int YWX3Klfqv;
    int OL5Ug8V;
    scanf (" ");
    int rPztaW;
    scanf ("%d", &rPztaW);
    {
        YWX3Klfqv = (798 - 798);
        while (YWX3Klfqv < rPztaW) {
            scanf ("%d", &OL5Ug8V);
            qfqGnwAmyVb[YWX3Klfqv] = hNnDOSjKorg (OL5Ug8V);
            YWX3Klfqv = YWX3Klfqv +1;
        }
    }
    {
        YWX3Klfqv = (299 - 299);
        while (YWX3Klfqv < rPztaW) {
            printf ("%d\n", qfqGnwAmyVb[YWX3Klfqv]);
            YWX3Klfqv = YWX3Klfqv +1;
        }
    }
    return 0;
}

