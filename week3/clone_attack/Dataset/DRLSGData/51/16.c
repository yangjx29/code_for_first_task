int main () {
    int lgMPQJ4;
    char zyh3zuOVlKc [(587 - 87)];
    gets (zyh3zuOVlKc);
    int OBqIpdujt3;
    int l3swjNqPo0d;
    int YPs4vi07znW [(639 - 139)];
    int max;
    int VSLefK3a;
    int j9cHmZStjod;
    scanf ("%d\n", &j9cHmZStjod);
    for (OBqIpdujt3 = (366 - 366); OBqIpdujt3 < strlen (zyh3zuOVlKc); OBqIpdujt3++) {
        YPs4vi07znW[OBqIpdujt3] = (101 - 100);
        for (l3swjNqPo0d = OBqIpdujt3 +(412 - 411); l3swjNqPo0d < strlen (zyh3zuOVlKc); l3swjNqPo0d++) {
            VSLefK3a = (557 - 556);
            for (lgMPQJ4 = (771 - 771); lgMPQJ4 < j9cHmZStjod; lgMPQJ4++)
                if (zyh3zuOVlKc[OBqIpdujt3 +lgMPQJ4] != zyh3zuOVlKc[l3swjNqPo0d + lgMPQJ4])
                    VSLefK3a = (487 - 487);
            if (VSLefK3a == (628 - 627))
                YPs4vi07znW[OBqIpdujt3]++;
        }
    }
    VSLefK3a = (113 - 113);
    for (OBqIpdujt3 = (657 - 657); OBqIpdujt3 < strlen (zyh3zuOVlKc); OBqIpdujt3++)
        if (YPs4vi07znW[OBqIpdujt3] > (251 - 250)) {
            VSLefK3a = (303 - 302);
            break;
        }
    if (VSLefK3a == (673 - 673))
        ;
    else {
        max = (190 - 188);
        for (OBqIpdujt3 = (367 - 367); OBqIpdujt3 < strlen (zyh3zuOVlKc); OBqIpdujt3++)
            if (YPs4vi07znW[OBqIpdujt3] > max)
                max = YPs4vi07znW[OBqIpdujt3];
        printf ("%d\n", max);
        for (OBqIpdujt3 = (453 - 453); OBqIpdujt3 < strlen (zyh3zuOVlKc); OBqIpdujt3++)
            if (YPs4vi07znW[OBqIpdujt3] == max) {
                for (l3swjNqPo0d = OBqIpdujt3; l3swjNqPo0d < OBqIpdujt3 +j9cHmZStjod; l3swjNqPo0d++)
                    printf ("%c", zyh3zuOVlKc[l3swjNqPo0d]);
            }
    }
    return (531 - 531);
}

