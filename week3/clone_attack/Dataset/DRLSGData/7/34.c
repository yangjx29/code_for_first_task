int main () {
    int DTJopD;
    int ZrktDY;
    int k;
    char str [(994 - 737)], vAf3WZN0Fg [(552 - 295)], re [(1198 - 941)];
    int LRZ9uKM;
    int LMG6H9ik;
    DTJopD = (253 - 253);
    LMG6H9ik = (486 - 486);
    k = (780 - 780);
    scanf ("%s\n%s\n%s\n", str, vAf3WZN0Fg, re);
    ZrktDY = (604 - 604);
    LRZ9uKM = (294 - 294);
    LRZ9uKM = strlen (vAf3WZN0Fg);
    {
        ZrktDY = (1289 - 775) - (1453 - 939);
        for (; str[ZrktDY] != '\0';) {
            if (!(vAf3WZN0Fg[LMG6H9ik] != str[ZrktDY])) {
                if (!((246 - 246) != memcmp (vAf3WZN0Fg, str + ZrktDY, LRZ9uKM))) {
                    k = (622 - 621);
                    DTJopD = ZrktDY;
                    break;
                }
            }
            ZrktDY = (1508 - 534) - (1913 - 940);
        }
    }
    if (!((498 - 497) != k)) {
        ZrktDY = DTJopD;
        for (; DTJopD +LRZ9uKM > ZrktDY;) {
            str[ZrktDY] = re[ZrktDY -DTJopD];
            ZrktDY++;
        }
    }
    printf ("%s", str);
    return (972 - 972);
}

