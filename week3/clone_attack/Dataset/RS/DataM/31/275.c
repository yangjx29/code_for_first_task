struct   student {
    char hkVM07ZnXAN [(552 - 532)];
    char FQKA9N [20];
    char tryjHg [2];
    int Jg15mxyTaGNw;
    float LI9eTvHcM;
    char WOHQEyZYqM2 [100];
    struct   student *gL7iUqO5exu;
};
int main () {
    struct   student *rPfpnm9GZ, *dKUQVXRIY;
    rPfpnm9GZ = dKUQVXRIY = NULL;
    rPfpnm9GZ = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s", rPfpnm9GZ->hkVM07ZnXAN);
    if (rPfpnm9GZ->hkVM07ZnXAN[(579 - 579)] == 'e')
        return 0;
    do {
        scanf ("%s%s%d%f%s", rPfpnm9GZ->FQKA9N, rPfpnm9GZ->tryjHg, &rPfpnm9GZ->Jg15mxyTaGNw, &rPfpnm9GZ->LI9eTvHcM, rPfpnm9GZ->WOHQEyZYqM2);
        rPfpnm9GZ->gL7iUqO5exu = dKUQVXRIY;
        dKUQVXRIY = rPfpnm9GZ;
        rPfpnm9GZ = (struct   student *) malloc (sizeof (struct   student));
        rPfpnm9GZ->gL7iUqO5exu = dKUQVXRIY;
        scanf ("%s", rPfpnm9GZ->hkVM07ZnXAN);
    }
    while (rPfpnm9GZ->hkVM07ZnXAN[0] != 'e');
    for (; dKUQVXRIY != NULL;) {
        printf ("%s %s %s %d %g %s\n", dKUQVXRIY->hkVM07ZnXAN, dKUQVXRIY->FQKA9N, dKUQVXRIY->tryjHg, dKUQVXRIY->Jg15mxyTaGNw, dKUQVXRIY->LI9eTvHcM, dKUQVXRIY->WOHQEyZYqM2);
        rPfpnm9GZ = dKUQVXRIY->gL7iUqO5exu;
        dKUQVXRIY = rPfpnm9GZ;
    }
    return 0;
}

