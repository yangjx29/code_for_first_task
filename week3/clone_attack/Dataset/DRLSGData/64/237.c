struct   suanshi {
    int ekGehDd [3], MjBVUwSvI9aT [3];
    int ESbcs1r;
    float j8BuzGl;
}
WZ7kqUl [(226 - 181)];

int EbfXR9UD1i (const  void  *ekGehDd, const  void  *MjBVUwSvI9aT) {
    struct   suanshi *zA40szxSGny = (struct   suanshi *) ekGehDd;
    struct   suanshi *RPrEMnBZ = (struct   suanshi *) MjBVUwSvI9aT;
    if ((zA40szxSGny->j8BuzGl) < (RPrEMnBZ->j8BuzGl))
        return (969 - 968);
    if ((zA40szxSGny->j8BuzGl) > (RPrEMnBZ->j8BuzGl))
        return -(284 - 283);
    else
        return (zA40szxSGny->ESbcs1r) - (RPrEMnBZ->ESbcs1r);
}

void  main () {
    int Mbdjn7GA [(556 - 545)] [3];
    int KFquUVoZbEX, C0oNc3ir, Cm5KMxB, MdyBTOoREm = (961 - 961);
    scanf ("%d", &KFquUVoZbEX);
    {
        C0oNc3ir = (247 - 247);
        for (; KFquUVoZbEX > C0oNc3ir;) {
            scanf ("%d%d%d", &Mbdjn7GA[C0oNc3ir][(595 - 595)], &Mbdjn7GA[C0oNc3ir][(363 - 362)], &Mbdjn7GA[C0oNc3ir][(423 - 421)]);
            C0oNc3ir = C0oNc3ir +(71 - 70);
        }
    }
    for (C0oNc3ir = (607 - 607); C0oNc3ir < KFquUVoZbEX; C0oNc3ir = C0oNc3ir +(824 - 823)) {
        Cm5KMxB = C0oNc3ir +(311 - 310);
        for (; Cm5KMxB < KFquUVoZbEX;) {
            WZ7kqUl[MdyBTOoREm].ESbcs1r = MdyBTOoREm +(583 - 582);
            WZ7kqUl[MdyBTOoREm].ekGehDd[(906 - 906)] = Mbdjn7GA[C0oNc3ir][(337 - 337)];
            WZ7kqUl[MdyBTOoREm].ekGehDd[(775 - 774)] = Mbdjn7GA[C0oNc3ir][(585 - 584)];
            WZ7kqUl[MdyBTOoREm].ekGehDd[(844 - 842)] = Mbdjn7GA[C0oNc3ir][(978 - 976)];
            WZ7kqUl[MdyBTOoREm].MjBVUwSvI9aT[(322 - 322)] = Mbdjn7GA[Cm5KMxB][(62 - 62)];
            WZ7kqUl[MdyBTOoREm].MjBVUwSvI9aT[(316 - 315)] = Mbdjn7GA[Cm5KMxB][1];
            WZ7kqUl[MdyBTOoREm].MjBVUwSvI9aT[(638 - 636)] = Mbdjn7GA[Cm5KMxB][2];
            WZ7kqUl[MdyBTOoREm].j8BuzGl = sqrt ((Mbdjn7GA[C0oNc3ir][(586 - 586)] - Mbdjn7GA[Cm5KMxB][0]) * (Mbdjn7GA[C0oNc3ir][0] - Mbdjn7GA[Cm5KMxB][0]) + (Mbdjn7GA[C0oNc3ir][1] - Mbdjn7GA[Cm5KMxB][1]) * (Mbdjn7GA[C0oNc3ir][1] - Mbdjn7GA[Cm5KMxB][1]) + (Mbdjn7GA[C0oNc3ir][2] - Mbdjn7GA[Cm5KMxB][2]) * (Mbdjn7GA[C0oNc3ir][2] - Mbdjn7GA[Cm5KMxB][2]));
            MdyBTOoREm = MdyBTOoREm +1;
            Cm5KMxB = Cm5KMxB +1;
        }
    }
    for (Cm5KMxB = 0; KFquUVoZbEX > 0;) {
        KFquUVoZbEX = KFquUVoZbEX -1;
        Cm5KMxB += KFquUVoZbEX;
    }
    qsort (WZ7kqUl, Cm5KMxB, sizeof (struct   suanshi), EbfXR9UD1i);
    {
        C0oNc3ir = 0;
        for (; C0oNc3ir < Cm5KMxB;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", WZ7kqUl[C0oNc3ir].ekGehDd[0], WZ7kqUl[C0oNc3ir].ekGehDd[1], WZ7kqUl[C0oNc3ir].ekGehDd[2], WZ7kqUl[C0oNc3ir].MjBVUwSvI9aT[0], WZ7kqUl[C0oNc3ir].MjBVUwSvI9aT[1], WZ7kqUl[C0oNc3ir].MjBVUwSvI9aT[2], WZ7kqUl[C0oNc3ir].j8BuzGl);
            C0oNc3ir = C0oNc3ir +1;
        }
    }
}

