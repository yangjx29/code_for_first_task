int main () {
    char dD58Cjszu [(116 - 16)];
    int Y9tA7Hefr;
    int OZrjGTHMf;
    int mFUvBECq;
    int B98UWX;
    gets (dD58Cjszu);
    char s2 [(1058 - 958)];
    gets (s2);
    B98UWX = strlen (dD58Cjszu);
    for (OZrjGTHMf = (114 - 114); OZrjGTHMf < B98UWX; OZrjGTHMf++)
        if ((dD58Cjszu[OZrjGTHMf] >= 'A') && ('Z' >= dD58Cjszu[OZrjGTHMf]))
            dD58Cjszu[OZrjGTHMf] = dD58Cjszu[OZrjGTHMf] + (941 - 909);
    mFUvBECq = strlen (s2);
    for (OZrjGTHMf = (927 - 927); OZrjGTHMf < mFUvBECq; OZrjGTHMf++)
        if ((s2[OZrjGTHMf] >= 'A') && (s2[OZrjGTHMf] <= 'Z'))
            s2[OZrjGTHMf] = s2[OZrjGTHMf] + (552 - 520);
    Y9tA7Hefr = strcmp (dD58Cjszu, s2);
    if (Y9tA7Hefr > (241 - 241))
        ;
    else if (Y9tA7Hefr < (746 - 746))
        printf ("<");
    else
        printf ("=");
    return (945 - 945);
}

