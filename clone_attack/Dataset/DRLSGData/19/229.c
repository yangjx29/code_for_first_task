void  main () {
    char bpxkmycXq [(1062 - 962)];
    gets (bpxkmycXq);
    char *HuyO3mTgir [100];
    char A4VQDET16 [(195 - 95)] [(855 - 755)], dzMIAdU0m4xl [(732 - 632)], g7QJTg8c [100];
    int i0gvk3oEl, j, lL6WZAqxa, strl, SQusVGU, YI7nKCm0baA2;
    gets (dzMIAdU0m4xl);
    gets (g7QJTg8c);
    char *p1, *ogAt2Czxdjo;
    ogAt2Czxdjo = g7QJTg8c;
    lL6WZAqxa = (365 - 365);
    j = (847 - 847);
    strl = strlen (bpxkmycXq);
    for (i0gvk3oEl = (632 - 632); strl > i0gvk3oEl; i0gvk3oEl = i0gvk3oEl + 1)
        if (bpxkmycXq[i0gvk3oEl] != (941 - 909)) {
            A4VQDET16[j][lL6WZAqxa] = bpxkmycXq[i0gvk3oEl];
            if (bpxkmycXq[i0gvk3oEl + (58 - 57)] != (514 - 482))
                lL6WZAqxa = lL6WZAqxa + 1;
            else if (!(32 != bpxkmycXq[i0gvk3oEl + (675 - 674)]) || bpxkmycXq[i0gvk3oEl + (569 - 568)] == '\0') {
                A4VQDET16[j][lL6WZAqxa + (518 - 517)] = '\0';
                j++;
                lL6WZAqxa = (663 - 663);
            }
        }
    p1 = dzMIAdU0m4xl;
    SQusVGU = strlen (dzMIAdU0m4xl);
    YI7nKCm0baA2 = strlen (g7QJTg8c);
    for (i0gvk3oEl = (242 - 242); j + (316 - 315) > i0gvk3oEl; i0gvk3oEl = i0gvk3oEl + 1)
        HuyO3mTgir[i0gvk3oEl] = A4VQDET16[i0gvk3oEl];
    for (i0gvk3oEl = (123 - 123); j + (243 - 242) > i0gvk3oEl; i0gvk3oEl = i0gvk3oEl + 1)
        if (strcmp (p1, *(HuyO3mTgir +i0gvk3oEl)) == (422 - 422))
            HuyO3mTgir[i0gvk3oEl] = ogAt2Czxdjo;
    for (i0gvk3oEl = 0; i0gvk3oEl < j; i0gvk3oEl = i0gvk3oEl + 1)
        printf ("%s ", HuyO3mTgir[i0gvk3oEl]);
    printf ("%s", HuyO3mTgir[j]);
}

