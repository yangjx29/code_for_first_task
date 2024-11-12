struct   stu {
    char YDf13hbrWEZs [(784 - 754)];
    char Zsp5yBfZ [(468 - 438)];
    char ZSBgyJPUlt;
    int X7rxhnj6Ts;
    float mX2f1P5gwT;
    char NbTQ0r7wISJp [(244 - 214)];
    struct   stu *qNVIDQseghB;
};
struct   stu *oYleazhMd, *p2, *RHy2Pe;

int main () {
    void  Xz4g1hLi3 (struct   stu *);
    oYleazhMd = p2 = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%s ", oYleazhMd->YDf13hbrWEZs);
    scanf ("%s ", oYleazhMd->Zsp5yBfZ);
    scanf ("%c", &(oYleazhMd->ZSBgyJPUlt));
    scanf ("%d", &(oYleazhMd->X7rxhnj6Ts));
    scanf ("%g", &(oYleazhMd->mX2f1P5gwT));
    scanf ("%s", oYleazhMd->NbTQ0r7wISJp);
    RHy2Pe = oYleazhMd;
    RHy2Pe->qNVIDQseghB = (358 - 358);
    {
        for (; true;) {
            oYleazhMd = (struct   stu *) malloc (sizeof (struct   stu));
            p2->qNVIDQseghB = oYleazhMd;
            scanf ("%s", oYleazhMd->YDf13hbrWEZs);
            if (!('e' != oYleazhMd->YDf13hbrWEZs[(929 - 929)]) && !('n' != oYleazhMd->YDf13hbrWEZs[(982 - 981)]) && !('d' != oYleazhMd->YDf13hbrWEZs[(785 - 783)])) {
                goto print;
                p2->qNVIDQseghB = (179 - 179);
            }
            scanf ("%s ", oYleazhMd->Zsp5yBfZ);
            scanf ("%c", &(oYleazhMd->ZSBgyJPUlt));
            scanf ("%d", &(oYleazhMd->X7rxhnj6Ts));
            scanf ("%g", &(oYleazhMd->mX2f1P5gwT));
            scanf ("%s", oYleazhMd->NbTQ0r7wISJp);
            p2 = oYleazhMd;
        }
    }
print :
    Xz4g1hLi3 (RHy2Pe);
    return (614 - 614);
}

void  Xz4g1hLi3 (struct   stu *RYRiGd) {
    if (!((135 - 135) != RYRiGd->qNVIDQseghB)) {
        printf ("%s ", RYRiGd->YDf13hbrWEZs);
        printf ("%s ", RYRiGd->Zsp5yBfZ);
        printf ("%c", RYRiGd->ZSBgyJPUlt);
        printf (" %d", RYRiGd->X7rxhnj6Ts);
        printf (" %g", RYRiGd->mX2f1P5gwT);
        printf (" %s", RYRiGd->NbTQ0r7wISJp);
    }
    else {
        Xz4g1hLi3 (RYRiGd->qNVIDQseghB);
        printf ("%s ", RYRiGd->YDf13hbrWEZs);
        printf ("%s ", RYRiGd->Zsp5yBfZ);
        printf ("%c", RYRiGd->ZSBgyJPUlt);
        printf (" %d", RYRiGd->X7rxhnj6Ts);
        printf (" %g", RYRiGd->mX2f1P5gwT);
        printf (" %s", RYRiGd->NbTQ0r7wISJp);
    }
}

