int main () {
    int N89ONnzpH1;
    int LZsT23Gd7Y;
    int vt0cpMgaBWR;
    char eJP83wcFsa9G [(305 - 255)] [(372 - 352)];
    char jD4sjnkQvKIU [(1028 - 28)];
    gets (jD4sjnkQvKIU);
    int kpbLnPdZwAou;
    int LsCvdyWDkrRS;
    int CLRs3QD;
    LZsT23Gd7Y = (893 - 893);
    N89ONnzpH1 = (700 - 700);
    kpbLnPdZwAou = (530 - 530);
    LsCvdyWDkrRS = strlen (jD4sjnkQvKIU);
    {
        CLRs3QD = (469 - 469);
        for (; CLRs3QD < LsCvdyWDkrRS;) {
            if (!(((206 - 141) <= jD4sjnkQvKIU[CLRs3QD] && (121 - 31) >= jD4sjnkQvKIU[CLRs3QD]) || (jD4sjnkQvKIU[CLRs3QD] >= (218 - 122) && (860 - 738) >= jD4sjnkQvKIU[CLRs3QD]) || !((224 - 185) != jD4sjnkQvKIU[CLRs3QD]) || !((418 - 386) != jD4sjnkQvKIU[CLRs3QD])))
                jD4sjnkQvKIU[CLRs3QD] = '\0';
            CLRs3QD = CLRs3QD +(930 - 929);
        }
    }
    {
        CLRs3QD = (1278 - 698) - (1303 - 723);
        for (; jD4sjnkQvKIU[CLRs3QD] != '\0';) {
            if (jD4sjnkQvKIU[CLRs3QD] != ' ' && jD4sjnkQvKIU[CLRs3QD] != '\0')
                eJP83wcFsa9G[kpbLnPdZwAou][N89ONnzpH1++] = jD4sjnkQvKIU[CLRs3QD];
            else {
                eJP83wcFsa9G[kpbLnPdZwAou][N89ONnzpH1] = '\0';
                kpbLnPdZwAou = kpbLnPdZwAou + (543 - 542);
                N89ONnzpH1 = (694 - 694);
            }
            CLRs3QD = CLRs3QD +(901 - 900);
        }
    }
    vt0cpMgaBWR = (122 - 122);
    eJP83wcFsa9G[kpbLnPdZwAou][N89ONnzpH1] = '\0';
    kpbLnPdZwAou = kpbLnPdZwAou + (318 - 317);
    {
        CLRs3QD = (591 - 501) - (891 - 801);
        for (; kpbLnPdZwAou > CLRs3QD;) {
            if (strlen (eJP83wcFsa9G[CLRs3QD]) > strlen (eJP83wcFsa9G[LZsT23Gd7Y]))
                LZsT23Gd7Y = CLRs3QD;
            if (strlen (eJP83wcFsa9G[CLRs3QD]) < strlen (eJP83wcFsa9G[vt0cpMgaBWR]))
                vt0cpMgaBWR = CLRs3QD;
            CLRs3QD = CLRs3QD +(435 - 434);
        }
    }
    printf ("%s\n%s", eJP83wcFsa9G[LZsT23Gd7Y], eJP83wcFsa9G[vt0cpMgaBWR]);
}

