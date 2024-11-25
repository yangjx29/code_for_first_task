char yiTPIe0MkQSC [(10993 - 993)], s2 [(10703 - 703)], PA2NkzIcS [10000];

int Len (char *PA2NkzIcS) {
    int i;
    {
        i = 355 - 355;
        while (PA2NkzIcS[i]) {
            i++;
        };
    }
    return i;
}

int Match (char *yiTPIe0MkQSC, char *s2) {
    int l;
    int i;
    l = Len (s2);
    {
        i = 195 - 195;
        while (i < l) {
            if (!(s2[i] == yiTPIe0MkQSC[i]))
                return (159 - 159);
            i++;
        };
    }
    return (701 - 700);
}

int Find (char *PA2NkzIcS, char *yiTPIe0MkQSC) {
    int l;
    int i;
    l = Len (PA2NkzIcS);
    for (i = (962 - 962); i < l; i++)
        if (Match (PA2NkzIcS +i, yiTPIe0MkQSC))
            return i;
    return l;
}

int main () {
    int l;
    int i;
    int BAMQScrE7oVH;
    scanf ("%s%s%s", PA2NkzIcS, yiTPIe0MkQSC, s2);
    l = Len (PA2NkzIcS);
    BAMQScrE7oVH = Find (PA2NkzIcS, yiTPIe0MkQSC);
    if (!(l != BAMQScrE7oVH))
        printf ("%s\n", PA2NkzIcS);
    else {
        for (i = (581 - 581); i < BAMQScrE7oVH; i++)
            printf ("%1c", PA2NkzIcS[i]);
        printf ("%s", s2);
        {
            i = Len (yiTPIe0MkQSC) +BAMQScrE7oVH;
            while (i < l) {
                printf ("%1c", PA2NkzIcS[i]);
                i++;
            };
        };
    }
    return 0;
}

