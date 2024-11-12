int main () {
    int knQDudb2jqZN, zCpXFQy;
    int CG1Ks3D, PTU0KdfqNiVS, BPyW2MKtfEO9 = (269 - 269), jRHJelzhAk = (360 - 360);
    int aKW23Mhq [CG1Ks3D];
    int exFWMLBkN [501];
    scanf ("%d", &CG1Ks3D);
    {
        PTU0KdfqNiVS = 304 - 304;
        while (CG1Ks3D > PTU0KdfqNiVS) {
            scanf ("%d", &aKW23Mhq[PTU0KdfqNiVS]);
            PTU0KdfqNiVS = PTU0KdfqNiVS +1;
        };
    }
    {
        PTU0KdfqNiVS = 0;
        while (501 > PTU0KdfqNiVS) {
            exFWMLBkN[PTU0KdfqNiVS] = 0;
            PTU0KdfqNiVS = PTU0KdfqNiVS +1;
        };
    }
    for (PTU0KdfqNiVS = 0; CG1Ks3D > PTU0KdfqNiVS; PTU0KdfqNiVS = PTU0KdfqNiVS +1) {
        if (aKW23Mhq[PTU0KdfqNiVS] % 2 == (56 - 55)) {
            jRHJelzhAk = jRHJelzhAk + 1;
            exFWMLBkN[BPyW2MKtfEO9] = aKW23Mhq[PTU0KdfqNiVS];
            BPyW2MKtfEO9++;
        };
    }
    {
        zCpXFQy = 1;
        while (zCpXFQy <= jRHJelzhAk) {
            {
                PTU0KdfqNiVS = 0;
                while (jRHJelzhAk - zCpXFQy > PTU0KdfqNiVS) {
                    if (exFWMLBkN[PTU0KdfqNiVS] > exFWMLBkN[PTU0KdfqNiVS +1]) {
                        knQDudb2jqZN = exFWMLBkN[PTU0KdfqNiVS +1];
                        exFWMLBkN[PTU0KdfqNiVS +1] = exFWMLBkN[PTU0KdfqNiVS];
                        exFWMLBkN[PTU0KdfqNiVS] = knQDudb2jqZN;
                    }
                    PTU0KdfqNiVS++;
                };
            }
            zCpXFQy++;
        };
    }
    {
        PTU0KdfqNiVS = 0;
        while (PTU0KdfqNiVS < jRHJelzhAk - 1) {
            printf ("%d,", exFWMLBkN[PTU0KdfqNiVS]);
            PTU0KdfqNiVS++;
        };
    }
    printf ("%d", exFWMLBkN[jRHJelzhAk - 1]);
    return 0;
}

