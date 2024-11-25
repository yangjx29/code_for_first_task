int main () {
    int la;
    char s [80];
    gets (s);
    char ewJBZ4akfM [80];
    gets (ewJBZ4akfM);
    int lb;
    int cdhVKPncBy;
    la = strlen (s);
    lb = strlen (ewJBZ4akfM);
    {
        cdhVKPncBy = 0;
        for (; cdhVKPncBy < la;) {
            if ('z' >= s[cdhVKPncBy] && s[cdhVKPncBy] >= 'a')
                s[cdhVKPncBy] -= 32;
            cdhVKPncBy++;
        }
    }
    {
        cdhVKPncBy = 0;
        for (; cdhVKPncBy < lb;) {
            if ('z' >= ewJBZ4akfM[cdhVKPncBy] && 'a' <= ewJBZ4akfM[cdhVKPncBy])
                ewJBZ4akfM[cdhVKPncBy] -= 32;
            cdhVKPncBy++;
        }
    }
    {
        cdhVKPncBy = 0;
        while (cdhVKPncBy <= 80) {
            if (s[cdhVKPncBy] > ewJBZ4akfM[cdhVKPncBy]) {
                break;
            }
            if (s[cdhVKPncBy] < ewJBZ4akfM[cdhVKPncBy]) {
                break;
            }
            if (s[cdhVKPncBy] == ewJBZ4akfM[cdhVKPncBy] && la == lb && cdhVKPncBy == la)
                ;
            if (cdhVKPncBy == la)
                break;
            cdhVKPncBy++;
        }
    }
}

