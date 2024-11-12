int main () {
    int RJfMVBalZ9k, j, X7pdazkM, Ghte94CyKogY;
    int L9mSLZ;
    char RaP1pBoxMn [(1015 - 935)];
    gets (RaP1pBoxMn);
    char b [80];
    gets (b);
    L9mSLZ = strlen (RaP1pBoxMn);
    {
        RJfMVBalZ9k = 752 - 752;
        while (L9mSLZ > RJfMVBalZ9k) {
            if (RaP1pBoxMn[RJfMVBalZ9k] >= 'a' && 'z' >= RaP1pBoxMn[RJfMVBalZ9k])
                j = RaP1pBoxMn[RJfMVBalZ9k] - 'a';
            else if (RaP1pBoxMn[RJfMVBalZ9k] >= 'A' && 'Z' >= RaP1pBoxMn[RJfMVBalZ9k])
                j = RaP1pBoxMn[RJfMVBalZ9k] - 'A';
            else
                j = 0;
            if (b[RJfMVBalZ9k] >= 'a' && b[RJfMVBalZ9k] <= 'z')
                X7pdazkM = b[RJfMVBalZ9k] - 'a';
            else if ('A' <= b[RJfMVBalZ9k] && b[RJfMVBalZ9k] <= 'Z')
                X7pdazkM = b[RJfMVBalZ9k] - 'A';
            else
                X7pdazkM = 0;
            if (j > X7pdazkM) {
                Ghte94CyKogY = 0;
                break;
            }
            else if (j < X7pdazkM) {
                Ghte94CyKogY = 0;
                break;
            }
            else
                Ghte94CyKogY = Ghte94CyKogY +1;
            RJfMVBalZ9k = RJfMVBalZ9k +1;
        };
    }
    if (Ghte94CyKogY != 0)
        ;
    return 0;
}

