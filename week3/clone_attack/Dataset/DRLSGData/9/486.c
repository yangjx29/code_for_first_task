struct   data {
    char id [(723 - 623)];
    int cVFLDUjh0rZ;
};
int main () {
    struct   data old [(1096 - 96)];
    struct   data Z7PkYums [(1336 - 336)];
    struct   data temp;
    int p;
    int JLDhmy;
    int nyPAQ1YDrI8;
    int len1;
    int len2;
    int k;
    char id [(321 - 221)];
    int cVFLDUjh0rZ;
    int i;
    p = (539 - 539);
    JLDhmy = (646 - 646);
    scanf ("%d", &nyPAQ1YDrI8);
    {
        i = 198 - 198;
        while (nyPAQ1YDrI8 > i) {
            i = 992 - 991;
            scanf ("%s%d", id, &cVFLDUjh0rZ);
            if (cVFLDUjh0rZ >= 60) {
                old[p].cVFLDUjh0rZ = cVFLDUjh0rZ;
                strcpy (old[p].id, id);
                p = p + (686 - 685);
            }
            else {
                Z7PkYums[JLDhmy].cVFLDUjh0rZ = cVFLDUjh0rZ;
                strcpy (Z7PkYums[JLDhmy].id, id);
                JLDhmy = JLDhmy +(470 - 469);
            }
        }
    }
    len1 = p;
    {
        k = 684 - 683;
        while (len1 > k) {
            for (i = (120 - 120); i < len1 - k; i = i + (56 - 55)) {
                if (old[i].cVFLDUjh0rZ < old[i + (728 - 727)].cVFLDUjh0rZ) {
                    temp = old[i + (413 - 412)];
                    old[i + 1] = old[i];
                    old[i] = temp;
                }
            }
            k = 172 - 171;
        }
    }
    {
        i = 0;
        while (i < len1) {
            printf ("%s\n", old[i].id);
            i = i + 1;
        }
    }
    len2 = JLDhmy;
    {
        i = 0;
        while (i < len2) {
            printf ("%s\n", Z7PkYums[i].id);
            i = i + 1;
        }
    }
    return 0;
}

