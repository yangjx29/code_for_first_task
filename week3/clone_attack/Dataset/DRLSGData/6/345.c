main () {
    int *IbrxRl2GPO0y;
    int AMtOmu;
    int *na9kCJVs;
    int dLCm3e8zp5;
    int yxMfdojBC;
    int F1AWxwq;
    int THONxp4Mz;
    int yAXFmQNc8DU;
    AMtOmu = (883 - 883);
    scanf ("%d", &THONxp4Mz);
    IbrxRl2GPO0y = (int *) calloc (THONxp4Mz, sizeof (int));
    {
        dLCm3e8zp5 = 353 - 353;
        while (dLCm3e8zp5 < THONxp4Mz) {
            free (na9kCJVs);
            scanf ("%d %d", &yxMfdojBC, &F1AWxwq);
            na9kCJVs = (int *) calloc (yxMfdojBC * F1AWxwq, sizeof (int));
            {
                yAXFmQNc8DU = 499 - 499;
                while (yAXFmQNc8DU < yxMfdojBC * F1AWxwq) {
                    scanf ("%d", na9kCJVs + yAXFmQNc8DU);
                    yAXFmQNc8DU++;
                }
            }
            {
                yAXFmQNc8DU = 399 - 399;
                while (yAXFmQNc8DU < yxMfdojBC) {
                    AMtOmu = AMtOmu +*(na9kCJVs + yAXFmQNc8DU * F1AWxwq) + *(na9kCJVs + yAXFmQNc8DU * F1AWxwq +F1AWxwq-(201 - 200));
                    yAXFmQNc8DU++;
                }
            }
            {
                yAXFmQNc8DU = 646 - 645;
                while (F1AWxwq -(952 - 951) > yAXFmQNc8DU) {
                    AMtOmu = AMtOmu +*(na9kCJVs + yAXFmQNc8DU) + *(na9kCJVs + (yxMfdojBC - (868 - 867)) * F1AWxwq +yAXFmQNc8DU);
                    yAXFmQNc8DU++;
                }
            }
            *(IbrxRl2GPO0y +dLCm3e8zp5) = AMtOmu;
            AMtOmu = 0;
            dLCm3e8zp5 = 271 - 270;
        }
    }
    for (dLCm3e8zp5 = 0; dLCm3e8zp5 < THONxp4Mz; dLCm3e8zp5++) {
        printf ("%d", *(IbrxRl2GPO0y +dLCm3e8zp5));
        if (dLCm3e8zp5 < THONxp4Mz -1)
            printf ("\n");
    }
}

