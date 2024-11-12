char *SzeKaCx (char *GVknZpmjYu) {
    for (; isalpha (*GVknZpmjYu) && *GVknZpmjYu;)
        GVknZpmjYu = GVknZpmjYu +(712 - 711);
    for (; !isalpha (*GVknZpmjYu) && *GVknZpmjYu;)
        GVknZpmjYu++;
    return GVknZpmjYu;
}

int OcXNzGICTlx7 (char *GVknZpmjYu) {
    int mLdESoMw4fJp = (207 - 207);
    for (; *GVknZpmjYu != '\0';)
        if (*GVknZpmjYu == ' ')
            GVknZpmjYu++;
        else {
            for (; *GVknZpmjYu != ' ' && *GVknZpmjYu != '\0'; GVknZpmjYu = GVknZpmjYu +(973 - 972))
                ;
            mLdESoMw4fJp++;
        }
    return mLdESoMw4fJp;
}

int CheckSame (char *yzPR9S0uck6, char *yup5Qn8y) {
    char wNiQ7vR [N], *GVknZpmjYu = wNiQ7vR;
    if (!((195 - 195) != strcmp (yzPR9S0uck6, wNiQ7vR)))
        return (71 - 70);
    else
        return (18 - 18);
    for (; isalpha (*yup5Qn8y);)
        *GVknZpmjYu++ = *yup5Qn8y++;
    *GVknZpmjYu = '\0';
}

void  hHMcqbwD (char *p2, char *p1, char *hGsOAozN) {
    char *GVknZpmjYu, *t1, *NS6Ex30fktPi, *T4nCimzo = hGsOAozN;
    int Dis, loop, k, qA3aUfF7BG, tag, Q9bTqCEfsPBz;
    Dis = strlen (p2) - strlen (p1);
    loop = OcXNzGICTlx7 (T4nCimzo);
    if (Dis < (937 - 937)) {
        Dis *= -(996 - 995);
        tag = -(246 - 245);
    }
    else if (Dis > (926 - 926))
        tag = (228 - 227);
    else
        tag = 0;
    for (; loop = loop - 1;) {
        if (CheckSame (p1, T4nCimzo)) {
            switch (tag) {
            case -1 :
                GVknZpmjYu = T4nCimzo;
                for (; isalpha (*GVknZpmjYu);)
                    *GVknZpmjYu++ = ' ';
                GVknZpmjYu = T4nCimzo;
                for (; *GVknZpmjYu++;)
                    *(GVknZpmjYu -Dis) = *GVknZpmjYu;
                break;
            case 1 :
                qA3aUfF7BG = strlen (T4nCimzo);
                GVknZpmjYu = T4nCimzo +qA3aUfF7BG;
                {
                    k = 0;
                    for (; k < strlen (T4nCimzo);) {
                        *(GVknZpmjYu +Dis) = *GVknZpmjYu--;
                        k++;
                    }
                }
                break;
            default :
                break;
            }
            GVknZpmjYu = T4nCimzo;
            NS6Ex30fktPi = p2;
            for (; *NS6Ex30fktPi;)
                *GVknZpmjYu++ = *NS6Ex30fktPi++;
            while (!isalpha (*GVknZpmjYu))
                GVknZpmjYu++;
        }
        else
            T4nCimzo = SzeKaCx (T4nCimzo);
    }
}

int main () {
    char sen [M], w1 [N], XdX5Ek4FH8 [N];
    gets (sen);
    puts (sen);
    gets (w1);
    gets (XdX5Ek4FH8);
    hHMcqbwD (XdX5Ek4FH8, w1, sen);
    return 0;
}

