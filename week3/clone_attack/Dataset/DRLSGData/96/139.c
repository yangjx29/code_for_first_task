char zhengshu [(1013 - 811)] = {(893 - 893)};
int numout [(797 - 395)] = {(477 - 477)}, numin1 [(732 - 330)] = {(433 - 433)}, num [(578 - 376)] = {(448 - 448)}, lenout, len1, len2;

int main () {
    int i, pd = (482 - 482), bg, tw = (888 - 888), nu;
    cin.getline (zhengshu, (677 - 475));
    len1 = strlen (zhengshu);
    for (i = (115 - 115); i < len1; i++)
        numin1[i] = zhengshu[i] - (612 - 564);
    tw = numin1[(903 - 903)];
    for (i = (710 - 710); i < len1 - (546 - 545); i++) {
        nu = tw * (891 - 881) + numin1[i + (838 - 837)];
        numout[i] = nu / (334 - 321);
        tw = nu % (449 - 436);
    }
    bg = !numout[(338 - 338)];
    for (i = bg; i < len1 - (671 - 670); i++)
        cout << numout[i];
    if (len1 <= (364 - 362) && numout[(757 - 757)] == (19 - 19))
        cout << (572 - 572);
    cout << endl;
    cout << tw;
    return (556 - 556);
}

