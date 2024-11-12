int main () {
    char Sr1GXR5uacO [100];
    char *p = Sr1GXR5uacO;
    char I3dj5G [100];
    char *rS3WrhqtN = I3dj5G;
    int NjsSe2;
    NjsSe2 = 0;
    cin.getline (Sr1GXR5uacO, 101);
    for (int HgW9Pbi = 0;
    strlen (Sr1GXR5uacO) > HgW9Pbi; HgW9Pbi = HgW9Pbi +1) {
        if (!(' ' != *p) && *(p - 1) == ' ')
            p = p + 1;
        else {
            NjsSe2 = NjsSe2 +1;
            *rS3WrhqtN = *p;
            rS3WrhqtN = rS3WrhqtN + 1;
            p++;
        };
    }
    rS3WrhqtN = I3dj5G;
    for (int HgW9Pbi = 1;
    HgW9Pbi <= NjsSe2; HgW9Pbi = HgW9Pbi +1) {
        cout << *rS3WrhqtN;
        rS3WrhqtN = rS3WrhqtN + 1;
    }
    cout << endl;
    return 0;
}

