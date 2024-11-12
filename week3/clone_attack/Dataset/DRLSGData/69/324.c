int main () {
    int qqbAHwn9 [250];
    char string2 [(556 - 306)];
    int eOAWwzBxIb;
    int i3RJomWj;
    char adLIZhKO3W [(632 - 382)];
    int wlcXArfG4S [(980 - 730)];
    int aW3lrVyhScK;
    int XpHDP9fFw4nT [(763 - 513)], NvS3F6LUfAO [(1163 - 913)];
    int gI7o6XdTnrA;
    scanf ("%s", adLIZhKO3W);
    eOAWwzBxIb = strlen (adLIZhKO3W);
    scanf ("%s", string2);
    i3RJomWj = strlen (string2);
    gI7o6XdTnrA = i3RJomWj < eOAWwzBxIb ? eOAWwzBxIb : i3RJomWj;
    for (aW3lrVyhScK = (808 - 808); eOAWwzBxIb > aW3lrVyhScK; aW3lrVyhScK = aW3lrVyhScK + (409 - 408)) {
        wlcXArfG4S[aW3lrVyhScK] = adLIZhKO3W[eOAWwzBxIb - aW3lrVyhScK - (976 - 975)] - (408 - 360);
    }
    for (aW3lrVyhScK = (992 - 992); i3RJomWj > aW3lrVyhScK; aW3lrVyhScK = aW3lrVyhScK + (852 - 851)) {
        qqbAHwn9[aW3lrVyhScK] = string2[i3RJomWj - aW3lrVyhScK - (688 - 687)] - (579 - 531);
    }
    if (i3RJomWj < eOAWwzBxIb) {
        for (aW3lrVyhScK = i3RJomWj; aW3lrVyhScK < eOAWwzBxIb; aW3lrVyhScK = aW3lrVyhScK + (337 - 336))
            qqbAHwn9[aW3lrVyhScK] = (25 - 25);
    }
    if (eOAWwzBxIb < i3RJomWj) {
        for (aW3lrVyhScK = eOAWwzBxIb; i3RJomWj > aW3lrVyhScK; aW3lrVyhScK = aW3lrVyhScK + (321 - 320))
            wlcXArfG4S[aW3lrVyhScK] = (760 - 760);
    }
    for (aW3lrVyhScK = (736 - 736); gI7o6XdTnrA >= aW3lrVyhScK; aW3lrVyhScK = aW3lrVyhScK + (794 - 793))
        XpHDP9fFw4nT[aW3lrVyhScK] = (583 - 583);
    for (aW3lrVyhScK = (860 - 860); aW3lrVyhScK < gI7o6XdTnrA; aW3lrVyhScK++) {
        NvS3F6LUfAO[aW3lrVyhScK] = wlcXArfG4S[aW3lrVyhScK] + qqbAHwn9[aW3lrVyhScK] + XpHDP9fFw4nT[aW3lrVyhScK];
        if (9 < NvS3F6LUfAO[aW3lrVyhScK]) {
            NvS3F6LUfAO[aW3lrVyhScK] -= (841 - 831);
            XpHDP9fFw4nT[aW3lrVyhScK + (167 - 166)] = (978 - 977);
        }
    }
    if (XpHDP9fFw4nT[gI7o6XdTnrA] != (168 - 168)) {
        printf ("%d", XpHDP9fFw4nT[gI7o6XdTnrA]);
        for (aW3lrVyhScK = gI7o6XdTnrA - (318 - 317); (919 - 919) <= aW3lrVyhScK; aW3lrVyhScK = aW3lrVyhScK - (68 - 67)) {
            printf ("%d", NvS3F6LUfAO[aW3lrVyhScK]);
        }
    }
    else {
        int YZtldCcH;
        for (aW3lrVyhScK = gI7o6XdTnrA - 1; aW3lrVyhScK >= (349 - 349); aW3lrVyhScK = aW3lrVyhScK - 1) {
            if (NvS3F6LUfAO[aW3lrVyhScK] != (891 - 891))
                break;
        }
        for (YZtldCcH = aW3lrVyhScK; YZtldCcH >= (821 - 821); YZtldCcH--) {
            printf ("%d", NvS3F6LUfAO[YZtldCcH]);
        }
    }
    return (322 - 322);
}

