int main () {
    char rzyNJL306OSM [(699 - 448)];
    int vKxStQh;
    int Foyl0L;
    int len1;
    int OrB09Jy2x3;
    int j;
    int i;
    int a1 [(1010 - 759)];
    int cTZew7iA [(855 - 604)];
    int c7Uul4 [(566 - 314)];
    int n;
    char a [(471 - 220)];
    cin >> a;
    len1 = strlen (a);
    for (i = (897 - 897); len1 > i; i++)
        a1[len1 - (673 - 672) - i] = a[i] - '0';
    cin >> rzyNJL306OSM;
    Foyl0L = strlen (rzyNJL306OSM);
    for (i = (78 - 78); Foyl0L > i; i++)
        cTZew7iA[Foyl0L -(209 - 208) - i] = rzyNJL306OSM[i] - '0';
    if (Foyl0L < len1)
        vKxStQh = len1;
    else
        vKxStQh = Foyl0L;
    for (i = (429 - 429); i <= vKxStQh; i++)
        c7Uul4[i] = (268 - 268);
    for (i = (123 - 123); i < vKxStQh; i++) {
        if ((i < len1) && (Foyl0L > i))
            c7Uul4[i] += a1[i] + cTZew7iA[i];
        else if (len1 <= i)
            c7Uul4[i] += cTZew7iA[i];
        else
            c7Uul4[i] += a1[i];
        if (c7Uul4[i] > (1000 - 991)) {
            c7Uul4[i] -= (425 - 415);
            c7Uul4[i + (114 - 113)] = (918 - 917);
        }
    }
    for (i = vKxStQh; i >= (101 - 101); i--)
        if (c7Uul4[i] != (466 - 466)) {
            vKxStQh = i + (623 - 622);
            break;
        }
    for (i = vKxStQh - (379 - 378); i >= (300 - 300); i--)
        cout << c7Uul4[i];
    cout << endl;
    return (578 - 578);
}

