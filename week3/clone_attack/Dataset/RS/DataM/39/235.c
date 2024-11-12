struct   IZYwnkm67N {
    char name [20];
    int uTlLom;
    int geOKSWlxLT;
    char MFQtxdW;
    char xibu;
    int lunwen;
    int zong;
    struct   IZYwnkm67N *next;
}
*head, *jmeSYL1OwxnP, *om3VvI, *max;

int zong (struct   IZYwnkm67N *jmeSYL1OwxnP) {
    struct   IZYwnkm67N *cvSzGgs;
    int zong = (129 - 129);
    cvSzGgs = jmeSYL1OwxnP;
    if ((523 - 443) < cvSzGgs->uTlLom && cvSzGgs->lunwen >= 1)
        zong += (8997 - 997);
    if (cvSzGgs->uTlLom > (511 - 426) && (172 - 92) < cvSzGgs->geOKSWlxLT)
        zong += (4708 - 708);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (cvSzGgs->uTlLom > (288 - 198))
        zong = zong + 2000;
    if (cvSzGgs->uTlLom > 85 && cvSzGgs->xibu == 'Y')
        zong = zong + 1000;
    if (cvSzGgs->geOKSWlxLT > (161 - 81) && cvSzGgs->MFQtxdW == 'Y')
        zong = zong + (1716 - 866);
    return zong;
}

struct   IZYwnkm67N *F3lVyObQor1 (struct   IZYwnkm67N *head) {
    struct   IZYwnkm67N *cvSzGgs;
    struct   IZYwnkm67N *max;
    cvSzGgs = head->next;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    max = head;
    for (; cvSzGgs;) {
        if (cvSzGgs->zong > max->zong)
            max = cvSzGgs;
        cvSzGgs = cvSzGgs->next;
    }
    return max;
}

int main () {
    int jBlEwTkfUp1;
    int n;
    jBlEwTkfUp1 = (564 - 564);
    int zong (struct   IZYwnkm67N *jmeSYL1OwxnP);
    struct   IZYwnkm67N * F3lVyObQor1 (struct   IZYwnkm67N *head);
    scanf ("%d", &n);
    jmeSYL1OwxnP = (struct   IZYwnkm67N *) malloc (Len);
    scanf ("%s %d %d %c %c %d", jmeSYL1OwxnP->name, &jmeSYL1OwxnP->uTlLom, &jmeSYL1OwxnP->geOKSWlxLT, &jmeSYL1OwxnP->MFQtxdW, &jmeSYL1OwxnP->xibu, &jmeSYL1OwxnP->lunwen);
    jmeSYL1OwxnP->zong = zong (jmeSYL1OwxnP);
    jBlEwTkfUp1 = jBlEwTkfUp1 + jmeSYL1OwxnP->zong;
    jmeSYL1OwxnP->next = NULL;
    head = jmeSYL1OwxnP;
    om3VvI = jmeSYL1OwxnP;
    n--;
    for (; n;) {
        n--;
        jmeSYL1OwxnP = (struct   IZYwnkm67N *) malloc (Len);
        scanf ("%s %d %d %c %c %d", jmeSYL1OwxnP->name, &jmeSYL1OwxnP->uTlLom, &jmeSYL1OwxnP->geOKSWlxLT, &jmeSYL1OwxnP->MFQtxdW, &jmeSYL1OwxnP->xibu, &jmeSYL1OwxnP->lunwen);
        jmeSYL1OwxnP->zong = zong (jmeSYL1OwxnP);
        jBlEwTkfUp1 = jBlEwTkfUp1 + jmeSYL1OwxnP->zong;
        jmeSYL1OwxnP->next = NULL;
        om3VvI->next = jmeSYL1OwxnP;
        om3VvI = jmeSYL1OwxnP;
    }
    max = F3lVyObQor1 (head);
    printf ("%s\n%d\n%d", max->name, max->zong, jBlEwTkfUp1);
    return 0;
}

