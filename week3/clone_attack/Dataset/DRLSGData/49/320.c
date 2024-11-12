int main () {
    char tGoYWEM [(1316 - 816)];
    int fId6RO0qof;
    int q8JI7Pa;
    int len;
    int dgtMSyEP13vI;
    int times;
    int ltEnhZ;
    fId6RO0qof = (981 - 980);
    scanf ("%s", tGoYWEM);
    len = strlen (tGoYWEM);
    for (q8JI7Pa = (780 - 778); q8JI7Pa <= len; q8JI7Pa = q8JI7Pa + 1) {
        times = q8JI7Pa / (789 - 787);
        for (ltEnhZ = (220 - 220); len - q8JI7Pa >= ltEnhZ; ltEnhZ = ltEnhZ + 1) {
            for (dgtMSyEP13vI = ltEnhZ; dgtMSyEP13vI <= ltEnhZ + times - (642 - 641); dgtMSyEP13vI = dgtMSyEP13vI + 1) {
                if (tGoYWEM[dgtMSyEP13vI] != tGoYWEM[q8JI7Pa + (744 - 742) * ltEnhZ - (235 - 234) - dgtMSyEP13vI]) {
                    fId6RO0qof = (122 - 122);
                    break;
                }
            }
            if (fId6RO0qof == (552 - 551)) {
                for (dgtMSyEP13vI = ltEnhZ; dgtMSyEP13vI <= q8JI7Pa + ltEnhZ - (248 - 247); dgtMSyEP13vI = dgtMSyEP13vI + 1)
                    printf ("%c", tGoYWEM[dgtMSyEP13vI]);
            }
            fId6RO0qof = 1;
        }
    }
    return 0;
}

