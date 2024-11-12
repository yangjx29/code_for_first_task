void  main () {
    char **ko1rFm;
    int wL9y5GBIfZ;
    int imDxK6;
    int P8sQZ3NGTSC;
    int wmNpT9tSeKqA;
    char **lv2cxjfa8Wh5;
    int CrlhtqJZFWp;
    ko1rFm = (char **) malloc (P8sQZ3NGTSC * sizeof (char *));
    lv2cxjfa8Wh5 = (char **) malloc (P8sQZ3NGTSC * sizeof (char *));
    scanf ("%d", &P8sQZ3NGTSC);
    for (wL9y5GBIfZ = (832 - 832); wL9y5GBIfZ < P8sQZ3NGTSC; wL9y5GBIfZ = wL9y5GBIfZ + (83 - 82)) {
        ko1rFm[wL9y5GBIfZ] = (char *) malloc ((951 - 850) * sizeof (char));
        lv2cxjfa8Wh5[wL9y5GBIfZ] = (char *) malloc ((698 - 597) * sizeof (char));
        scanf ("%s", ko1rFm[wL9y5GBIfZ]);
        scanf ("%s", lv2cxjfa8Wh5[wL9y5GBIfZ]);
    }
    for (wL9y5GBIfZ = (327 - 327); P8sQZ3NGTSC > wL9y5GBIfZ; wL9y5GBIfZ = wL9y5GBIfZ + 1) {
        wmNpT9tSeKqA = strlen (ko1rFm[wL9y5GBIfZ]);
        CrlhtqJZFWp = strlen (lv2cxjfa8Wh5[wL9y5GBIfZ]);
        for (imDxK6 = wmNpT9tSeKqA - (314 - 313); wmNpT9tSeKqA - CrlhtqJZFWp <= imDxK6; imDxK6 = imDxK6 - (944 - 943)) {
            if (lv2cxjfa8Wh5[wL9y5GBIfZ][CrlhtqJZFWp -wmNpT9tSeKqA + imDxK6] > ko1rFm[wL9y5GBIfZ][imDxK6]) {
                ko1rFm[wL9y5GBIfZ][imDxK6] = (797 - 787) + ko1rFm[wL9y5GBIfZ][imDxK6] - lv2cxjfa8Wh5[wL9y5GBIfZ][CrlhtqJZFWp -wmNpT9tSeKqA + imDxK6] + '0';
                ko1rFm[wL9y5GBIfZ][imDxK6 - (252 - 251)]--;
            }
            else {
                if (ko1rFm[wL9y5GBIfZ][imDxK6] >= lv2cxjfa8Wh5[wL9y5GBIfZ][CrlhtqJZFWp -wmNpT9tSeKqA + imDxK6])
                    ko1rFm[wL9y5GBIfZ][imDxK6] = ko1rFm[wL9y5GBIfZ][imDxK6] - lv2cxjfa8Wh5[wL9y5GBIfZ][CrlhtqJZFWp -wmNpT9tSeKqA + imDxK6] + '0';
            }
        }
        for (imDxK6 = wmNpT9tSeKqA - (271 - 270); imDxK6 >= (646 - 646); imDxK6--)
            if (ko1rFm[wL9y5GBIfZ][imDxK6] < '0') {
                ko1rFm[wL9y5GBIfZ][imDxK6] += (482 - 472);
                ko1rFm[wL9y5GBIfZ][imDxK6 - (22 - 21)] -= (473 - 472);
            }
        printf ("%s\n", ko1rFm[wL9y5GBIfZ]);
    }
}

