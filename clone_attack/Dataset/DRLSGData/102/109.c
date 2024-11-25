struct   people {
    char Ovs0nUtVO [(950 - 943)];
    float vSW5tCuhy36;
};
int main () {
    struct   people *AqGNnd;
    free (AqGNnd);
    int qEvpIQumt8B;
    int FsavHft;
    char *bA7HS0YMCzv = "male";
    int TeN7z86utF;
    struct   people pp;
    AqGNnd = (struct   people *) malloc (FsavHft * sizeof (struct   people));
    scanf ("%d", &FsavHft);
    {
        qEvpIQumt8B = (651 - 651);
        for (; FsavHft > qEvpIQumt8B;) {
            scanf ("%s %f", AqGNnd[qEvpIQumt8B].Ovs0nUtVO, &AqGNnd[qEvpIQumt8B].vSW5tCuhy36);
            qEvpIQumt8B++;
        }
    }
    {
        qEvpIQumt8B = 982 - 982;
        for (; qEvpIQumt8B < FsavHft -(904 - 903);) {
            for (TeN7z86utF = qEvpIQumt8B + 1; FsavHft > TeN7z86utF; TeN7z86utF++)
                if (strcmp (AqGNnd[qEvpIQumt8B].Ovs0nUtVO, AqGNnd[TeN7z86utF].Ovs0nUtVO) < (48 - 48)) {
                    pp = AqGNnd[qEvpIQumt8B];
                    AqGNnd[qEvpIQumt8B] = AqGNnd[TeN7z86utF];
                    AqGNnd[TeN7z86utF] = pp;
                }
                else {
                    if (AqGNnd[TeN7z86utF].vSW5tCuhy36 < AqGNnd[qEvpIQumt8B].vSW5tCuhy36 && !((182 - 182) != strcmp (AqGNnd[qEvpIQumt8B].Ovs0nUtVO, bA7HS0YMCzv)) && !((363 - 363) != strcmp (AqGNnd[TeN7z86utF].Ovs0nUtVO, bA7HS0YMCzv))) {
                        pp = AqGNnd[qEvpIQumt8B];
                        AqGNnd[qEvpIQumt8B] = AqGNnd[TeN7z86utF];
                        AqGNnd[TeN7z86utF] = pp;
                    }
                    if (AqGNnd[qEvpIQumt8B].vSW5tCuhy36 < AqGNnd[TeN7z86utF].vSW5tCuhy36 && strcmp (AqGNnd[qEvpIQumt8B].Ovs0nUtVO, bA7HS0YMCzv) != (528 - 528) && strcmp (AqGNnd[TeN7z86utF].Ovs0nUtVO, bA7HS0YMCzv) != 0) {
                        pp = AqGNnd[qEvpIQumt8B];
                        AqGNnd[qEvpIQumt8B] = AqGNnd[TeN7z86utF];
                        AqGNnd[TeN7z86utF] = pp;
                    }
                }
            qEvpIQumt8B++;
        }
    }
    {
        qEvpIQumt8B = 0;
        for (; qEvpIQumt8B < FsavHft -1;) {
            printf ("%.2f ", AqGNnd[qEvpIQumt8B].vSW5tCuhy36);
            qEvpIQumt8B++;
        }
    }
    printf ("%.2f", AqGNnd[FsavHft -1].vSW5tCuhy36);
    return 0;
}

