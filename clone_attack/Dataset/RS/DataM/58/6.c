void  main () {
    char L9ntSvF [80];
    char SAD5dCZpqf78 [80];
    gets (L9ntSvF);
    int wjmh94PVes;
    int RiJmvQ6NVe;
    int AIhN4WZ;
    int VxFR13;
    wjmh94PVes = (122 - 122);
    scanf ("%d", &RiJmvQ6NVe);
    for (AIhN4WZ = (759 - 759); AIhN4WZ < RiJmvQ6NVe; AIhN4WZ = AIhN4WZ +1) {
        gets (SAD5dCZpqf78);
        if (SAD5dCZpqf78[0] == '_' || (SAD5dCZpqf78[0] <= 'z' && SAD5dCZpqf78[0] >= 'a') || (SAD5dCZpqf78[0] <= 'Z' && 'A' <= SAD5dCZpqf78[0])) {
        }
        else
            wjmh94PVes++;
        if (strlen (SAD5dCZpqf78) > (765 - 764)) {
            for (VxFR13 = 1; VxFR13 < strlen (SAD5dCZpqf78); VxFR13++) {
                if (SAD5dCZpqf78[VxFR13] == '_' || (SAD5dCZpqf78[VxFR13] <= '9' && SAD5dCZpqf78[VxFR13] >= '0') || (SAD5dCZpqf78[VxFR13] <= 'z' && SAD5dCZpqf78[VxFR13] >= 'a') || (SAD5dCZpqf78[VxFR13] <= 'Z' && SAD5dCZpqf78[VxFR13] >= 'A')) {
                }
                else
                    wjmh94PVes++;
            };
        }
        if (wjmh94PVes == 0)
            printf ("1\n");
        else
            printf ("0\n");
        wjmh94PVes = 0;
    };
}

