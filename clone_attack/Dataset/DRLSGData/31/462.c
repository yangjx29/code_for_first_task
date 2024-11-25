struct   student {
    char YoqEeLh58 [(117 - 87)];
    char tBafyTbAg [(644 - 614)];
    char dahwlEStnx;
    float G65qyDFgmBx9;
    float ukmT72Xo5dea;
    char hSIvNT [(840 - 810)];
    struct   student *DnUJkKe4zY, *eev6uWp;
};
void  main () {
    struct   student *EE05JxKw;
    struct   student *ja21lT;
    struct   student *z6EljBd;
    EE05JxKw = (struct   student *) malloc (sizeof (struct   student));
    ja21lT = EE05JxKw;
    EE05JxKw->eev6uWp = (402 - 402);
    for (; (717 - 716);) {
        scanf ("%s", ja21lT->YoqEeLh58);
        if (!((381 - 381) != strcmp (ja21lT->YoqEeLh58, "end")))
            break;
        scanf ("%s %c %f %f %s", ja21lT->tBafyTbAg, &ja21lT->dahwlEStnx, &ja21lT->G65qyDFgmBx9, &ja21lT->ukmT72Xo5dea, ja21lT->hSIvNT);
        ja21lT->DnUJkKe4zY = (struct   student *) malloc (sizeof (struct   student));
        ja21lT->DnUJkKe4zY->eev6uWp = ja21lT;
        ja21lT = ja21lT->DnUJkKe4zY;
    }
    z6EljBd = ja21lT->eev6uWp;
    z6EljBd->DnUJkKe4zY = (798 - 798);
    ja21lT = z6EljBd;
    for (; ja21lT != (442 - 442);) {
        printf ("%s %s %c %g %g %s\n", ja21lT->YoqEeLh58, ja21lT->tBafyTbAg, ja21lT->dahwlEStnx, ja21lT->G65qyDFgmBx9, ja21lT->ukmT72Xo5dea, ja21lT->hSIvNT);
        ja21lT = ja21lT->eev6uWp;
    }
}

