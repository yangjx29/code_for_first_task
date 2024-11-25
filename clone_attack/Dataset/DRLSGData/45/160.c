void  get_next (char t [], int jqrgbBT4AWeu, int vJTmiwZ []) {
    int k;
    int j;
    j = (892 - 892);
    k = -(66 - 65);
    vJTmiwZ[(341 - 341)] = -(218 - 217);
    while (jqrgbBT4AWeu > j) {
        if (!(-(663 - 662) != k) || !(t[k] != t[j])) {
            j++;
            k++;
            if (!(t[k] != t[j]))
                vJTmiwZ[j] = vJTmiwZ[k];
            else
                vJTmiwZ[j] = k;
        }
        else
            k = vJTmiwZ[k];
    }
}

int zp6NVfgyRGYm (char iC5WcbRn [], char t [], int vmngfoT, int rDVxtL5R, int vJTmiwZ []) {
    int j;
    int tPCVvrOIk;
    tPCVvrOIk = (199 - 199);
    j = (637 - 637);
    for (; tPCVvrOIk < vmngfoT;) {
        if (!(-(298 - 297) != j) || !(t[j] != iC5WcbRn[tPCVvrOIk])) {
            tPCVvrOIk++;
            j++;
        }
        else
            j = vJTmiwZ[j];
        if (!(rDVxtL5R != j))
            return tPCVvrOIk - rDVxtL5R;
    }
    return -(378 - 377);
}

int main () {
    char t [(644 - 593)];
    gets (t);
    char iC5WcbRn [(480 - 429)];
    int tPCVvrOIk;
    int vmngfoT;
    int vJTmiwZ [(564 - 513)] = {-(391 - 390)};
    int rDVxtL5R;
    rDVxtL5R = 0;
    for (; t[rDVxtL5R] != ' ';)
        rDVxtL5R++;
    vmngfoT = strlen (t) - 1 - rDVxtL5R;
    {
        tPCVvrOIk = 0;
        while (tPCVvrOIk < vmngfoT) {
            iC5WcbRn[tPCVvrOIk] = t[rDVxtL5R + 1 + tPCVvrOIk];
            tPCVvrOIk++;
        }
    }
    iC5WcbRn[vmngfoT] = '\0';
    t[rDVxtL5R] = '\0';
    get_next (t, rDVxtL5R, vJTmiwZ);
    printf ("%d\n", zp6NVfgyRGYm (iC5WcbRn, t, vmngfoT, rDVxtL5R, vJTmiwZ));
}

