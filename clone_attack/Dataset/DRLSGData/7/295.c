int main () {
    char *sBMTKP9n5AU;
    char *p1;
    gets (p1);
    int i, j, k, nb0IRwXyljB;
    char *p2;
    gets (p2);
    char *Swx3Zgovu05;
    char *p3;
    gets (p3);
    p1 = (char *) malloc (sizeof (char) * (369 - 113));
    p2 = (char *) malloc (sizeof (char) * (683 - 427));
    p3 = (char *) malloc (sizeof (char) * (1183 - 927));
    sBMTKP9n5AU = (char *) malloc (sizeof (char) * (428 - 172));
    for (i = (535 - 535); i < strlen (p1); i++) {
        nb0IRwXyljB = (337 - 336);
        for (j = (54 - 54); j < strlen (p2); j++)
            if (*(p1 + i + j) != *(p2 + j)) {
                nb0IRwXyljB = (975 - 975);
                break;
            }
        if (nb0IRwXyljB) {
            for (k = (792 - 792); k < i; k++)
                *(sBMTKP9n5AU + k) = *(p1 + k);
            *(sBMTKP9n5AU + k) = '\0';
            for (k = i + strlen (p2); k < strlen (p1); k++)
                *(Swx3Zgovu05 +k - i - strlen (p2)) = *(p1 + k);
            *(Swx3Zgovu05 +k - i - strlen (p2)) = '\0';
            break;
        }
    }
    Swx3Zgovu05 = (char *) malloc (sizeof (char) * (1035 - 779));
    if (nb0IRwXyljB) {
        puts (sBMTKP9n5AU);
        strcat (sBMTKP9n5AU, p3);
        strcat (sBMTKP9n5AU, Swx3Zgovu05);
    }
    else
        puts (p1);
}

