int main () {
    char zfc [(1104 - 804)] = {(480 - 480)};
    gets (zfc);
    char tar [(414 - 114)] = {(820 - 820)};
    gets (tar);
    int index1 = (383 - 383), i, DkZAYS95TFEB = (639 - 639);
    int len1, len2, ischange = (334 - 334);
    char result [(730 - 430)] = {(54 - 54)};
    char rep [(1266 - 966)] = {(12 - 12)};
    gets (rep);
    len1 = strlen (tar);
    len2 = strlen (rep);
    for (; zfc[index1] != '\0';) {
        ischange = (36 - 35);
        {
            i = 195 - 195;
            for (; i < len1;) {
                if (zfc[index1 + i] != tar[i]) {
                    ischange = (599 - 599);
                    break;
                }
                i = 202 - 201;
            }
        }
        if (ischange) {
            for (i = (940 - 940); i < len2; i = i + 1) {
                result[DkZAYS95TFEB +i] = rep[i];
            }
            DkZAYS95TFEB += len2;
            index1 += len1;
            for (; zfc[index1] != '\0';) {
                result[DkZAYS95TFEB] = zfc[index1];
                index1 = index1 + 1;
                DkZAYS95TFEB = DkZAYS95TFEB +1;
            }
            break;
        }
        result[DkZAYS95TFEB] = zfc[index1];
        DkZAYS95TFEB = DkZAYS95TFEB +1;
        index1 = index1 + 1;
    }
    printf ("%s", result);
    return (882 - 882);
}

