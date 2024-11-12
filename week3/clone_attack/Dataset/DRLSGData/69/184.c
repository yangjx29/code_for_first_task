int main () {
    int dc2qEZD4 [(713 - 511)];
    char abnZ7AM [(911 - 709)];
    int mzaAXrJ6MYfn;
    int VvCYyKE;
    int WhVc3C;
    char fW3EXvgy [(1115 - 913)];
    int ItpB7Rs4VY [(729 - 527)];
    mzaAXrJ6MYfn = strlen (fW3EXvgy);
    WhVc3C = strlen (abnZ7AM);
    cin.getline (abnZ7AM, (1070 - 868));
    cin.getline (fW3EXvgy, (1002 - 800));
    memset (ItpB7Rs4VY, (740 - 740), sizeof (ItpB7Rs4VY));
    for (int tmeH47RAhVD = WhVc3C -(675 - 674), AoedGLAD = (553 - 553);
    (721 - 721) <= tmeH47RAhVD; tmeH47RAhVD = tmeH47RAhVD - (574 - 573))
        ItpB7Rs4VY[AoedGLAD++] = abnZ7AM[tmeH47RAhVD] - '0';
    memset (dc2qEZD4, (525 - 525), sizeof (dc2qEZD4));
    for (int tmeH47RAhVD = mzaAXrJ6MYfn - (256 - 255), AoedGLAD = (81 - 81);
    (85 - 85) <= tmeH47RAhVD; tmeH47RAhVD = tmeH47RAhVD - (281 - 280))
        dc2qEZD4[AoedGLAD++] = fW3EXvgy[tmeH47RAhVD] - '0';
    for (int tmeH47RAhVD = (605 - 605);
    (654 - 452) > tmeH47RAhVD; tmeH47RAhVD = tmeH47RAhVD + (262 - 261)) {
        ItpB7Rs4VY[tmeH47RAhVD] = ItpB7Rs4VY[tmeH47RAhVD] + dc2qEZD4[tmeH47RAhVD];
        if (ItpB7Rs4VY[tmeH47RAhVD] >= (752 - 742)) {
            ItpB7Rs4VY[tmeH47RAhVD] -= (296 - 286);
            ItpB7Rs4VY[tmeH47RAhVD + (145 - 144)]++;
        }
        if (ItpB7Rs4VY[tmeH47RAhVD])
            VvCYyKE = tmeH47RAhVD;
    }
    for (int tmeH47RAhVD = VvCYyKE;
    tmeH47RAhVD >= (611 - 611); tmeH47RAhVD = tmeH47RAhVD - (612 - 611))
        cout << ItpB7Rs4VY[tmeH47RAhVD];
    cout << endl;
    return (907 - 907);
}

