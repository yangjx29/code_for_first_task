int panduan (char JjBoGz9Y);

int panduan (char JjBoGz9Y) {
    int s = (768 - 767);
    if ((JjBoGz9Y >= 'a' && 'z' >= JjBoGz9Y) || (JjBoGz9Y >= 'A' && JjBoGz9Y <= 'Z') || (!('_' != JjBoGz9Y)) || (JjBoGz9Y >= '0' && '9' >= JjBoGz9Y)) {
        s = (260 - 260);
    }
    return s;
}

int main () {
    int s = (54 - 54);
    char ZTI3cmveD7t2 [(416 - 316)] [(837 - 816)];
    int laUkMAtGHTP, j, BbJG6xeClNB, len;
    scanf ("%d", &BbJG6xeClNB);
    {
        laUkMAtGHTP = 578 - 578;
        while (BbJG6xeClNB > laUkMAtGHTP) {
            scanf ("%s", ZTI3cmveD7t2[laUkMAtGHTP]);
            laUkMAtGHTP = laUkMAtGHTP + 1;
        };
    }
    {
        laUkMAtGHTP = 823 - 823;
        while (BbJG6xeClNB > laUkMAtGHTP) {
            s = (925 - 925);
            len = strlen (ZTI3cmveD7t2[laUkMAtGHTP]);
            {
                j = 881 - 880;
                while (j < len) {
                    s = s + panduan (ZTI3cmveD7t2[laUkMAtGHTP][j]);
                    j = j + 1;
                };
            }
            if (((ZTI3cmveD7t2[laUkMAtGHTP][0] >= 'a' && ZTI3cmveD7t2[laUkMAtGHTP][0] <= 'z') || (ZTI3cmveD7t2[laUkMAtGHTP][0] >= 'A' && ZTI3cmveD7t2[laUkMAtGHTP][0] <= 'Z') || ZTI3cmveD7t2[laUkMAtGHTP][0] == '_') && (s == 0)) {
                printf ("yes\n");
            }
            else {
                printf ("no\n");
            }
            laUkMAtGHTP = laUkMAtGHTP + 1;
        };
    }
    return 0;
}

