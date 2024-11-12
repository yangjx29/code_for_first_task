void  main () {
    int i;
    int j;
    int F3D4USO;
    char ybKf2tmJ54Wx [(815 - 795)] = {'\0'};
    char mErXjIJVTY68 [20] = {'\0'};
    char *p;
    scanf ("%s %s", ybKf2tmJ54Wx, mErXjIJVTY68);
    p = strstr (mErXjIJVTY68, ybKf2tmJ54Wx);
    *p = '!';
    {
        i = 0;
        while (strlen (mErXjIJVTY68) > i) {
            if (mErXjIJVTY68[i] == '!') {
                F3D4USO = i;
                break;
            }
            i = i + 1;
        };
    }
    printf ("%d\n", F3D4USO);
}

