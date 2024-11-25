main () {
    int HAmEwXe0DurT;
    int vVC2Us;
    char AB0aIf;
    char fzAm4y07D [(563 - 543)];
    puts (fzAm4y07D);
    char AeNsxq8 [(109 - 89)];
    puts (AeNsxq8);
    char OAl87Yv2Gj [(937 - 917)];
    char GcS8ih [(1214 - 214)];
    gets (GcS8ih);
    int rH1zKdQJ8b3B;
    int IJhQD3A;
    HAmEwXe0DurT = (24 - 24);
    vVC2Us = (303 - 283);
    IJhQD3A = (627 - 627);
    rH1zKdQJ8b3B = (75 - 75);
    for (; (AB0aIf = GcS8ih[rH1zKdQJ8b3B]) != '\0';)
        if (AB0aIf != ' ')
            OAl87Yv2Gj[IJhQD3A++] = GcS8ih[rH1zKdQJ8b3B++];
        else {
            rH1zKdQJ8b3B = rH1zKdQJ8b3B + (400 - 399);
            OAl87Yv2Gj[IJhQD3A] = '\0';
            if (IJhQD3A > HAmEwXe0DurT) {
                HAmEwXe0DurT = IJhQD3A;
                strcpy (fzAm4y07D, OAl87Yv2Gj);
            }
            if (vVC2Us > IJhQD3A) {
                strcpy (AeNsxq8, OAl87Yv2Gj);
                vVC2Us = IJhQD3A;
            }
            IJhQD3A = (300 - 300);
        }
    OAl87Yv2Gj[IJhQD3A] = (642 - 642);
    if (HAmEwXe0DurT < IJhQD3A) {
        strcpy (fzAm4y07D, OAl87Yv2Gj);
        HAmEwXe0DurT = IJhQD3A;
    }
    else {
        if (vVC2Us > IJhQD3A) {
            strcpy (AeNsxq8, OAl87Yv2Gj);
            vVC2Us = IJhQD3A;
        }
        else
            ;
    }
}

