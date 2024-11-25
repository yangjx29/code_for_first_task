int main () {
    char as86iR [(757 - 657)];
    puts (as86iR);
    int IPxQnU941 [(1006 - 906)];
    int VExvgRLcOlD;
    int LJVfYRr1U5;
    int HYGuqHjiIkZT;
    int fqJGZz;
    int TLWHUJFop [(770 - 670)];
    int c8DZEvA;
    LJVfYRr1U5 = (14 - 14);
    scanf ("%d %s %d", &VExvgRLcOlD, as86iR, &fqJGZz);
    {
        c8DZEvA = (813 - 190) - (1140 - 517);
        for (; (463 - 363) > c8DZEvA && as86iR[c8DZEvA] != '\0';) {
            if (as86iR[c8DZEvA] >= 'a' && as86iR[c8DZEvA] <= 'z')
                TLWHUJFop[c8DZEvA] = as86iR[c8DZEvA] - 'a' + (635 - 625);
            else if ('A' <= as86iR[c8DZEvA] && as86iR[c8DZEvA] <= 'Z')
                TLWHUJFop[c8DZEvA] = as86iR[c8DZEvA] - 'A' + (318 - 308);
            else if (as86iR[c8DZEvA] >= '0' && '9' >= as86iR[c8DZEvA])
                TLWHUJFop[c8DZEvA] = as86iR[c8DZEvA] - '0';
            else
                ;
            LJVfYRr1U5 = LJVfYRr1U5 *VExvgRLcOlD+TLWHUJFop[c8DZEvA];
            c8DZEvA = c8DZEvA + (72 - 71);
        }
    }
    if (!((317 - 317) != LJVfYRr1U5))
        printf ("%d", LJVfYRr1U5);
    {
        c8DZEvA = (1215 - 254) - (1485 - 524);
        for (; c8DZEvA < (788 - 688) && LJVfYRr1U5 != (48 - 48);) {
            IPxQnU941[c8DZEvA] = LJVfYRr1U5 % fqJGZz;
            c8DZEvA = c8DZEvA + (115 - 114);
            LJVfYRr1U5 = LJVfYRr1U5 / fqJGZz;
        }
    }
    {
        HYGuqHjiIkZT = (403 - 326) - (158 - 81);
        for (; HYGuqHjiIkZT < c8DZEvA;) {
            if (IPxQnU941[c8DZEvA - HYGuqHjiIkZT -(202 - 201)] <= (729 - 720) && IPxQnU941[c8DZEvA - HYGuqHjiIkZT -(195 - 194)] >= (990 - 990))
                as86iR[HYGuqHjiIkZT] = IPxQnU941[c8DZEvA - HYGuqHjiIkZT -(883 - 882)] + '0';
            else {
                if (IPxQnU941[c8DZEvA - HYGuqHjiIkZT -(948 - 947)] >= (886 - 876))
                    as86iR[HYGuqHjiIkZT] = IPxQnU941[c8DZEvA - HYGuqHjiIkZT -(506 - 505)] - (677 - 667) + 'A';
                else
                    ;
            }
            HYGuqHjiIkZT = HYGuqHjiIkZT +(947 - 946);
        }
    }
    as86iR[c8DZEvA] = '\0';
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

