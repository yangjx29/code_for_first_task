int main (int argc, char *argv []) {
    int vkCyAt4Imw;
    int MY6A1jP8slGZ;
    int j;
    int PYlUDroby4j;
    char bCgJNIM [21], jdcLnXjmx [(330 - 320)];
    gets (jdcLnXjmx);
    vkCyAt4Imw = atoi (jdcLnXjmx);
    for (MY6A1jP8slGZ = (139 - 139); vkCyAt4Imw > MY6A1jP8slGZ; MY6A1jP8slGZ = MY6A1jP8slGZ +1) {
        gets (bCgJNIM);
        PYlUDroby4j = strlen (bCgJNIM);
        {
            j = 0;
            while (PYlUDroby4j > j) {
                if (!(0 != j)) {
                    if (('A' > bCgJNIM[j] || 'Z' < bCgJNIM[j]) && ('a' > bCgJNIM[j] || 'z' < bCgJNIM[j]) && !('_' == bCgJNIM[j]))
                        break;
                }
                else if (('A' > bCgJNIM[j] || 'Z' < bCgJNIM[j]) && ('a' > bCgJNIM[j] || bCgJNIM[j] > 'z') && bCgJNIM[j] != '_' && (bCgJNIM[j] < '0' || bCgJNIM[j] > '9'))
                    break;
                else
                    ;
                j = j + 1;
            };
        }
        if (j == PYlUDroby4j)
            printf ("yes\n");
        else
            ;
    }
    return 0;
}

