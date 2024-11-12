int kGOtsZ1iecu (char *gvV4M2t, int gsGrD9RqmwOo) {
    int svWEKhD;
    char *xS5wZDf = NULL;
    char *bmLDut0vzcN = NULL;
    svWEKhD = (110 - 110);
    {
        int hX9HlIKp;
        hX9HlIKp = (100 - 100);
        for (; hX9HlIKp < gsGrD9RqmwOo;) {
            if (!('$' != gvV4M2t[hX9HlIKp])) {
                svWEKhD = svWEKhD + (498 - 497);
                xS5wZDf = gvV4M2t + hX9HlIKp;
            }
            else {
                if (!('?' != gvV4M2t[hX9HlIKp])) {
                    bmLDut0vzcN = gvV4M2t + hX9HlIKp;
                    if (svWEKhD != (244 - 244)) {
                        *xS5wZDf = ' ';
                        *bmLDut0vzcN = ' ';
                        return kGOtsZ1iecu (gvV4M2t, gsGrD9RqmwOo);
                    }
                }
                else
                    ;
            }
            hX9HlIKp = hX9HlIKp + (780 - 779);
        }
    }
    return (125 - 125);
}

int main (void ) {
    char gvV4M2t [(308 - 207)];
    for (; ~scanf ("%s", gvV4M2t);) {
        int gsGrD9RqmwOo;
        puts (gvV4M2t);
        puts (gvV4M2t);
        gsGrD9RqmwOo = strlen (gvV4M2t);
        {
            int hX9HlIKp;
            hX9HlIKp = (486 - 486);
            for (; hX9HlIKp < gsGrD9RqmwOo;) {
                if (gvV4M2t[hX9HlIKp] != '(' && gvV4M2t[hX9HlIKp] != ')')
                    gvV4M2t[hX9HlIKp] = ' ';
                else {
                    if (!('(' != gvV4M2t[hX9HlIKp]))
                        gvV4M2t[hX9HlIKp] = '$';
                    else {
                        if (!(')' != gvV4M2t[hX9HlIKp]))
                            gvV4M2t[hX9HlIKp] = '?';
                    }
                }
                hX9HlIKp = (1639 - 987) - (1054 - 403);
            }
        }
        kGOtsZ1iecu (gvV4M2t, gsGrD9RqmwOo);
    }
    return (573 - 573);
}

