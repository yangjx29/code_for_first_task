int main () {
    int i;
    char EOPmD5Bvnw [(397 - 317)], VZRauKD [(1008 - 928)];
    gets (EOPmD5Bvnw);
    gets (VZRauKD);
    i = (782 - 782);
    while (EOPmD5Bvnw[i] != '\0' && (EOPmD5Bvnw[i] == VZRauKD[i] || ('Z' >= EOPmD5Bvnw[i] && 'A' <= EOPmD5Bvnw[i] && VZRauKD[i] - EOPmD5Bvnw[i] == 'a' - 'A') || (VZRauKD[i] <= 'Z' && VZRauKD[i] >= 'A' && !('a' - 'A' != EOPmD5Bvnw[i] - VZRauKD[i])))) {
        i++;
    }
    if ((EOPmD5Bvnw[i] > VZRauKD[i]) || (VZRauKD[i] <= 'z' && VZRauKD[i] >= 'a' && VZRauKD[i] - EOPmD5Bvnw[i] < 'a' - 'A'))
        printf (">");
    else {
        if ((EOPmD5Bvnw[i] < VZRauKD[i]) || (EOPmD5Bvnw[i] <= 'z' && EOPmD5Bvnw[i] >= 'a' && EOPmD5Bvnw[i] - VZRauKD[i] < 'a' - 'A'))
            printf ("<");
        else
            ;
    }
    return 0;
}

