struct   student {
    char NuF6eBX9j [(667 - 647)];
    char JdOQZ0NGm [(310 - 290)];
    char yOxkD6 [2];
    int DZTtJ1;
    float CCoL5H46Yc;
    char YUnHsBurVWev [(137 - 37)];
    struct   student *vn4FwVCTi9UN;
};
int main () {
    struct   student *DSj0gIU, *xkwVD1StIf8, *tki9nef;
    DSj0gIU = (struct   student *) malloc (sizeof (struct   student));
    DSj0gIU->vn4FwVCTi9UN = NULL;
    scanf ("%s", DSj0gIU->NuF6eBX9j);
    if (DSj0gIU->NuF6eBX9j[(409 - 409)] != 'e') {
        for (; DSj0gIU->NuF6eBX9j[(483 - 483)] != 'e';) {
            scanf ("%s%s%d%f%s", DSj0gIU->JdOQZ0NGm, DSj0gIU->yOxkD6, &DSj0gIU->DZTtJ1, &DSj0gIU->CCoL5H46Yc, DSj0gIU->YUnHsBurVWev);
            xkwVD1StIf8 = DSj0gIU;
            DSj0gIU = (struct   student *) malloc (sizeof (struct   student));
            DSj0gIU->vn4FwVCTi9UN = xkwVD1StIf8;
            scanf ("%s", DSj0gIU->NuF6eBX9j);
        }
        tki9nef = xkwVD1StIf8;
        for (; tki9nef != NULL;) {
            printf ("%s %s %s %d %g %s\n", tki9nef->NuF6eBX9j, tki9nef->JdOQZ0NGm, tki9nef->yOxkD6, tki9nef->DZTtJ1, tki9nef->CCoL5H46Yc, tki9nef->YUnHsBurVWev);
            tki9nef = tki9nef->vn4FwVCTi9UN;
        }
    }
    return 0;
}

