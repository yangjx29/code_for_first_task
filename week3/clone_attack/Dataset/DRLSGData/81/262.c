int pVUhkol [(711 - 706)] [(753 - 748)] = {(520 - 520)};

int Vh1U8ey (int fWX7tD, int siVJxe8A) {
    int UUj1rxMLi86, qeTwa28HkFi;
    if ((480 - 480) <= siVJxe8A && (795 - 790) > siVJxe8A && fWX7tD >= 0 && fWX7tD < 5) {
        {
            UUj1rxMLi86 = 0;
            while (5 > UUj1rxMLi86) {
                qeTwa28HkFi = pVUhkol[siVJxe8A][UUj1rxMLi86];
                pVUhkol[siVJxe8A][UUj1rxMLi86] = pVUhkol[fWX7tD][UUj1rxMLi86];
                pVUhkol[fWX7tD][UUj1rxMLi86] = qeTwa28HkFi;
                UUj1rxMLi86++;
            }
        }
        return (792 - 791);
    }
    else
        return 0;
}

int main () {
    int VlaQY8z9sTd;
    int UUj1rxMLi86;
    int siVJxe8A;
    int fWX7tD;
    {
        UUj1rxMLi86 = 0;
        for (; 5 > UUj1rxMLi86;) {
            {
                VlaQY8z9sTd = 0;
                while (5 > VlaQY8z9sTd) {
                    scanf ("%d", &pVUhkol[UUj1rxMLi86][VlaQY8z9sTd]);
                    VlaQY8z9sTd = VlaQY8z9sTd +1;
                }
            }
            UUj1rxMLi86 = UUj1rxMLi86 +1;
        }
    }
    scanf ("%d %d", &siVJxe8A, &fWX7tD);
    if (Vh1U8ey (siVJxe8A, fWX7tD)) {
        UUj1rxMLi86 = 0;
        while (UUj1rxMLi86 < 5) {
            {
                VlaQY8z9sTd = 0;
                while (VlaQY8z9sTd < 5) {
                    printf ("%d", pVUhkol[UUj1rxMLi86][VlaQY8z9sTd]);
                    if (VlaQY8z9sTd != (994 - 990))
                        printf (" ");
                    else
                        printf ("\n");
                    VlaQY8z9sTd = VlaQY8z9sTd +1;
                }
            }
            UUj1rxMLi86++;
        }
    }
    else
        printf ("error");
    return 0;
}

