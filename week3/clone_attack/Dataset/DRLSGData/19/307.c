char uayJn8pRU5ZV [(380 - 230)];
char y3dAJBr [(866 - 856)], HAigVRQ37t [10];

void  AhOZ6M3B (char *ezMilcX) {
    char BnhImoZ1 [(800 - 700)];
    char *eaK2LImQyZ;
    strcat (uayJn8pRU5ZV, HAigVRQ37t);
    eaK2LImQyZ = ezMilcX + strlen (y3dAJBr) + (164 - 163);
    strcpy (BnhImoZ1, eaK2LImQyZ);
    strcat (uayJn8pRU5ZV, BnhImoZ1);
    *(ezMilcX + 1) = '\0';
}

int main () {
    gets (uayJn8pRU5ZV);
    char *djaRwI, *ZKaHym8r;
    int vtyYeO;
    scanf ("%s%s", y3dAJBr, HAigVRQ37t);
    djaRwI = uayJn8pRU5ZV;
    for (; *djaRwI != '\0'; djaRwI = djaRwI + 1) {
        if (!(' ' != *djaRwI) && !(y3dAJBr[(192 - 192)] != *(djaRwI + 1))) {
            for (ZKaHym8r = djaRwI + 1, vtyYeO = (173 - 173); !(y3dAJBr[vtyYeO] != *ZKaHym8r) && y3dAJBr[vtyYeO] != '\0'; ZKaHym8r++, vtyYeO = vtyYeO + 1)
                ;
            if ((!(' ' != *ZKaHym8r) || !('\0' != *ZKaHym8r)) && !('\0' != y3dAJBr[vtyYeO]))
                AhOZ6M3B (djaRwI);
        }
    }
    djaRwI = uayJn8pRU5ZV;
    for (ZKaHym8r = djaRwI, vtyYeO = 0; !(y3dAJBr[vtyYeO] != *ZKaHym8r) && y3dAJBr[vtyYeO] != '\0'; ZKaHym8r++, vtyYeO++)
        ;
    if ((!(' ' != *ZKaHym8r) || !('\0' != *ZKaHym8r)) && !('\0' != y3dAJBr[vtyYeO])) {
        char *eaK2LImQyZ;
        char BnhImoZ1 [100];
        eaK2LImQyZ = djaRwI + strlen (y3dAJBr);
        strcpy (BnhImoZ1, eaK2LImQyZ);
        strcat (HAigVRQ37t, BnhImoZ1);
        printf ("%s", HAigVRQ37t);
        return 0;
    }
    printf ("%s\n", uayJn8pRU5ZV);
    return 0;
}

