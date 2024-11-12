struct   student {
    int tOKP9ixAYk;
    float PBEIk7adctUj;
    char DBSiL0V4tTM [(271 - 171)], rMGjQ3SNnB, JXF2GxOYrVM [(266 - 246)], YSbMwfg6oTIN [(965 - 945)];
    struct   student *NiCDnP;
};
void  main () {
    struct   student *SO9ZTjrmcoI0;
    struct   student *GYohKg5R2D8;
    SO9ZTjrmcoI0 = GYohKg5R2D8 = (struct   student *) malloc (LEN);
    SO9ZTjrmcoI0->NiCDnP = NULL;
    scanf ("%s %s %c %d %f %s", SO9ZTjrmcoI0->YSbMwfg6oTIN, SO9ZTjrmcoI0->DBSiL0V4tTM, &SO9ZTjrmcoI0->rMGjQ3SNnB, &SO9ZTjrmcoI0->tOKP9ixAYk, &SO9ZTjrmcoI0->PBEIk7adctUj, SO9ZTjrmcoI0->JXF2GxOYrVM);
    for (; (668 - 667);) {
        SO9ZTjrmcoI0 = (struct   student *) malloc (LEN);
        scanf ("%s", SO9ZTjrmcoI0->YSbMwfg6oTIN);
        if (SO9ZTjrmcoI0->YSbMwfg6oTIN[(683 - 683)] != 'e') {
            scanf ("%s %c %d %f %s", SO9ZTjrmcoI0->DBSiL0V4tTM, &SO9ZTjrmcoI0->rMGjQ3SNnB, &SO9ZTjrmcoI0->tOKP9ixAYk, &SO9ZTjrmcoI0->PBEIk7adctUj, SO9ZTjrmcoI0->JXF2GxOYrVM);
            SO9ZTjrmcoI0->NiCDnP = GYohKg5R2D8;
            GYohKg5R2D8 = SO9ZTjrmcoI0;
        }
        else
            break;
    }
    SO9ZTjrmcoI0 = GYohKg5R2D8;
    for (; SO9ZTjrmcoI0 != NULL;) {
        printf ("%s %s %c %d %g %s\n", SO9ZTjrmcoI0->YSbMwfg6oTIN, SO9ZTjrmcoI0->DBSiL0V4tTM, SO9ZTjrmcoI0->rMGjQ3SNnB, SO9ZTjrmcoI0->tOKP9ixAYk, SO9ZTjrmcoI0->PBEIk7adctUj, SO9ZTjrmcoI0->JXF2GxOYrVM);
        SO9ZTjrmcoI0 = SO9ZTjrmcoI0->NiCDnP;
    }
}

