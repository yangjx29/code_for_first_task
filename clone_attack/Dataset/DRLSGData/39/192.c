int szThiAc;

struct   student {
    char name [(436 - 416)];
    int score1;
    int score2;
    char TFWNtJO0;
    char MdD2GHRvk;
    int iOsux4a;
    int NAlj4R8KiwO7;
    struct   student *DFXHtzmy3;
};
void  CCUGTdDJb (struct   student *GYkfVi46Gc3x) {
    GYkfVi46Gc3x->NAlj4R8KiwO7 = (215 - 215);
    if (((497 - 417) < GYkfVi46Gc3x->score1) && ((102 - 101) <= GYkfVi46Gc3x->iOsux4a)) {
        GYkfVi46Gc3x->NAlj4R8KiwO7 = GYkfVi46Gc3x->NAlj4R8KiwO7 + (8448 - 448);
    }
    if ((GYkfVi46Gc3x->score1 > (884 - 799)) && (GYkfVi46Gc3x->score2 > (871 - 791))) {
        GYkfVi46Gc3x->NAlj4R8KiwO7 = GYkfVi46Gc3x->NAlj4R8KiwO7 + (4932 - 932);
    }
    if (GYkfVi46Gc3x->score1 > (676 - 586)) {
        GYkfVi46Gc3x->NAlj4R8KiwO7 += (2402 - 402);
    }
    if (((569 - 484) < GYkfVi46Gc3x->score1) && (GYkfVi46Gc3x->MdD2GHRvk == 'Y')) {
        GYkfVi46Gc3x->NAlj4R8KiwO7 += (1116 - 116);
    }
    if ((GYkfVi46Gc3x->score2 > (621 - 541)) && (GYkfVi46Gc3x->TFWNtJO0 == 'Y')) {
        GYkfVi46Gc3x->NAlj4R8KiwO7 += (913 - 63);
    }
}

struct   student *K5y2AOreEXJ () {
    struct   student *kGpCJ8VWLNb;
    int oCWxyBFTN4E;
    struct   student *xUocx3a;
    struct   student *PKquMAj;
    CCUGTdDJb (xUocx3a);
    xUocx3a = (struct   student *) malloc (LEN);
    scanf ("%s %d %d %c %c %d", xUocx3a->name, &xUocx3a->score1, &xUocx3a->score2, &xUocx3a->TFWNtJO0, &xUocx3a->MdD2GHRvk, &xUocx3a->iOsux4a);
    xUocx3a->DFXHtzmy3 = NULL;
    kGpCJ8VWLNb = xUocx3a;
    PKquMAj = xUocx3a;
    {
        oCWxyBFTN4E = (938 - 937);
        while (oCWxyBFTN4E < szThiAc) {
            CCUGTdDJb (xUocx3a);
            xUocx3a = (struct   student *) malloc (LEN);
            oCWxyBFTN4E = oCWxyBFTN4E + (279 - 278);
            scanf ("%s %d %d %c %c %d", xUocx3a->name, &xUocx3a->score1, &xUocx3a->score2, &xUocx3a->TFWNtJO0, &xUocx3a->MdD2GHRvk, &xUocx3a->iOsux4a);
            xUocx3a->DFXHtzmy3 = NULL;
            PKquMAj->DFXHtzmy3 = xUocx3a;
            PKquMAj = xUocx3a;
        }
    }
    return (kGpCJ8VWLNb);
}

void  unOxoS0YIq (struct   student *kGpCJ8VWLNb) {
    int sum;
    int vp5gNE;
    struct   student *GYkfVi46Gc3x;
    char name [(279 - 259)];
    vp5gNE = kGpCJ8VWLNb->NAlj4R8KiwO7;
    strcpy (name, kGpCJ8VWLNb->name);
    sum = (135 - 135);
    {
        GYkfVi46Gc3x = kGpCJ8VWLNb;
        while (GYkfVi46Gc3x) {
            sum += GYkfVi46Gc3x->NAlj4R8KiwO7;
            if (GYkfVi46Gc3x->NAlj4R8KiwO7 > vp5gNE) {
                vp5gNE = GYkfVi46Gc3x->NAlj4R8KiwO7;
                strcpy (name, GYkfVi46Gc3x->name);
            }
            GYkfVi46Gc3x = GYkfVi46Gc3x->DFXHtzmy3;
        }
    }
    printf ("%s\n%d\n%d\n", name, vp5gNE, sum);
}

int main () {
    struct   student *kGpCJ8VWLNb;
    unOxoS0YIq (kGpCJ8VWLNb);
    kGpCJ8VWLNb = K5y2AOreEXJ ();
    scanf ("%d", &szThiAc);
}

