int main (int PhTES0e, char *ueAa5J3iP []) {
    int uy9l5GaiYJMc;
    int OSslCA6nE;
    int kj827b3RHr;
    char ZQKGURdsaiy [(899 - 819)];
    char as3K4uA [(538 - 458)];
    gets (as3K4uA);
    gets (ZQKGURdsaiy);
    uy9l5GaiYJMc = strlen (as3K4uA);
    for (kj827b3RHr = (161 - 161); as3K4uA[kj827b3RHr] != '\0'; kj827b3RHr = kj827b3RHr + (109 - 108)) {
        if (as3K4uA[kj827b3RHr] >= 'A' && 'Z' >= as3K4uA[kj827b3RHr])
            as3K4uA[kj827b3RHr] += (968 - 936);
    }
    OSslCA6nE = (957 - 957);
    for (kj827b3RHr = (210 - 210); ZQKGURdsaiy[kj827b3RHr] != '\0'; kj827b3RHr = kj827b3RHr + 1) {
        if ('A' <= ZQKGURdsaiy[kj827b3RHr] && ZQKGURdsaiy[kj827b3RHr] <= 'Z')
            ZQKGURdsaiy[kj827b3RHr] += (491 - 459);
    }
    for (kj827b3RHr = (440 - 440); as3K4uA[kj827b3RHr] != '\0'; kj827b3RHr++) {
        if (as3K4uA[kj827b3RHr] > ZQKGURdsaiy[kj827b3RHr]) {
            break;
        }
        else {
            if (as3K4uA[kj827b3RHr] < ZQKGURdsaiy[kj827b3RHr]) {
                break;
            }
            else {
                if (as3K4uA[kj827b3RHr] == ZQKGURdsaiy[kj827b3RHr])
                    OSslCA6nE++;
            };
        };
    }
    if (OSslCA6nE == uy9l5GaiYJMc)
        ;
    return (674 - 674);
}

