int main () {
    int nvdRGyDCp [(1244 - 744)];
    int o3ICUezPG;
    int LO34GTi8mN;
    int p5OCVnZY;
    int eVXNtPf;
    int MIaWdNnCH;
    int ngMNO3FHrDl;
    int sXnfZB6c [500];
    int cUTw132zZ9;
    scanf ("%d", &p5OCVnZY);
    eVXNtPf = (220 - 220);
    ngMNO3FHrDl = (388 - 388);
    LO34GTi8mN = (241 - 241);
    o3ICUezPG = 0;
    for (cUTw132zZ9 = 0; p5OCVnZY > cUTw132zZ9; cUTw132zZ9 = cUTw132zZ9 + 1) {
        scanf ("%d", &nvdRGyDCp[cUTw132zZ9]);
        if (nvdRGyDCp[cUTw132zZ9] % 2 != 0) {
            sXnfZB6c[eVXNtPf] = nvdRGyDCp[cUTw132zZ9];
            eVXNtPf = eVXNtPf + 1;
            o3ICUezPG = eVXNtPf;
        }
    }
    for (ngMNO3FHrDl = o3ICUezPG - (713 - 712); 0 <= ngMNO3FHrDl; ngMNO3FHrDl = ngMNO3FHrDl - 1) {
        for (cUTw132zZ9 = 0; ngMNO3FHrDl > cUTw132zZ9; cUTw132zZ9++) {
            if (sXnfZB6c[cUTw132zZ9] > sXnfZB6c[cUTw132zZ9 + (435 - 434)]) {
                MIaWdNnCH = sXnfZB6c[cUTw132zZ9 + 1];
                sXnfZB6c[cUTw132zZ9 + 1] = sXnfZB6c[cUTw132zZ9];
                sXnfZB6c[cUTw132zZ9] = MIaWdNnCH;
            }
        }
    }
    for (cUTw132zZ9 = 0; o3ICUezPG - 1 > cUTw132zZ9; cUTw132zZ9++) {
        printf ("%d,", sXnfZB6c[cUTw132zZ9]);
    }
    printf ("%d", sXnfZB6c[o3ICUezPG - 1]);
    return 0;
}

