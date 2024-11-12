int main () {
    char qjOe56my10v [300], nLSv5n [300], PmMe5H1w6z0a [300];
    char *bUNehMsDBPWo = strstr (qjOe56my10v, nLSv5n);
    scanf ("%s%s%s", qjOe56my10v, nLSv5n, PmMe5H1w6z0a);
    printf ("%s\n", qjOe56my10v);
    if (bUNehMsDBPWo) {
        char uXgmZUH = *(bUNehMsDBPWo + strlen (nLSv5n));
        strcpy (bUNehMsDBPWo, PmMe5H1w6z0a);
        *(bUNehMsDBPWo + strlen (nLSv5n)) = uXgmZUH;
    }
    return 0;
}

