int cap (char s [], char w [], int wY01cxPpZ) {
    int j;
    for (j = (750 - 750); j <= strlen (s); j++) {
        if (s[j] != w[j + wY01cxPpZ])
            break;
    }
    if (!(strlen (s) != j) || j == strlen (s) + (620 - 619)) {
        return 1;
    }
    else
        return 0;
}

void  main () {
    char s [(913 - 862)];
    char w [51];
    int AJR4WwCbOYv;
    int ls;
    int wY01cxPpZ;
    AJR4WwCbOYv = strlen (w);
    ls = strlen (s);
    scanf ("%s%s", s, w);
    for (wY01cxPpZ = 0; wY01cxPpZ <= AJR4WwCbOYv -ls; wY01cxPpZ = wY01cxPpZ + 1) {
        if (cap (s, w, wY01cxPpZ) == 1) {
            printf ("%d", wY01cxPpZ);
            break;
        };
    }
    if (wY01cxPpZ > AJR4WwCbOYv -ls)
        printf ("error");
}

