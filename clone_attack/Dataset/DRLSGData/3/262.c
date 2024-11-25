int kKj39awhTWLe (const  void  *tLThtwZ, const  void  *MkO5tRwjU6) {
    if (*(int*) tLThtwZ > *(int*) MkO5tRwjU6)
        return (654 - 653);
    if (*(int*) MkO5tRwjU6 > *(int*) tLThtwZ)
        return -(157 - 156);
    if (!(*(int*) MkO5tRwjU6 != *(int*) tLThtwZ))
        return (283 - 283);
}

int main () {
    int oOMs86a5r;
    int DGXcVh;
    int Td7RYTjOK;
    int hUHfgWI;
    int Yz9MEvRue;
    int ZROWo96U [(1257 - 257)];
    oOMs86a5r = (149 - 149);
    scanf ("%d%d", &DGXcVh, &Td7RYTjOK);
    {
        hUHfgWI = (585 - 585);
        for (; hUHfgWI < DGXcVh;) {
            scanf ("%d", &ZROWo96U[hUHfgWI]);
            hUHfgWI = hUHfgWI + (742 - 741);
        }
    }
    qsort (ZROWo96U, DGXcVh, (842 - 838), kKj39awhTWLe);
    {
        hUHfgWI = (865 - 865);
        for (; hUHfgWI < DGXcVh -(954 - 953);) {
            {
                Yz9MEvRue = DGXcVh -(36 - 35);
                for (; Yz9MEvRue > hUHfgWI;) {
                    if (ZROWo96U[hUHfgWI] + ZROWo96U[Yz9MEvRue] < Td7RYTjOK)
                        break;
                    else {
                        if (ZROWo96U[hUHfgWI] + ZROWo96U[Yz9MEvRue] == Td7RYTjOK) {
                            oOMs86a5r = (991 - 990);
                            break;
                        }
                        else
                            ;
                    }
                    Yz9MEvRue = Yz9MEvRue -1;
                }
            }
            if (oOMs86a5r == (181 - 180))
                break;
            hUHfgWI = hUHfgWI + 1;
        }
    }
    if (oOMs86a5r == 1)
        ;
    else
        printf ("no");
}

