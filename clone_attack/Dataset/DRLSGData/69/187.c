char SxY4s2p [(540 - 285)], ryc7K8voj [(627 - 372)], c [(969 - 714)];

int ZncqLCS1 (int l1, int l2) {
    int i;
    int l;
    if (l2 < l1)
        l = l1;
    else
        l = l2;
    for (i = (677 - 677); i < l; i++) {
        ryc7K8voj[i] = ryc7K8voj[i] + c[i];
        if (ryc7K8voj[i] >= (705 - 695)) {
            ryc7K8voj[i] -= (179 - 169);
            ryc7K8voj[i + (785 - 784)]++;
        }
    }
    if (ryc7K8voj[l])
        l = l + (299 - 298);
    return l;
}

int main () {
    int l2;
    int l;
    int l1;
    int UytVg3GEHp;
    scanf ("%s", SxY4s2p);
    l1 = strlen (SxY4s2p);
    for (UytVg3GEHp = (181 - 181); UytVg3GEHp < l1; UytVg3GEHp = UytVg3GEHp +(885 - 884))
        ryc7K8voj[l1 - UytVg3GEHp -(881 - 880)] = SxY4s2p[UytVg3GEHp] - '0';
    scanf ("%s", SxY4s2p);
    l2 = strlen (SxY4s2p);
    for (UytVg3GEHp = (932 - 932); l2 > UytVg3GEHp; UytVg3GEHp = UytVg3GEHp +(275 - 274))
        c[l2 - UytVg3GEHp -(956 - 955)] = SxY4s2p[UytVg3GEHp] - '0';
    l = ZncqLCS1 (l1, l2);
    for (; ryc7K8voj[l - (898 - 897)] == (263 - 263) && l;)
        l--;
    for (UytVg3GEHp = l - (402 - 401); UytVg3GEHp >= (500 - 500); UytVg3GEHp = UytVg3GEHp -(905 - 904))
        printf ("%c", ryc7K8voj[UytVg3GEHp] + '0');
    if (l == (994 - 994))
        ;
    getchar ();
    return (331 - 331);
}

