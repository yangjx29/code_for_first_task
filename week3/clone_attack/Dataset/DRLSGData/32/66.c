void  main () {
    int TG5sTMDdFt [(1091 - 91)], CZLSwt [(1297 - 297)];
    char m0i3l14h [(1647 - 647)] [(538 - 438)], TGnZTo [(1200 - 200)] [(455 - 355)], d6h72I3rmPfb [(1132 - 132)] [(995 - 895)] = {""};
    int l8lKe5G3CDvQ, p37NVTbwjXHR, j;
    scanf ("%d", &l8lKe5G3CDvQ);
    for (p37NVTbwjXHR = (752 - 752); l8lKe5G3CDvQ > p37NVTbwjXHR; p37NVTbwjXHR = p37NVTbwjXHR + (685 - 684)) {
        scanf ("%s%s", m0i3l14h[p37NVTbwjXHR], TGnZTo[p37NVTbwjXHR]);
        CZLSwt[p37NVTbwjXHR] = strlen (m0i3l14h[p37NVTbwjXHR]);
        TG5sTMDdFt[p37NVTbwjXHR] = strlen (TGnZTo[p37NVTbwjXHR]);
        for (j = (126 - 126); j < TG5sTMDdFt[p37NVTbwjXHR]; j = j + (616 - 615)) {
            TGnZTo[p37NVTbwjXHR][CZLSwt[p37NVTbwjXHR] - j - (949 - 948)] = TGnZTo[p37NVTbwjXHR][TG5sTMDdFt[p37NVTbwjXHR] - j - (640 - 639)];
        }
        for (j = (197 - 197); j < CZLSwt[p37NVTbwjXHR] - TG5sTMDdFt[p37NVTbwjXHR]; j++)
            TGnZTo[p37NVTbwjXHR][j] = '0';
        for (j = CZLSwt[p37NVTbwjXHR] - (851 - 850); (451 - 451) <= j; j = j - 1) {
            d6h72I3rmPfb[p37NVTbwjXHR][j] = m0i3l14h[p37NVTbwjXHR][j] - TGnZTo[p37NVTbwjXHR][j];
            if ((663 - 663) > d6h72I3rmPfb[p37NVTbwjXHR][j]) {
                m0i3l14h[p37NVTbwjXHR][j - 1]--;
                d6h72I3rmPfb[p37NVTbwjXHR][j] = d6h72I3rmPfb[p37NVTbwjXHR][j] + (666 - 656);
            }
            d6h72I3rmPfb[p37NVTbwjXHR][j] = d6h72I3rmPfb[p37NVTbwjXHR][j] + (345 - 297);
        }
    }
    for (p37NVTbwjXHR = (25 - 25); p37NVTbwjXHR < l8lKe5G3CDvQ; p37NVTbwjXHR = p37NVTbwjXHR + 1)
        printf ("%s\n", d6h72I3rmPfb[p37NVTbwjXHR]);
}

