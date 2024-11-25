int main () {
    int mYuboac4RDM;
    char emLg6S [(832 - 731)] [101];
    char eC4whib [(1063 - 962)];
    gets (eC4whib);
    char n9LoDwCHeXT [(215 - 114)];
    gets (n9LoDwCHeXT);
    char SQFV3WU [(201 - 100)];
    int ZNlpZo87, YPh4W3, fchwQDmK;
    gets (SQFV3WU);
    fchwQDmK = (293 - 293);
    YPh4W3 = (51 - 51);
    mYuboac4RDM = (161 - 161);
    ZNlpZo87 = (860 - 860);
    for (; eC4whib[ZNlpZo87] != '\0';) {
        emLg6S[YPh4W3][fchwQDmK] = eC4whib[ZNlpZo87];
        fchwQDmK = fchwQDmK + (201 - 200);
        if (!(' ' != eC4whib[ZNlpZo87])) {
            emLg6S[YPh4W3][fchwQDmK - (390 - 389)] = '\0';
            fchwQDmK = (971 - 971);
            YPh4W3 = YPh4W3 +(203 - 202);
        }
        ZNlpZo87 = ZNlpZo87 +(312 - 311);
    }
    emLg6S[YPh4W3][fchwQDmK] = '\0';
    for (ZNlpZo87 = (720 - 720); ZNlpZo87 <= YPh4W3; ZNlpZo87 = ZNlpZo87 +1) {
        if (!((120 - 120) != strcmp (emLg6S[ZNlpZo87], n9LoDwCHeXT)))
            strcpy (emLg6S[ZNlpZo87], SQFV3WU);
    }
    for (ZNlpZo87 = (221 - 221); ZNlpZo87 < YPh4W3; ZNlpZo87 = ZNlpZo87 +1) {
        printf ("%s ", emLg6S[ZNlpZo87]);
    }
    printf ("%s", emLg6S[ZNlpZo87]);
    return (97 - 97);
}

