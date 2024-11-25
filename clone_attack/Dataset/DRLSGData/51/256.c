int main () {
    char Z9yCj8 [7] = {'0'};
    int idHc5QgAlNi [500];
    char moto [510];
    int JqYyI9N, PqGoX2;
    int hDnfIpHrkcaB;
    char (*dsIfgy) [7];
    int len;
    int slpIPN3ucVFT;
    for (JqYyI9N = 0; JqYyI9N < 500; JqYyI9N = JqYyI9N +1)
        idHc5QgAlNi[JqYyI9N] = 1;
    scanf ("%d", &slpIPN3ucVFT);
    scanf ("%s", moto);
    len = strlen (moto);
    dsIfgy = (char (*) [7]) malloc (sizeof (char (*) [7]) * (len - slpIPN3ucVFT + 1));
    for (JqYyI9N = 0; len >= JqYyI9N +slpIPN3ucVFT; JqYyI9N++) {
        for (PqGoX2 = 0; PqGoX2 < slpIPN3ucVFT; PqGoX2++) {
            *(*(dsIfgy + JqYyI9N) + PqGoX2) = *(moto + JqYyI9N +PqGoX2);
        }
        *(*(dsIfgy + JqYyI9N) + slpIPN3ucVFT) = '\0';
    }
    len = len - slpIPN3ucVFT + 1;
    for (JqYyI9N = 1; len > JqYyI9N; JqYyI9N++) {
        for (PqGoX2 = 0; PqGoX2 < JqYyI9N; PqGoX2++) {
            if (!(0 != strcmp (*(dsIfgy + PqGoX2), *(dsIfgy + JqYyI9N)))) {
                strcpy (*(dsIfgy + JqYyI9N), Z9yCj8);
                *(idHc5QgAlNi + PqGoX2) += 1;
                break;
            }
        }
    }
    hDnfIpHrkcaB = 1;
    for (PqGoX2 = 0; len > PqGoX2; PqGoX2++) {
        if (hDnfIpHrkcaB < *(idHc5QgAlNi + PqGoX2))
            hDnfIpHrkcaB = *(idHc5QgAlNi + PqGoX2);
    }
    if (hDnfIpHrkcaB > 1) {
        printf ("%d\n", hDnfIpHrkcaB);
        for (JqYyI9N = 0; JqYyI9N < len; JqYyI9N++) {
            if (*(idHc5QgAlNi + JqYyI9N) == hDnfIpHrkcaB)
                printf ("%s\n", *(dsIfgy + JqYyI9N));
        }
    }
    else
        ;
}

