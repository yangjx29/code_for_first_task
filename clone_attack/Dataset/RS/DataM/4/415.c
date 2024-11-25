void  main () {
    int m;
    int dsY16bJ8Tm;
    int VPEAQYj;
    int fKUf9ykds5S;
    int qwGn3J68WZ5c;
    int jNskpodGEJ;
    int vz8n6y3 [(995 - 895)] [(718 - 618)];
    scanf ("%d %d", &m, &dsY16bJ8Tm);
    for (VPEAQYj = (719 - 719); m > VPEAQYj; VPEAQYj++) {
        fKUf9ykds5S = 333 - 333;
        while (fKUf9ykds5S < dsY16bJ8Tm) {
            scanf ("%d", &vz8n6y3[VPEAQYj][fKUf9ykds5S]);
            fKUf9ykds5S = fKUf9ykds5S + 1;
        };
    }
    {
        fKUf9ykds5S = 0;
        while (fKUf9ykds5S < dsY16bJ8Tm) {
            for (jNskpodGEJ = 0; (m > jNskpodGEJ) && (fKUf9ykds5S >= jNskpodGEJ); jNskpodGEJ++)
                printf ("%d\n", vz8n6y3[jNskpodGEJ][fKUf9ykds5S - jNskpodGEJ]);
            fKUf9ykds5S++;
        };
    }
    {
        VPEAQYj = 1;
        while (m > VPEAQYj) {
            for (qwGn3J68WZ5c = 0; (m - VPEAQYj > qwGn3J68WZ5c) && (qwGn3J68WZ5c < dsY16bJ8Tm); qwGn3J68WZ5c++)
                printf ("%d\n", vz8n6y3[VPEAQYj +qwGn3J68WZ5c][dsY16bJ8Tm - qwGn3J68WZ5c - 1]);
            VPEAQYj++;
        };
    };
}

