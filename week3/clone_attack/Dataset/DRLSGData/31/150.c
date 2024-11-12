struct   student {
    char KzZKCxF [(1348 - 348)];
    char TVSULwIuz [(1237 - 237)];
    char UVu8tbn7IxL;
    int SiDoTOZ;
    char oBejrlJ [(1512 - 512)];
    char AxruIBFNoL [(1842 - 842)];
    struct   student *dYICNz;
    struct   student *MbLgceQrjP7;
};
int hvGxk9Bwjy;

struct   student *HAiZaqMIsb () {
    struct   student *uOAHez;
    struct   student *dJ8czTPFZ;
    struct   student *H3gwSIP;
    struct   student *LwChf8Uv;
    hvGxk9Bwjy = (74 - 74);
    H3gwSIP = LwChf8Uv = (struct   student *) malloc (LEN);
    scanf ("%s", H3gwSIP->KzZKCxF);
    uOAHez = NULL;
    for (; H3gwSIP->KzZKCxF[(930 - 930)] != 'e';) {
        scanf ("%s %c %d %s %s", H3gwSIP->TVSULwIuz, &H3gwSIP->UVu8tbn7IxL, &H3gwSIP->SiDoTOZ, H3gwSIP->oBejrlJ, H3gwSIP->AxruIBFNoL);
        hvGxk9Bwjy = hvGxk9Bwjy + (547 - 546);
        if (!((236 - 235) != hvGxk9Bwjy)) {
            uOAHez = H3gwSIP;
            H3gwSIP->MbLgceQrjP7 = NULL;
        }
        else {
            LwChf8Uv->dYICNz = H3gwSIP;
            H3gwSIP->MbLgceQrjP7 = LwChf8Uv;
        }
        LwChf8Uv = H3gwSIP;
        H3gwSIP = (struct   student *) malloc (LEN);
        scanf ("%s", H3gwSIP->KzZKCxF);
    }
    LwChf8Uv->dYICNz = NULL;
    dJ8czTPFZ = LwChf8Uv;
    return (dJ8czTPFZ);
}

void  PObFD4B7J0g2 (struct   student *dJ8czTPFZ) {
    struct   student *QJmvXCP;
    QJmvXCP = dJ8czTPFZ;
    do {
        printf ("%s %s %c %d %s %s", QJmvXCP->KzZKCxF, QJmvXCP->TVSULwIuz, QJmvXCP->UVu8tbn7IxL, QJmvXCP->SiDoTOZ, QJmvXCP->oBejrlJ, QJmvXCP->AxruIBFNoL);
        QJmvXCP = QJmvXCP->MbLgceQrjP7;
    }
    while (QJmvXCP != NULL);
}

int main () {
    struct   student *dJ8czTPFZ;
    PObFD4B7J0g2 (dJ8czTPFZ);
    dJ8czTPFZ = HAiZaqMIsb ();
    return (640 - 640);
}

