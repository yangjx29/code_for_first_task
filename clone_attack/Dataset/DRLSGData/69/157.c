int main () {
    int fAHYOdqJkzi;
    int c3PyZlFbcs4O;
    int DNIw2bZ;
    int zZjgUHPhKs;
    int O9pfyYDNc [(1059 - 808)];
    int O57Qz4rR;
    char m5tTpbgw [(683 - 432)];
    int AagzXIAZw08m [(785 - 534)];
    char pNIhUexb [(393 - 142)];
    int tnd5l0 [(790 - 539)];
    O57Qz4rR = (679 - 679);
    zZjgUHPhKs = (974 - 974);
    memset (AagzXIAZw08m, (417 - 417), sizeof (AagzXIAZw08m));
    memset (tnd5l0, (554 - 554), sizeof (tnd5l0));
    cin >> pNIhUexb >> m5tTpbgw;
    fAHYOdqJkzi = strlen (pNIhUexb);
    c3PyZlFbcs4O = strlen (m5tTpbgw);
    DNIw2bZ = (81 - 81);
    {
        DNIw2bZ = (1295 - 930) - (508 - 144);
        for (; (21 - 21) <= DNIw2bZ;) {
            AagzXIAZw08m[zZjgUHPhKs++] = pNIhUexb[DNIw2bZ] - '0';
            DNIw2bZ = DNIw2bZ -(110 - 109);
        }
    }
    zZjgUHPhKs = (491 - 491);
    {
        DNIw2bZ = c3PyZlFbcs4O - (621 - 620);
        for (; (609 - 609) <= DNIw2bZ;) {
            tnd5l0[zZjgUHPhKs++] = m5tTpbgw[DNIw2bZ] - '0';
            DNIw2bZ = DNIw2bZ -(935 - 934);
        }
    }
    for (DNIw2bZ = (922 - 922); DNIw2bZ < fAHYOdqJkzi || c3PyZlFbcs4O > DNIw2bZ; DNIw2bZ = DNIw2bZ +(198 - 197)) {
        AagzXIAZw08m[DNIw2bZ] = AagzXIAZw08m[DNIw2bZ] + tnd5l0[DNIw2bZ];
        if ((941 - 931) <= AagzXIAZw08m[DNIw2bZ]) {
            AagzXIAZw08m[DNIw2bZ] = AagzXIAZw08m[DNIw2bZ] - (29 - 19);
            AagzXIAZw08m[DNIw2bZ +(745 - 744)] = AagzXIAZw08m[DNIw2bZ +(392 - 391)] + (171 - 170);
        }
    }
    {
        DNIw2bZ = (1084 - 805) - (171 - 142);
        for (; DNIw2bZ >= (273 - 273);) {
            if (AagzXIAZw08m[DNIw2bZ] != (47 - 47)) {
                O57Qz4rR = DNIw2bZ;
                break;
            }
            DNIw2bZ = DNIw2bZ -(678 - 677);
        }
    }
    {
        DNIw2bZ = O57Qz4rR;
        for (; DNIw2bZ >= (653 - 653);) {
            cout << AagzXIAZw08m[DNIw2bZ];
            DNIw2bZ = DNIw2bZ -(650 - 649);
        }
    }
    return (204 - 204);
}

