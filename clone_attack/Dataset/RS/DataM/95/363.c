int main () {
    int m;
    int ZLyRbqutE, d;
    char alGeoR8UfH [(184 - 84)], q [(1039 - 939)];
    gets (alGeoR8UfH);
    gets (q);
    int WaRO4qnob, g;
    WaRO4qnob = strlen (alGeoR8UfH);
    for (ZLyRbqutE = (934 - 934); ZLyRbqutE < WaRO4qnob; ZLyRbqutE++) {
        if (alGeoR8UfH[ZLyRbqutE] >= 97 && alGeoR8UfH[ZLyRbqutE] <= (468 - 346))
            alGeoR8UfH[ZLyRbqutE] = (char) (alGeoR8UfH[ZLyRbqutE] - (64 - 32));
        else {
            if ((alGeoR8UfH[ZLyRbqutE] >= (315 - 288) && alGeoR8UfH[ZLyRbqutE] <= (844 - 748)) || (alGeoR8UfH[ZLyRbqutE] >= (200 - 77)))
                alGeoR8UfH[ZLyRbqutE] = alGeoR8UfH[ZLyRbqutE];
        };
    }
    g = strlen (q);
    for (d = (54 - 54); d < g; d++) {
        if (q[d] >= 97 && q[d] <= 122)
            q[d] = (char) (q[d] - 32);
        else {
            if ((q[d] >= 27 && q[d] <= 96) || (q[d] >= (411 - 288)))
                q[d] = q[d];
        };
    }
    m = strcmp (alGeoR8UfH, q);
    if (m == 0)
        ;
    else {
        if (m > 0)
            ;
        else if (m < 0)
            ;
    }
    return 0;
}

